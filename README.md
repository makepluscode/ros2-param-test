# ros2-param-test
Parameter set test

'''
clone https://github.com/makepluscode/ros2-param-test
cd ros2-param-test/
'''
 
colcon build
source ./install/setup.bash 
ros2 run param-test param

ros2 param list
ros2 param set /param_node state start
