// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from house_interface:action/DimLight.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "house_interface/action/dim_light.hpp"


#ifndef HOUSE_INTERFACE__ACTION__DETAIL__DIM_LIGHT__STRUCT_HPP_
#define HOUSE_INTERFACE__ACTION__DETAIL__DIM_LIGHT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__house_interface__action__DimLight_Goal __attribute__((deprecated))
#else
# define DEPRECATED__house_interface__action__DimLight_Goal __declspec(deprecated)
#endif

namespace house_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DimLight_Goal_
{
  using Type = DimLight_Goal_<ContainerAllocator>;

  explicit DimLight_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_light_level = 0.0f;
    }
  }

  explicit DimLight_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_light_level = 0.0f;
    }
  }

  // field types and members
  using _target_light_level_type =
    float;
  _target_light_level_type target_light_level;

  // setters for named parameter idiom
  Type & set__target_light_level(
    const float & _arg)
  {
    this->target_light_level = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    house_interface::action::DimLight_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const house_interface::action::DimLight_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<house_interface::action::DimLight_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<house_interface::action::DimLight_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      house_interface::action::DimLight_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<house_interface::action::DimLight_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      house_interface::action::DimLight_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<house_interface::action::DimLight_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<house_interface::action::DimLight_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<house_interface::action::DimLight_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__house_interface__action__DimLight_Goal
    std::shared_ptr<house_interface::action::DimLight_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__house_interface__action__DimLight_Goal
    std::shared_ptr<house_interface::action::DimLight_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DimLight_Goal_ & other) const
  {
    if (this->target_light_level != other.target_light_level) {
      return false;
    }
    return true;
  }
  bool operator!=(const DimLight_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DimLight_Goal_

// alias to use template instance with default allocator
using DimLight_Goal =
  house_interface::action::DimLight_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace house_interface


#ifndef _WIN32
# define DEPRECATED__house_interface__action__DimLight_Result __attribute__((deprecated))
#else
# define DEPRECATED__house_interface__action__DimLight_Result __declspec(deprecated)
#endif

namespace house_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DimLight_Result_
{
  using Type = DimLight_Result_<ContainerAllocator>;

  explicit DimLight_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reached_light_level = 0.0f;
    }
  }

  explicit DimLight_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reached_light_level = 0.0f;
    }
  }

  // field types and members
  using _reached_light_level_type =
    float;
  _reached_light_level_type reached_light_level;

  // setters for named parameter idiom
  Type & set__reached_light_level(
    const float & _arg)
  {
    this->reached_light_level = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    house_interface::action::DimLight_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const house_interface::action::DimLight_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<house_interface::action::DimLight_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<house_interface::action::DimLight_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      house_interface::action::DimLight_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<house_interface::action::DimLight_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      house_interface::action::DimLight_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<house_interface::action::DimLight_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<house_interface::action::DimLight_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<house_interface::action::DimLight_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__house_interface__action__DimLight_Result
    std::shared_ptr<house_interface::action::DimLight_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__house_interface__action__DimLight_Result
    std::shared_ptr<house_interface::action::DimLight_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DimLight_Result_ & other) const
  {
    if (this->reached_light_level != other.reached_light_level) {
      return false;
    }
    return true;
  }
  bool operator!=(const DimLight_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DimLight_Result_

// alias to use template instance with default allocator
using DimLight_Result =
  house_interface::action::DimLight_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace house_interface


#ifndef _WIN32
# define DEPRECATED__house_interface__action__DimLight_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__house_interface__action__DimLight_Feedback __declspec(deprecated)
#endif

namespace house_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DimLight_Feedback_
{
  using Type = DimLight_Feedback_<ContainerAllocator>;

  explicit DimLight_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_light_level = 0.0f;
    }
  }

  explicit DimLight_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_light_level = 0.0f;
    }
  }

  // field types and members
  using _current_light_level_type =
    float;
  _current_light_level_type current_light_level;

  // setters for named parameter idiom
  Type & set__current_light_level(
    const float & _arg)
  {
    this->current_light_level = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    house_interface::action::DimLight_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const house_interface::action::DimLight_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<house_interface::action::DimLight_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<house_interface::action::DimLight_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      house_interface::action::DimLight_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<house_interface::action::DimLight_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      house_interface::action::DimLight_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<house_interface::action::DimLight_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<house_interface::action::DimLight_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<house_interface::action::DimLight_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__house_interface__action__DimLight_Feedback
    std::shared_ptr<house_interface::action::DimLight_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__house_interface__action__DimLight_Feedback
    std::shared_ptr<house_interface::action::DimLight_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DimLight_Feedback_ & other) const
  {
    if (this->current_light_level != other.current_light_level) {
      return false;
    }
    return true;
  }
  bool operator!=(const DimLight_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DimLight_Feedback_

// alias to use template instance with default allocator
using DimLight_Feedback =
  house_interface::action::DimLight_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace house_interface


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "house_interface/action/detail/dim_light__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__house_interface__action__DimLight_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__house_interface__action__DimLight_SendGoal_Request __declspec(deprecated)
#endif

namespace house_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DimLight_SendGoal_Request_
{
  using Type = DimLight_SendGoal_Request_<ContainerAllocator>;

  explicit DimLight_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit DimLight_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    house_interface::action::DimLight_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const house_interface::action::DimLight_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    house_interface::action::DimLight_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const house_interface::action::DimLight_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<house_interface::action::DimLight_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<house_interface::action::DimLight_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      house_interface::action::DimLight_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<house_interface::action::DimLight_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      house_interface::action::DimLight_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<house_interface::action::DimLight_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<house_interface::action::DimLight_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<house_interface::action::DimLight_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__house_interface__action__DimLight_SendGoal_Request
    std::shared_ptr<house_interface::action::DimLight_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__house_interface__action__DimLight_SendGoal_Request
    std::shared_ptr<house_interface::action::DimLight_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DimLight_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const DimLight_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DimLight_SendGoal_Request_

// alias to use template instance with default allocator
using DimLight_SendGoal_Request =
  house_interface::action::DimLight_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace house_interface


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__house_interface__action__DimLight_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__house_interface__action__DimLight_SendGoal_Response __declspec(deprecated)
#endif

namespace house_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DimLight_SendGoal_Response_
{
  using Type = DimLight_SendGoal_Response_<ContainerAllocator>;

  explicit DimLight_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit DimLight_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    house_interface::action::DimLight_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const house_interface::action::DimLight_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<house_interface::action::DimLight_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<house_interface::action::DimLight_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      house_interface::action::DimLight_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<house_interface::action::DimLight_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      house_interface::action::DimLight_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<house_interface::action::DimLight_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<house_interface::action::DimLight_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<house_interface::action::DimLight_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__house_interface__action__DimLight_SendGoal_Response
    std::shared_ptr<house_interface::action::DimLight_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__house_interface__action__DimLight_SendGoal_Response
    std::shared_ptr<house_interface::action::DimLight_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DimLight_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const DimLight_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DimLight_SendGoal_Response_

// alias to use template instance with default allocator
using DimLight_SendGoal_Response =
  house_interface::action::DimLight_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace house_interface


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__house_interface__action__DimLight_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__house_interface__action__DimLight_SendGoal_Event __declspec(deprecated)
#endif

namespace house_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DimLight_SendGoal_Event_
{
  using Type = DimLight_SendGoal_Event_<ContainerAllocator>;

  explicit DimLight_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit DimLight_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<house_interface::action::DimLight_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<house_interface::action::DimLight_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<house_interface::action::DimLight_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<house_interface::action::DimLight_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<house_interface::action::DimLight_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<house_interface::action::DimLight_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<house_interface::action::DimLight_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<house_interface::action::DimLight_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    house_interface::action::DimLight_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const house_interface::action::DimLight_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<house_interface::action::DimLight_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<house_interface::action::DimLight_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      house_interface::action::DimLight_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<house_interface::action::DimLight_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      house_interface::action::DimLight_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<house_interface::action::DimLight_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<house_interface::action::DimLight_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<house_interface::action::DimLight_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__house_interface__action__DimLight_SendGoal_Event
    std::shared_ptr<house_interface::action::DimLight_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__house_interface__action__DimLight_SendGoal_Event
    std::shared_ptr<house_interface::action::DimLight_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DimLight_SendGoal_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const DimLight_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DimLight_SendGoal_Event_

// alias to use template instance with default allocator
using DimLight_SendGoal_Event =
  house_interface::action::DimLight_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace house_interface

namespace house_interface
{

namespace action
{

struct DimLight_SendGoal
{
  using Request = house_interface::action::DimLight_SendGoal_Request;
  using Response = house_interface::action::DimLight_SendGoal_Response;
  using Event = house_interface::action::DimLight_SendGoal_Event;
};

}  // namespace action

}  // namespace house_interface


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__house_interface__action__DimLight_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__house_interface__action__DimLight_GetResult_Request __declspec(deprecated)
#endif

namespace house_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DimLight_GetResult_Request_
{
  using Type = DimLight_GetResult_Request_<ContainerAllocator>;

  explicit DimLight_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit DimLight_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    house_interface::action::DimLight_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const house_interface::action::DimLight_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<house_interface::action::DimLight_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<house_interface::action::DimLight_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      house_interface::action::DimLight_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<house_interface::action::DimLight_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      house_interface::action::DimLight_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<house_interface::action::DimLight_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<house_interface::action::DimLight_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<house_interface::action::DimLight_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__house_interface__action__DimLight_GetResult_Request
    std::shared_ptr<house_interface::action::DimLight_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__house_interface__action__DimLight_GetResult_Request
    std::shared_ptr<house_interface::action::DimLight_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DimLight_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const DimLight_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DimLight_GetResult_Request_

// alias to use template instance with default allocator
using DimLight_GetResult_Request =
  house_interface::action::DimLight_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace house_interface


// Include directives for member types
// Member 'result'
// already included above
// #include "house_interface/action/detail/dim_light__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__house_interface__action__DimLight_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__house_interface__action__DimLight_GetResult_Response __declspec(deprecated)
#endif

namespace house_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DimLight_GetResult_Response_
{
  using Type = DimLight_GetResult_Response_<ContainerAllocator>;

  explicit DimLight_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit DimLight_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    house_interface::action::DimLight_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const house_interface::action::DimLight_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    house_interface::action::DimLight_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const house_interface::action::DimLight_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<house_interface::action::DimLight_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<house_interface::action::DimLight_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      house_interface::action::DimLight_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<house_interface::action::DimLight_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      house_interface::action::DimLight_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<house_interface::action::DimLight_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<house_interface::action::DimLight_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<house_interface::action::DimLight_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__house_interface__action__DimLight_GetResult_Response
    std::shared_ptr<house_interface::action::DimLight_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__house_interface__action__DimLight_GetResult_Response
    std::shared_ptr<house_interface::action::DimLight_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DimLight_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const DimLight_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DimLight_GetResult_Response_

// alias to use template instance with default allocator
using DimLight_GetResult_Response =
  house_interface::action::DimLight_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace house_interface


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__house_interface__action__DimLight_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__house_interface__action__DimLight_GetResult_Event __declspec(deprecated)
#endif

namespace house_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DimLight_GetResult_Event_
{
  using Type = DimLight_GetResult_Event_<ContainerAllocator>;

  explicit DimLight_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit DimLight_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<house_interface::action::DimLight_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<house_interface::action::DimLight_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<house_interface::action::DimLight_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<house_interface::action::DimLight_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<house_interface::action::DimLight_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<house_interface::action::DimLight_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<house_interface::action::DimLight_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<house_interface::action::DimLight_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    house_interface::action::DimLight_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const house_interface::action::DimLight_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<house_interface::action::DimLight_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<house_interface::action::DimLight_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      house_interface::action::DimLight_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<house_interface::action::DimLight_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      house_interface::action::DimLight_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<house_interface::action::DimLight_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<house_interface::action::DimLight_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<house_interface::action::DimLight_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__house_interface__action__DimLight_GetResult_Event
    std::shared_ptr<house_interface::action::DimLight_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__house_interface__action__DimLight_GetResult_Event
    std::shared_ptr<house_interface::action::DimLight_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DimLight_GetResult_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const DimLight_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DimLight_GetResult_Event_

// alias to use template instance with default allocator
using DimLight_GetResult_Event =
  house_interface::action::DimLight_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace house_interface

namespace house_interface
{

namespace action
{

struct DimLight_GetResult
{
  using Request = house_interface::action::DimLight_GetResult_Request;
  using Response = house_interface::action::DimLight_GetResult_Response;
  using Event = house_interface::action::DimLight_GetResult_Event;
};

}  // namespace action

}  // namespace house_interface


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "house_interface/action/detail/dim_light__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__house_interface__action__DimLight_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__house_interface__action__DimLight_FeedbackMessage __declspec(deprecated)
#endif

namespace house_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DimLight_FeedbackMessage_
{
  using Type = DimLight_FeedbackMessage_<ContainerAllocator>;

  explicit DimLight_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit DimLight_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    house_interface::action::DimLight_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const house_interface::action::DimLight_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    house_interface::action::DimLight_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const house_interface::action::DimLight_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<house_interface::action::DimLight_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<house_interface::action::DimLight_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      house_interface::action::DimLight_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<house_interface::action::DimLight_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      house_interface::action::DimLight_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<house_interface::action::DimLight_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<house_interface::action::DimLight_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<house_interface::action::DimLight_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__house_interface__action__DimLight_FeedbackMessage
    std::shared_ptr<house_interface::action::DimLight_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__house_interface__action__DimLight_FeedbackMessage
    std::shared_ptr<house_interface::action::DimLight_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DimLight_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const DimLight_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DimLight_FeedbackMessage_

// alias to use template instance with default allocator
using DimLight_FeedbackMessage =
  house_interface::action::DimLight_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace house_interface

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace house_interface
{

namespace action
{

struct DimLight
{
  /// The goal message defined in the action definition.
  using Goal = house_interface::action::DimLight_Goal;
  /// The result message defined in the action definition.
  using Result = house_interface::action::DimLight_Result;
  /// The feedback message defined in the action definition.
  using Feedback = house_interface::action::DimLight_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = house_interface::action::DimLight_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = house_interface::action::DimLight_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = house_interface::action::DimLight_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct DimLight DimLight;

}  // namespace action

}  // namespace house_interface

#endif  // HOUSE_INTERFACE__ACTION__DETAIL__DIM_LIGHT__STRUCT_HPP_
