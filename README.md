# sebot-t710-competition

2026 第二十八届中国机器人及人工智能大赛（CRAIC）  
**百度智能云智能服务机器人赛** 参赛项目源码。

本项目基于 ROS 服务机器人平台开发，实现自主建图、定位导航、视觉识别、订单识别、零件识别以及机械臂抓取与配送等功能。

## 🎬 项目演示

[![Bilibili](https://img.shields.io/badge/Bilibili-点击观看项目演示-00A1D6?logo=bilibili&logoColor=white)](https://www.bilibili.com/video/BV1tzgR6hEmd/)

演示视频：  
https://www.bilibili.com/video/BV1tzgR6hEmd/

## 🤖 任务流程

### 1. 自主环境探索

机器人从起始区出发：

`启动 → 自主探索 → SLAM 建图 → 返回起始区`

### 2. 自主配送服务

机器人自主完成：

`寻找工作台 → 识别订单 → 前往零件台 → 识别并抓取零件 → 配送至对应工作台 → 返回起始区 → 显示物料清单`

## 🧠 主要功能

- ROS 机器人系统
- SLAM 自主建图
- 自主定位与导航
- 路径规划与避障
- 订单与零件视觉识别
- ArUco 定位
- 机械臂控制
- 零件抓取与放置
- EdgeBoard AI 模型部署

## 📁 项目结构

```text
sebot-t710-competition/
├── sebot_factory/
├── sebot_ros_kits/
├── sebot_ros_stdr/
└── .gitattributes
```

## 🛠 技术栈

- Ubuntu
- ROS
- C++ / Python
- OpenCV
- PaddlePaddle
- EdgeBoard
- SLAM
- Computer Vision
- Robotic Arm Control
