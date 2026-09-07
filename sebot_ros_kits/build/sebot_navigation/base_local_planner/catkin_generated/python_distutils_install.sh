#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/root/workspace/sebot-t710-competition/sebot_ros_kits/src/sebot_navigation/base_local_planner"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/root/workspace/sebot-t710-competition/sebot_ros_kits/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/root/workspace/sebot-t710-competition/sebot_ros_kits/install/lib/python2.7/dist-packages:/root/workspace/sebot-t710-competition/sebot_ros_kits/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/root/workspace/sebot-t710-competition/sebot_ros_kits/build" \
    "/usr/bin/python2" \
    "/root/workspace/sebot-t710-competition/sebot_ros_kits/src/sebot_navigation/base_local_planner/setup.py" \
     \
    build --build-base "/root/workspace/sebot-t710-competition/sebot_ros_kits/build/sebot_navigation/base_local_planner" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/root/workspace/sebot-t710-competition/sebot_ros_kits/install" --install-scripts="/root/workspace/sebot-t710-competition/sebot_ros_kits/install/bin"
