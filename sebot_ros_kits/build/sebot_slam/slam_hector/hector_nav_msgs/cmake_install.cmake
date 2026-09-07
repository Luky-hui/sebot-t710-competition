# Install script for directory: /root/workspace/sebot-t710-competition/sebot_ros_kits/src/sebot_slam/slam_hector/hector_nav_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/root/workspace/sebot-t710-competition/sebot_ros_kits/install")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hector_nav_msgs/srv" TYPE FILE FILES
    "/root/workspace/sebot-t710-competition/sebot_ros_kits/src/sebot_slam/slam_hector/hector_nav_msgs/srv/GetDistanceToObstacle.srv"
    "/root/workspace/sebot-t710-competition/sebot_ros_kits/src/sebot_slam/slam_hector/hector_nav_msgs/srv/GetRecoveryInfo.srv"
    "/root/workspace/sebot-t710-competition/sebot_ros_kits/src/sebot_slam/slam_hector/hector_nav_msgs/srv/GetRobotTrajectory.srv"
    "/root/workspace/sebot-t710-competition/sebot_ros_kits/src/sebot_slam/slam_hector/hector_nav_msgs/srv/GetSearchPosition.srv"
    "/root/workspace/sebot-t710-competition/sebot_ros_kits/src/sebot_slam/slam_hector/hector_nav_msgs/srv/GetNormal.srv"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hector_nav_msgs/cmake" TYPE FILE FILES "/root/workspace/sebot-t710-competition/sebot_ros_kits/build/sebot_slam/slam_hector/hector_nav_msgs/catkin_generated/installspace/hector_nav_msgs-msg-paths.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/root/workspace/sebot-t710-competition/sebot_ros_kits/devel/include/hector_nav_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/root/workspace/sebot-t710-competition/sebot_ros_kits/devel/share/roseus/ros/hector_nav_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/root/workspace/sebot-t710-competition/sebot_ros_kits/devel/share/common-lisp/ros/hector_nav_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/root/workspace/sebot-t710-competition/sebot_ros_kits/devel/share/gennodejs/ros/hector_nav_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/root/workspace/sebot-t710-competition/sebot_ros_kits/devel/lib/python2.7/dist-packages/hector_nav_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/root/workspace/sebot-t710-competition/sebot_ros_kits/devel/lib/python2.7/dist-packages/hector_nav_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/root/workspace/sebot-t710-competition/sebot_ros_kits/build/sebot_slam/slam_hector/hector_nav_msgs/catkin_generated/installspace/hector_nav_msgs.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hector_nav_msgs/cmake" TYPE FILE FILES "/root/workspace/sebot-t710-competition/sebot_ros_kits/build/sebot_slam/slam_hector/hector_nav_msgs/catkin_generated/installspace/hector_nav_msgs-msg-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hector_nav_msgs/cmake" TYPE FILE FILES
    "/root/workspace/sebot-t710-competition/sebot_ros_kits/build/sebot_slam/slam_hector/hector_nav_msgs/catkin_generated/installspace/hector_nav_msgsConfig.cmake"
    "/root/workspace/sebot-t710-competition/sebot_ros_kits/build/sebot_slam/slam_hector/hector_nav_msgs/catkin_generated/installspace/hector_nav_msgsConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hector_nav_msgs" TYPE FILE FILES "/root/workspace/sebot-t710-competition/sebot_ros_kits/src/sebot_slam/slam_hector/hector_nav_msgs/package.xml")
endif()

