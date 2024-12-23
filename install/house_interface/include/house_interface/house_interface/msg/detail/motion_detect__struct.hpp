// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from house_interface:msg/MotionDetect.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "house_interface/msg/motion_detect.hpp"


#ifndef HOUSE_INTERFACE__MSG__DETAIL__MOTION_DETECT__STRUCT_HPP_
#define HOUSE_INTERFACE__MSG__DETAIL__MOTION_DETECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__house_interface__msg__MotionDetect __attribute__((deprecated))
#else
# define DEPRECATED__house_interface__msg__MotionDetect __declspec(deprecated)
#endif

namespace house_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionDetect_
{
  using Type = MotionDetect_<ContainerAllocator>;

  explicit MotionDetect_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion = false;
    }
  }

  explicit MotionDetect_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion = false;
    }
  }

  // field types and members
  using _motion_type =
    bool;
  _motion_type motion;

  // setters for named parameter idiom
  Type & set__motion(
    const bool & _arg)
  {
    this->motion = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    house_interface::msg::MotionDetect_<ContainerAllocator> *;
  using ConstRawPtr =
    const house_interface::msg::MotionDetect_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<house_interface::msg::MotionDetect_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<house_interface::msg::MotionDetect_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      house_interface::msg::MotionDetect_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<house_interface::msg::MotionDetect_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      house_interface::msg::MotionDetect_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<house_interface::msg::MotionDetect_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<house_interface::msg::MotionDetect_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<house_interface::msg::MotionDetect_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__house_interface__msg__MotionDetect
    std::shared_ptr<house_interface::msg::MotionDetect_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__house_interface__msg__MotionDetect
    std::shared_ptr<house_interface::msg::MotionDetect_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionDetect_ & other) const
  {
    if (this->motion != other.motion) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionDetect_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionDetect_

// alias to use template instance with default allocator
using MotionDetect =
  house_interface::msg::MotionDetect_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace house_interface

#endif  // HOUSE_INTERFACE__MSG__DETAIL__MOTION_DETECT__STRUCT_HPP_
