// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from house_interface:msg/LightStateMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "house_interface/msg/light_state_msg.hpp"


#ifndef HOUSE_INTERFACE__MSG__DETAIL__LIGHT_STATE_MSG__TRAITS_HPP_
#define HOUSE_INTERFACE__MSG__DETAIL__LIGHT_STATE_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "house_interface/msg/detail/light_state_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace house_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const LightStateMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: light_state_msg
  {
    out << "light_state_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.light_state_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LightStateMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: light_state_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_state_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.light_state_msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LightStateMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace house_interface

namespace rosidl_generator_traits
{

[[deprecated("use house_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const house_interface::msg::LightStateMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  house_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use house_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const house_interface::msg::LightStateMsg & msg)
{
  return house_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<house_interface::msg::LightStateMsg>()
{
  return "house_interface::msg::LightStateMsg";
}

template<>
inline const char * name<house_interface::msg::LightStateMsg>()
{
  return "house_interface/msg/LightStateMsg";
}

template<>
struct has_fixed_size<house_interface::msg::LightStateMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<house_interface::msg::LightStateMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<house_interface::msg::LightStateMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HOUSE_INTERFACE__MSG__DETAIL__LIGHT_STATE_MSG__TRAITS_HPP_
