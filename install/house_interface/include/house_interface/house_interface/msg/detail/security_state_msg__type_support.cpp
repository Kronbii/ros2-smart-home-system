// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from house_interface:msg/SecurityStateMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "house_interface/msg/detail/security_state_msg__functions.h"
#include "house_interface/msg/detail/security_state_msg__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace house_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SecurityStateMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) house_interface::msg::SecurityStateMsg(_init);
}

void SecurityStateMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<house_interface::msg::SecurityStateMsg *>(message_memory);
  typed_message->~SecurityStateMsg();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SecurityStateMsg_message_member_array[1] = {
  {
    "security_state_msg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(house_interface::msg::SecurityStateMsg, security_state_msg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SecurityStateMsg_message_members = {
  "house_interface::msg",  // message namespace
  "SecurityStateMsg",  // message name
  1,  // number of fields
  sizeof(house_interface::msg::SecurityStateMsg),
  false,  // has_any_key_member_
  SecurityStateMsg_message_member_array,  // message members
  SecurityStateMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  SecurityStateMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SecurityStateMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SecurityStateMsg_message_members,
  get_message_typesupport_handle_function,
  &house_interface__msg__SecurityStateMsg__get_type_hash,
  &house_interface__msg__SecurityStateMsg__get_type_description,
  &house_interface__msg__SecurityStateMsg__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace house_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<house_interface::msg::SecurityStateMsg>()
{
  return &::house_interface::msg::rosidl_typesupport_introspection_cpp::SecurityStateMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, house_interface, msg, SecurityStateMsg)() {
  return &::house_interface::msg::rosidl_typesupport_introspection_cpp::SecurityStateMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
