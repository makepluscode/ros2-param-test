cmake_minimum_required(VERSION 3.5)
project(param-test)

# Default to C++14
set(CMAKE_CXX_STANDARD 14)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)

add_executable(param src/param.cpp)
ament_target_dependencies(param rclcpp)

install(TARGETS
  param
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
