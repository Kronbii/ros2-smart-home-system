// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from house_interface:msg/MotionDetect.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "house_interface/msg/motion_detect.hpp"


#ifndef HOUSE_INTERFACE__MSG__DETAIL__MOTION_DETECT__BUILDER_HPP_
#define HOUSE_INTERFACE__MSG__DETAIL__MOTION_DETECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "house_interface/msg/detail/motion_detect__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace house_interface
{

namespace msg
{

namespace builder
{

class Init_MotionDetect_motion
{
public:
  Init_MotionDetect_motion()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::house_interface::msg::MotionDetect motion(::house_interface::msg::MotionDetect::_motion_type arg)
  {
    msg_.motion = std::move(arg);
    return std::move(msg_);
  }

private:
  ::house_interface::msg::MotionDetect msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::house_interface::msg::MotionDetect>()
{
  return house_interface::msg::builder::Init_MotionDetect_motion();
}

}  // namespace house_interface

#endif  // HOUSE_INTERFACE__MSG__DETAIL__MOTION_DETECT__BUILDER_HPP_
