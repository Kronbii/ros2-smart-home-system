// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from house_interface:msg/SecurityStateMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "house_interface/msg/security_state_msg.hpp"


#ifndef HOUSE_INTERFACE__MSG__DETAIL__SECURITY_STATE_MSG__STRUCT_HPP_
#define HOUSE_INTERFACE__MSG__DETAIL__SECURITY_STATE_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__house_interface__msg__SecurityStateMsg __attribute__((deprecated))
#else
# define DEPRECATED__house_interface__msg__SecurityStateMsg __declspec(deprecated)
#endif

namespace house_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SecurityStateMsg_
{
  using Type = SecurityStateMsg_<ContainerAllocator>;

  explicit SecurityStateMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->security_state_msg = "";
    }
  }

  explicit SecurityStateMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : security_state_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->security_state_msg = "";
    }
  }

  // field types and members
  using _security_state_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _security_state_msg_type security_state_msg;

  // setters for named parameter idiom
  Type & set__security_state_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->security_state_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    house_interface::msg::SecurityStateMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const house_interface::msg::SecurityStateMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<house_interface::msg::SecurityStateMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<house_interface::msg::SecurityStateMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      house_interface::msg::SecurityStateMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<house_interface::msg::SecurityStateMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      house_interface::msg::SecurityStateMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<house_interface::msg::SecurityStateMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<house_interface::msg::SecurityStateMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<house_interface::msg::SecurityStateMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__house_interface__msg__SecurityStateMsg
    std::shared_ptr<house_interface::msg::SecurityStateMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__house_interface__msg__SecurityStateMsg
    std::shared_ptr<house_interface::msg::SecurityStateMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SecurityStateMsg_ & other) const
  {
    if (this->security_state_msg != other.security_state_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const SecurityStateMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SecurityStateMsg_

// alias to use template instance with default allocator
using SecurityStateMsg =
  house_interface::msg::SecurityStateMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace house_interface

#endif  // HOUSE_INTERFACE__MSG__DETAIL__SECURITY_STATE_MSG__STRUCT_HPP_
