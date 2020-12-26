# ros2-param-test
Parameter set test

1. Clone this git repository
```
git clone https://github.com/makepluscode/ros2-param-test
cd ros2-param-test/
```

2. Build with colcon, install and run
```
colcon build
source ./install/setup.bash 
ros2 run param-test param
```

3. On another terminal run the below commends
```
ros2 param list
ros2 param set /param_node state start
```
