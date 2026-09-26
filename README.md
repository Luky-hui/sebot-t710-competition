# sebot-t710-competition

![ROS](https://img.shields.io/badge/ROS-1-22314E?style=flat-square&logo=ros)
![C++](https://img.shields.io/badge/C++-14-00599C?style=flat-square&logo=cplusplus)
![Python](https://img.shields.io/badge/Python-3.x-3776AB?style=flat-square&logo=python)
![OpenCV](https://img.shields.io/badge/OpenCV-enabled-5C3EE8?style=flat-square&logo=opencv)
![PaddlePaddle](https://img.shields.io/badge/PaddlePaddle-EdgeBoard-0062B1?style=flat-square)

2026 第二十八届中国机器人及人工智能大赛（CRAIC）百度智能云智能服务机器人赛参赛项目源码。

本仓库是一套 ROS 1 服务机器人比赛工程，代码覆盖真实机器人底盘、激光雷达、里程计/IMU 融合、SLAM 建图、AMCL 定位、`move_base` 导航、订单视觉识别、零件视觉识别、机械臂串口控制、抓取/放置流程和最终物料清单展示。比赛主流程由 `sebot_factory` 状态机调度，真实机器人能力由 `sebot_ros_kits` 提供，STDR 仿真能力由 `sebot_ros_stdr` 提供。

演示视频：[https://www.bilibili.com/video/BV1tzgR6hEmd/](https://www.bilibili.com/video/BV1tzgR6hEmd/)

## 工作空间结构

```text
sebot-t710-competition/
├── sebot_factory/                 # 比赛任务工作空间
│   └── src/
│       ├── sebot_factory/         # 智能工厂任务主包
│       └── sebot_marking/         # Qt/RViz 辅助界面
├── sebot_ros_kits/                # 真实机器人 ROS 套件工作空间
│   └── src/
│       ├── sebot_driver/          # RPLIDAR、URDF、MoveIt、robot_pose_ekf
│       ├── sebot_navigation/      # AMCL、move_base、costmap、地图和导航参数
│       ├── sebot_robot/           # 底盘串口、cmd_vel、odom、imu、TF、键盘/手柄控制
│       ├── sebot_slam/            # gmapping、hector、自主探索建图
│       ├── sebot_speech/          # /audio 话题播报
│       └── sebot_visions/         # 图像采集辅助脚本
└── sebot_ros_stdr/                # STDR 仿真工作空间
    └── src/
        └── sebot_stdr/            # STDR server、GUI、AMCL、move_base、导航巡航
```

三个一级目录都是 catkin 工作空间，目录中保留 `src/`、`build/`、`devel/` 和 `.catkin_workspace`。

## 总体任务流程

### 1. 自主建图

`sebot_auto_gmapping.launch` 启动以下链路：

```text
sebot_controller -> rplidar_ros -> robot_pose_ekf -> sebot_transform
-> gmapping -> move_base -> auto_slam -> rviz -> sebot_audio
```

`auto_slam.cpp` 使用 `FrontierSearch` 在 costmap 中搜索未知边界，将边界质心作为 `move_base` 目标点；目标无法推进时加入黑名单；没有可探索边界后执行完成逻辑并触发返航。

启动：

```bash
cd sebot_ros_kits
source devel/setup.bash
roslaunch sebot_slam sebot_auto_gmapping.launch
```

保存地图：

```bash
roslaunch sebot_slam sebot_map_save.launch
```

保存路径由源码指定为：

```text
sebot_ros_kits/src/sebot_navigation/sebot_navigation/map/map
```

### 2. 自主配送

`sebot_factory/src/sebot_factory/src/factory.cpp` 是比赛主状态机，流程如下：

```text
FACTORY_STEP_START
-> FACTORY_STEP_INIT
-> FACTORY_STEP_DELIVERY
-> FACTORY_STEP_SUMMARY
```

主流程展开后是：

```text
播报开始
-> 发布 /initialpose 完成起始点重定位
-> 导航到工作台
-> Confirm 识别订单
-> 导航到取件台
-> Picking 抓取零件
-> 清理 /move_base/clear_costmaps
-> 在取件台位置再次发布 /initialpose
-> 返回工作台
-> Picking 放置零件
-> 处理下一个零件或下一个工作台
-> 导航到结算区
-> Summary 显示物料清单
-> 机械臂复位并失能
```

启动：

```bash
source sebot_ros_kits/devel/setup.bash
source sebot_factory/devel/setup.bash
roslaunch sebot_factory sebot_factory.launch
```

## 比赛主包 sebot_factory

### 已启用编译目标

当前 `sebot_factory/src/sebot_factory/CMakeLists.txt` 已启用以下目标：

| 目标 | 源码 | 说明 |
| --- | --- | --- |
| `sebot_factory` | `src/factory.cpp` | 完整智能工厂任务 |
| `sebot_yolo` | `unit/yolo.cpp` | AI 目标检测调试 |
| `sebot_summary` | `unit/pay.cpp` | 结算画面调试 |
| `sebot_arm` | `unit/arm.cpp` | 机械臂串口动作调试 |

当前 `CMakeLists.txt` 中 `sebot_confirm` 与 `sebot_picking` 目标处于注释状态；`sebot_ordering.launch` 与 `sebot_picking.launch` 引用了这两个节点，若要单独运行这两个 launch，需要先在 `CMakeLists.txt` 中启用对应目标并重新编译。

### 主状态机

`Factory` 类维护：

- `Location`：工作台、取件台、起始点、结算区
- `Table`：工作台点位、订单列表、已确认标志、待放置标志、放置计数
- `Navigation`：`move_base` 到达状态、超时状态、AMCL 位姿、当前导航点类型
- `ordersSummary`：最终交给 `Summary` 的工作台订单数据

点位从下面文件读取：

```text
sebot_factory/src/sebot_factory/res/location.xml
```

当前点位包含：

```text
工作台-1
工作台-2
工作台-3
工作台-4
取件台
起始点
结算区
```

`location.xml` 中的 `position` 与 `orientation` 会被转换为 `move_base_msgs::MoveBaseGoal`，坐标系写入为 `map`。

### 取件台目标点修正

`factory.cpp` 在前往取件台时不会直接复用固定点位，而是按当前工作台和当前零件调整 `servingGoal`：

| 条件 | 修正 |
| --- | --- |
| `tableId == 2` 且零件为 `LABEL_AI_SCREW` | `x -= 0.20` |
| `tableId == 4` 且 `partPlace == 2` 且零件为 `LABEL_AI_BLOCK` | `x += 0.70`，`y += 0.10` |
| 零件为 `LABEL_AI_TAPE` | `x += 0.80` |
| 零件为 `LABEL_AI_PCB` | `x += 0.20` |
| 零件为 `LABEL_AI_NUT` | `x -= 0.10` |

这些修正写在 `Factory::naviToWorkStation(StationNavi::STATION_SERVING)` 中。

## 订单确认 Confirm

源码位置：

```text
sebot_factory/src/sebot_factory/src/confirm.cpp
```

`Confirm` 类负责到达工作台后的订单识别，状态机如下：

```text
CONFIRM_STEP_START
-> CONFIRM_STEP_POSE
-> CONFIRM_STEP_PART
-> CONFIRM_STEP_END
```

核心逻辑：

- 订阅 `/scan`，从机器人前方左右两侧提取激光距离。
- 发布 `/cmd_vel`，用 PID 调整机器人与订单牌的距离、朝向和横向位置。
- 使用 `Detection` 对相机图像执行推理。
- 先定位 `order` 订单牌，再只统计订单牌框内的零件。
- 多帧采样，零件出现次数达到源码阈值后进入最终订单。
- 最终订单按目标框 Y 轴中心从上到下排序，写入 `orders`。

识别标签由 `tools.hpp` 定义：

```text
LABEL_AI_NUT    -> nut
LABEL_AI_SCREW  -> screw
LABEL_AI_PCB    -> pcb
LABEL_AI_BLOCK  -> block
LABEL_AI_TAPE   -> tape
LABEL_AI_ORDER  -> order
```

## 取件与放置 Picking

源码位置：

```text
sebot_factory/src/sebot_factory/src/picking.cpp
```

`Picking` 类负责取件台抓取和工作台放置，状态机如下：

```text
PICK_STEP_START
-> PICK_STEP_POSE
-> PICK_STEP_SEARCH
-> PICK_STEP_FORWARD
-> PICK_STEP_AIM
-> PICK_STEP_GRAB
-> PICK_STEP_LOCAL
-> PICK_STEP_END
```

### 抓取流程

`pickupSomething(part)` 的主要动作：

```text
到达取件台后短距离前进
-> 深度相机画面中搜索目标零件
-> 通过 /scan 和 /cmd_vel 做距离/姿态/横向校正
-> 机械臂执行 ACTION_EXT 伸展
-> 切换机械臂 RGB 相机
-> 初始化机械爪
-> RGB 相机检测 ArUco，未检测到 ArUco 时搜索蓝色区域
-> 机械爪 PD 跟随目标
-> 底盘缓慢推进到 disClaw
-> 机械爪夹取
-> 机械爪抬升
-> 机械臂执行 ACTION_CUR 收缩
-> 底盘后退到适合导航距离
```

### 放置流程

`putdownSomething(part)` 的主要动作：

```text
根据 disPick 调整工作台前距离
-> 机械臂执行 ACTION_PUT
-> 根据 placePart 选择中间/左侧/右侧偏移
-> 机械爪放开零件
-> 机械爪抬升
-> 底盘后退
-> 机械臂执行 ACTION_CUR 收缩
```

`placePart` 的含义：

```text
1 -> 中间
2 -> 左侧
3 -> 右侧
```

## AI 推理 Detection

源码位置：

```text
sebot_factory/src/sebot_factory/include/detection.hpp
```

`Detection` 封装了 EdgeBoard 推理和 ONNX 后处理：

```text
OpenCV 读取图像
-> resize 到 320x320
-> RGB 转换与归一化
-> PPNCPredictor 执行 NNA 主体推理
-> ONNX Runtime 执行 post.onnx 后处理
-> PPNCPredictor 执行 NMS
-> 生成 PredictResult 列表
```

模型目录：

```text
sebot_factory/src/sebot_factory/res/model/
```

当前模型文件：

```text
config_ppncnna.json
config_ppncnms.json
deploy_paddle.params
deploy_paddle.ro
deploy_paddle.so
deploy_paddle.tar
devc.o
io_paddle.json
label_list.txt
lib0.o
nms.tar
nms.tar.so
post.onnx
```

当前标签文件 `label_list.txt` 内容：

```text
block
nut
order
pcb
screw
tape
```

## 机械臂 Talon

源码位置：

```text
sebot_factory/src/sebot_factory/include/arm.hpp
```

机械臂通过 `libserial` 打开串口：

```text
/dev/talon
```

串口参数：

```text
115200 baud
8 data bits
no parity
1 stop bit
no flow control
```

支持的动作：

```text
ACTION_RES -> 机械臂复位
ACTION_EXT -> 机械臂伸展
ACTION_CUR -> 机械臂收缩
ACTION_PUT -> 机械臂放置
ACTION_DIY -> 自定义动作
```

支持的控制能力：

- 所有关节使能/失能
- 机械臂位姿控制
- 单关节角度控制
- 多关节角度控制
- 机械爪运动控制
- 机械爪初始化
- 动作组执行反馈解析

## 结算显示 Summary

源码位置：

```text
sebot_factory/src/sebot_factory/src/summary.cpp
```

`Summary` 接收 `vector<Order>`，根据订单数量选择显示方式：

```text
0 个订单 -> None.png
1 个工作台 -> tableOne
2 个工作台 -> tableTwo
3 个工作台 -> tableThree
超过 3 个工作台 -> tableMore 轮播
```

零件编号映射：

| 标签 | 编号 |
| --- | --- |
| `screw` | `G111` |
| `nut` | `G112` |
| `pcb` | `G113` |
| `block` | `G114` |
| `tape` | `G115` |

当前 `res/image/` 中存在：

```text
background.png
block.png
None.png
nut.png
pcb.png
screw.png
table.png
tape.png
```

`summary.cpp` 构造函数中读取了 `money.png` 与 `money(red).png`，当前 `res/image/` 中没有这两个文件；当前显示逻辑没有把这两个变量绘制到结果图中。

## 真实机器人底盘与导航

### sebot_controller

源码位置：

```text
sebot_ros_kits/src/sebot_robot/src/controller.cpp
```

底盘串口：

```text
/dev/robot
```

订阅：

```text
cmd_vel
```

按参数发布：

```text
odom
imu
msgUltraLF
msgUltraMF
msgUltraRF
msgUltraMB
```

参数：

```text
/sebot_controller/ultraEnale
/sebot_controller/odomEnable
/sebot_controller/imuEnable
```

### 静态 TF

源码位置：

```text
sebot_ros_kits/src/sebot_robot/src/transform.cpp
```

发布以下坐标系：

```text
base_footprint -> imu
base_footprint -> laser
base_footprint -> camera
base_footprint -> ultraLF
base_footprint -> ultraMF
base_footprint -> ultraRF
base_footprint -> ultraMB
```

### RPLIDAR

启动文件：

```text
sebot_ros_kits/src/sebot_driver/rplidar_ros/launch/rplidar.launch
```

设备与参数：

```text
serial_port: /dev/rplidar
serial_baudrate: 115200
frame_id: laser
inverted: false
angle_compensate: true
```

### robot_pose_ekf

启动文件：

```text
sebot_ros_kits/src/sebot_driver/robot_pose_ekf/launch/robot_pose_ekf.launch
```

关键参数：

```text
output_frame: odom_combined
base_footprint_frame: base_footprint
freq: 30.0
odom_used: true
imu_used: true
vo_used: false
odom -> /odom
imu_data -> /imu
```

## 常用启动命令

### 编译真实机器人工作空间

```bash
cd sebot_ros_kits
catkin_make
source devel/setup.bash
```

### 编译比赛任务工作空间

```bash
cd sebot_factory
catkin_make
source devel/setup.bash
```

### 启动自主建图

```bash
source sebot_ros_kits/devel/setup.bash
roslaunch sebot_slam sebot_auto_gmapping.launch
```

### 启动手柄建图

```bash
source sebot_ros_kits/devel/setup.bash
roslaunch sebot_slam sebot_gmapping.launch
```

### 保存地图

```bash
source sebot_ros_kits/devel/setup.bash
roslaunch sebot_slam sebot_map_save.launch
```

### 启动导航

```bash
source sebot_ros_kits/devel/setup.bash
roslaunch sebot_navigation sebot_navigation.launch
```

### 启动多点导航

```bash
source sebot_ros_kits/devel/setup.bash
roslaunch sebot_navigation sebot_multinavi.launch
```

`multinavi.cpp` 当前读取的 XML 路径为硬编码路径：

```text
/root/workspace/sebot-t710-competition/sebot_ros_kits/src/sebot_catering/res/location.xml
```

### 启动完整比赛任务

```bash
source sebot_ros_kits/devel/setup.bash
source sebot_factory/devel/setup.bash
roslaunch sebot_factory sebot_factory.launch
```

### AI 检测调试

```bash
source sebot_factory/devel/setup.bash
roslaunch sebot_factory sebot_yolo.launch
```

### 结算界面调试

```bash
source sebot_factory/devel/setup.bash
roslaunch sebot_factory sebot_paying.launch
```

### 机械臂调试

```bash
source sebot_factory/devel/setup.bash
roslaunch sebot_factory sebot_arm.launch
```

## 设备与路径检查

源码中直接使用或启动文件中配置了以下设备/路径：

| 项目 | 源码值 |
| --- | --- |
| 底盘串口 | `/dev/robot` |
| 激光雷达串口 | `/dev/rplidar` |
| 机械臂串口 | `/dev/talon` |
| 深度相机默认回退路径 | `/dev/deepCamera` |
| 机械臂 RGB 相机默认回退路径 | `/dev/rgbCamera` |
| 语音资源硬编码根路径 | `/root/workspace/sebot-t710-competition/sebot_ros_kits/src/sebot_speech/res/audio/match/` |
| 多点导航 XML 硬编码路径 | `/root/workspace/sebot-t710-competition/sebot_ros_kits/src/sebot_catering/res/location.xml` |

如果部署目录不是 `/root/workspace/sebot-t710-competition`，需要同步修改相关源码或建立对应路径。

## 运行参数

`sebot_factory.launch` 中的主参数：

| 参数 | 作用 |
| --- | --- |
| `delayStart` | 启动延时，等待其它 ROS 节点启动 |
| `timeoutNavi` | 导航超时重发目标的时间 |
| `simulation` | STDR 仿真模式开关 |
| `pidPoseKp` / `pidPoseKi` / `pidPoseKd` | 方向 PID |
| `pidDisKp` / `pidDisKi` / `pidDisKd` | 距离 PID |
| `pidLocalKp` / `pidLocalKi` / `pidLocalKd` | 图像横向位置 PID |
| `pidClawXKp` / `pidClawXKi` / `pidClawXKd` | 机械爪 X 方向 PID |
| `pidClawYKp` / `pidClawYKi` / `pidClawYKd` | 机械爪 Y 方向 PID |
| `disClaw` | 机械爪夹取距离 |
| `disPick` | 机械臂抓取/放置距离 |
| `disSearch` | AI 搜索距离 |
| `disOrder` | 订单确认距离 |
| `debug` | OpenCV 调试窗口开关 |
| `score` | AI 检测置信度阈值 |

## 技术栈

- Ubuntu
- ROS 1
- catkin
- C++14
- Python 3
- OpenCV
- OpenCV ArUco
- PaddlePaddle EdgeBoard `ppnc`
- ONNX Runtime C++ API
- `libserial`
- RPLIDAR
- `robot_pose_ekf`
- `gmapping`
- `hector_mapping`
- `amcl`
- `move_base`
- MoveIt
- STDR Simulator

## 参赛任务覆盖

本项目源码覆盖以下比赛能力：

- 自主探索建图
- 地图保存与复用
- AMCL 重定位
- 工作台、取件台、结算区导航
- 工作台订单识别
- 零件识别与订单排序
- 取件台零件搜索
- 机械臂伸展、夹取、收缩和放置
- 基于 ArUco/颜色区域的机械爪视觉对准
- 配送完成后的物料清单展示
- 任务语音播报

## 参考资料

README 写法参考：

- [GitHub Docs: About READMEs](https://docs.github.com/en/repositories/managing-your-repositorys-settings-and-features/customizing-your-repository/about-readmes)
- [Google Style Guides: READMEs](https://google.github.io/styleguide/docguide/READMEs.html)
- [Standard Readme](https://github.com/RichardLitt/standard-readme)
- [README Best Practices](https://github.com/jehna/readme-best-practices)
- [Awesome README Examples](https://github.com/sway3406/awesome-readme-examples)


