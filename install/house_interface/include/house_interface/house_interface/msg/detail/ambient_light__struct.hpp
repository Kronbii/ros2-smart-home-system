// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from house_interface:msg/AmbientLight.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "house_interface/msg/ambient_light.hpp"


#ifndef HOUSE_INTERFACE__MSG__DETAIL__AMBIENT_LIGHT__STRUCT_HPP_
#define HOUSE_INTERFACE__MSG__DETAIL__AMBIENT_LIGHT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__house_interface__msg__AmbientLight __attribute__((deprecated))
#else
# define DEPRECATED__house_interface__msg__AmbientLight __declspec(deprecated)
#endif

namespace house_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AmbientLight_
{
  using Type = AmbientLight_<ContainerAllocator>;

  explicit AmbientLight_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit AmbientLight_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    house_interface::msg::AmbientLight_<ContainerAllocator> *;
  using ConstRawPtr =
    const house_interface::msg::AmbientLight_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<house_interface::msg::AmbientLight_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<house_interface::msg::AmbientLight_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      house_interface::msg::AmbientLight_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<house_interface::msg::AmbientLight_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      house_interface::msg::AmbientLight_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<house_interface::msg::AmbientLight_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<house_interface::msg::AmbientLight_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<house_interface::msg::AmbientLight_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__house_interface__msg__AmbientLight
    std::shared_ptr<house_interface::msg::AmbientLight_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__house_interface__msg__AmbientLight
    std::shared_ptr<house_interface::msg::AmbientLight_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AmbientLight_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const AmbientLight_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AmbientLight_

// alias to use template instance with default allocator
using AmbientLight =
  house_interface::msg::AmbientLight_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace house_interface

#endif  // HOUSE_INTERFACE__MSG__DETAIL__AMBIENT_LIGHT__STRUCT_HPP_
