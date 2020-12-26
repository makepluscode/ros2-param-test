#include <rclcpp/rclcpp.hpp>

#include <chrono>
#include <string>
#include <functional>

using namespace std::chrono_literals;

class ParamNode: public rclcpp::Node
{
  public:
    ParamNode()
      : Node("param_node")
    {
      this->declare_parameter<std::string>("state", "stopped");
      timer_ = this->create_wall_timer(
        1000ms, std::bind(&ParamNode::timer_callback, this)
      );
    }

    void timer_callback()
    {
      this->get_parameter("state", param_);
      RCLCPP_INFO(this->get_logger(), "State is %s", param_.c_str());
    }

  private:
    std::string param_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);

  rclcpp::spin(std::make_shared<ParamNode>());

  rclcpp::shutdown();

  return 0;
}