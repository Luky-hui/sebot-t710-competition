# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "roscpp;tf;nav_msgs;stdr_msgs;actionlib;nodelet;map_server;visualization_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lstdr_map_loader".split(';') if "-lstdr_map_loader" != "" else []
PROJECT_NAME = "stdr_server"
PROJECT_SPACE_DIR = "/root/workspace/sebot-t710-competition/sebot_ros_stdr/install"
PROJECT_VERSION = "0.3.2"
