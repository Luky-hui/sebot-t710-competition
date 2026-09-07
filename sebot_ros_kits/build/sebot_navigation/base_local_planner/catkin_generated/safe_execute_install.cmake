execute_process(COMMAND "/root/workspace/sebot-t710-competition/sebot_ros_kits/build/sebot_navigation/base_local_planner/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/root/workspace/sebot-t710-competition/sebot_ros_kits/build/sebot_navigation/base_local_planner/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
