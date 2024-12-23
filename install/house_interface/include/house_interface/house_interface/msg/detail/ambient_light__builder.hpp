// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from house_interface:msg/AmbientLight.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "house_interface/msg/ambient_light.hpp"


#ifndef HOUSE_INTERFACE__MSG__DETAIL__AMBIENT_LIGHT__BUILDER_HPP_
#define HOUSE_INTERFACE__MSG__DETAIL__AMBIENT_LIGHT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "house_interface/msg/detail/ambient_light__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace house_interface
{

namespace msg
{


}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::house_interface::msg::AmbientLight>()
{
  return ::house_interface::msg::AmbientLight(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace house_interface

#endif  // HOUSE_INTERFACE__MSG__DETAIL__AMBIENT_LIGHT__BUILDER_HPP_
