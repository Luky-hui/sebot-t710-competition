# Install script for directory: /root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/root/workspace/sebot-t710-competition/sebot_ros_stdr/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/msg" TYPE FILE FILES
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/msg/Noise.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/msg/LaserSensorMsg.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/msg/SonarSensorMsg.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/msg/KinematicMsg.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/msg/FootprintMsg.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/msg/RobotMsg.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/msg/RobotIndexedMsg.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/msg/RobotIndexedVectorMsg.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/msg/RfidSensorMsg.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/msg/RfidSensorMeasurementMsg.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/msg/RfidTag.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/msg/RfidTagVector.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/msg/SoundSensorMsg.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/msg/SoundSensorMeasurementMsg.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/msg/SoundSource.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/msg/SoundSourceVector.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/msg/ThermalSensorMsg.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/msg/ThermalSensorMeasurementMsg.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/msg/ThermalSource.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/msg/ThermalSourceVector.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/msg/CO2SensorMsg.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/msg/CO2SensorMeasurementMsg.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/msg/CO2Source.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/msg/CO2SourceVector.msg"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/srv" TYPE FILE FILES
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/srv/LoadMap.srv"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/srv/LoadExternalMap.srv"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/srv/RegisterGui.srv"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/srv/MoveRobot.srv"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/srv/AddRfidTag.srv"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/srv/DeleteRfidTag.srv"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/srv/AddThermalSource.srv"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/srv/DeleteThermalSource.srv"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/srv/AddSoundSource.srv"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/srv/DeleteSoundSource.srv"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/srv/AddCO2Source.srv"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/srv/DeleteCO2Source.srv"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/action" TYPE FILE FILES
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/action/RegisterRobot.action"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/action/SpawnRobot.action"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/action/DeleteRobot.action"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/msg" TYPE FILE FILES
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/share/stdr_msgs/msg/RegisterRobotAction.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/share/stdr_msgs/msg/RegisterRobotActionGoal.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/share/stdr_msgs/msg/RegisterRobotActionResult.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/share/stdr_msgs/msg/RegisterRobotActionFeedback.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/share/stdr_msgs/msg/RegisterRobotGoal.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/share/stdr_msgs/msg/RegisterRobotResult.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/share/stdr_msgs/msg/RegisterRobotFeedback.msg"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/msg" TYPE FILE FILES
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/share/stdr_msgs/msg/SpawnRobotAction.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/share/stdr_msgs/msg/SpawnRobotActionGoal.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/share/stdr_msgs/msg/SpawnRobotActionResult.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/share/stdr_msgs/msg/SpawnRobotActionFeedback.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/share/stdr_msgs/msg/SpawnRobotGoal.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/share/stdr_msgs/msg/SpawnRobotResult.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/share/stdr_msgs/msg/SpawnRobotFeedback.msg"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/msg" TYPE FILE FILES
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/share/stdr_msgs/msg/DeleteRobotAction.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/share/stdr_msgs/msg/DeleteRobotActionGoal.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/share/stdr_msgs/msg/DeleteRobotActionResult.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/share/stdr_msgs/msg/DeleteRobotActionFeedback.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/share/stdr_msgs/msg/DeleteRobotGoal.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/share/stdr_msgs/msg/DeleteRobotResult.msg"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/share/stdr_msgs/msg/DeleteRobotFeedback.msg"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/cmake" TYPE FILE FILES "/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/sebot_stdr/stdr_msgs/catkin_generated/installspace/stdr_msgs-msg-paths.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/include/stdr_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/share/roseus/ros/stdr_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/share/common-lisp/ros/stdr_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/share/gennodejs/ros/stdr_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/lib/python2.7/dist-packages/stdr_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/root/workspace/sebot-t710-competition/sebot_ros_stdr/devel/lib/python2.7/dist-packages/stdr_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/sebot_stdr/stdr_msgs/catkin_generated/installspace/stdr_msgs.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/cmake" TYPE FILE FILES "/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/sebot_stdr/stdr_msgs/catkin_generated/installspace/stdr_msgs-msg-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/cmake" TYPE FILE FILES
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/sebot_stdr/stdr_msgs/catkin_generated/installspace/stdr_msgsConfig.cmake"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/sebot_stdr/stdr_msgs/catkin_generated/installspace/stdr_msgsConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs" TYPE FILE FILES "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/stdr_msgs" TYPE DIRECTORY FILES "/root/workspace/sebot-t710-competition/sebot_ros_stdr/src/sebot_stdr/stdr_msgs/include/" FILES_MATCHING REGEX "/[^/]*\\.h$")
endif()

