// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from house_interface:msg/SecurityStateMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "house_interface/msg/security_state_msg.hpp"


#ifndef HOUSE_INTERFACE__MSG__DETAIL__SECURITY_STATE_MSG__BUILDER_HPP_
#define HOUSE_INTERFACE__MSG__DETAIL__SECURITY_STATE_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "house_interface/msg/detail/security_state_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace house_interface
{

namespace msg
{

namespace builder
{

class Init_SecurityStateMsg_security_state_msg
{
public:
  Init_SecurityStateMsg_security_state_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::house_interface::msg::SecurityStateMsg security_state_msg(::house_interface::msg::SecurityStateMsg::_security_state_msg_type arg)
  {
    msg_.security_state_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::house_interface::msg::SecurityStateMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::house_interface::msg::SecurityStateMsg>()
{
  return house_interface::msg::builder::Init_SecurityStateMsg_security_state_msg();
}

}  // namespace house_interface

#endif  // HOUSE_INTERFACE__MSG__DETAIL__SECURITY_STATE_MSG__BUILDER_HPP_
