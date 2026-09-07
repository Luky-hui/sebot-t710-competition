# Install script for directory: /root/workspace/sebot-t710-competition/sebot_ros_stdr/src

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
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/root/workspace/sebot-t710-competition/sebot_ros_stdr/install/_setup_util.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/root/workspace/sebot-t710-competition/sebot_ros_stdr/install" TYPE PROGRAM FILES "/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/catkin_generated/installspace/_setup_util.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/root/workspace/sebot-t710-competition/sebot_ros_stdr/install/env.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/root/workspace/sebot-t710-competition/sebot_ros_stdr/install" TYPE PROGRAM FILES "/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/catkin_generated/installspace/env.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/root/workspace/sebot-t710-competition/sebot_ros_stdr/install/setup.bash;/root/workspace/sebot-t710-competition/sebot_ros_stdr/install/local_setup.bash")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/root/workspace/sebot-t710-competition/sebot_ros_stdr/install" TYPE FILE FILES
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/catkin_generated/installspace/setup.bash"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/catkin_generated/installspace/local_setup.bash"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/root/workspace/sebot-t710-competition/sebot_ros_stdr/install/setup.sh;/root/workspace/sebot-t710-competition/sebot_ros_stdr/install/local_setup.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/root/workspace/sebot-t710-competition/sebot_ros_stdr/install" TYPE FILE FILES
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/catkin_generated/installspace/setup.sh"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/catkin_generated/installspace/local_setup.sh"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/root/workspace/sebot-t710-competition/sebot_ros_stdr/install/setup.zsh;/root/workspace/sebot-t710-competition/sebot_ros_stdr/install/local_setup.zsh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/root/workspace/sebot-t710-competition/sebot_ros_stdr/install" TYPE FILE FILES
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/catkin_generated/installspace/setup.zsh"
    "/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/catkin_generated/installspace/local_setup.zsh"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/root/workspace/sebot-t710-competition/sebot_ros_stdr/install/.rosinstall")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/root/workspace/sebot-t710-competition/sebot_ros_stdr/install" TYPE FILE FILES "/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/catkin_generated/installspace/.rosinstall")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/gtest/cmake_install.cmake")
  include("/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/sebot_stdr/stdr_amcl/cmake_install.cmake")
  include("/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/sebot_stdr/stdr_hector_mapping/cmake_install.cmake")
  include("/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/sebot_stdr/stdr_launchers/cmake_install.cmake")
  include("/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/sebot_stdr/stdr_move_base/cmake_install.cmake")
  include("/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/sebot_stdr/stdr_msgs/cmake_install.cmake")
  include("/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/sebot_stdr/stdr_navigation/cmake_install.cmake")
  include("/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/sebot_stdr/stdr_resources/cmake_install.cmake")
  include("/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/sebot_stdr/stdr_simulator/cmake_install.cmake")
  include("/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/sebot_stdr/stdr_parser/cmake_install.cmake")
  include("/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/sebot_stdr/stdr_robot/cmake_install.cmake")
  include("/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/sebot_stdr/stdr_samples/cmake_install.cmake")
  include("/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/sebot_stdr/stdr_server/cmake_install.cmake")
  include("/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/sebot_stdr/stdr_gui/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/root/workspace/sebot-t710-competition/sebot_ros_stdr/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
