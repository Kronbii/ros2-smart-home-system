// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from house_interface:srv/SetTemp.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "house_interface/srv/set_temp.hpp"


#ifndef HOUSE_INTERFACE__SRV__DETAIL__SET_TEMP__BUILDER_HPP_
#define HOUSE_INTERFACE__SRV__DETAIL__SET_TEMP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "house_interface/srv/detail/set_temp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace house_interface
{

namespace srv
{

namespace builder
{

class Init_SetTemp_Request_temp_state
{
public:
  Init_SetTemp_Request_temp_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::house_interface::srv::SetTemp_Request temp_state(::house_interface::srv::SetTemp_Request::_temp_state_type arg)
  {
    msg_.temp_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::house_interface::srv::SetTemp_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::house_interface::srv::SetTemp_Request>()
{
  return house_interface::srv::builder::Init_SetTemp_Request_temp_state();
}

}  // namespace house_interface


namespace house_interface
{

namespace srv
{

namespace builder
{

class Init_SetTemp_Response_message
{
public:
  explicit Init_SetTemp_Response_message(::house_interface::srv::SetTemp_Response & msg)
  : msg_(msg)
  {}
  ::house_interface::srv::SetTemp_Response message(::house_interface::srv::SetTemp_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::house_interface::srv::SetTemp_Response msg_;
};

class Init_SetTemp_Response_success
{
public:
  Init_SetTemp_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTemp_Response_message success(::house_interface::srv::SetTemp_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetTemp_Response_message(msg_);
  }

private:
  ::house_interface::srv::SetTemp_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::house_interface::srv::SetTemp_Response>()
{
  return house_interface::srv::builder::Init_SetTemp_Response_success();
}

}  // namespace house_interface


namespace house_interface
{

namespace srv
{

namespace builder
{

class Init_SetTemp_Event_response
{
public:
  explicit Init_SetTemp_Event_response(::house_interface::srv::SetTemp_Event & msg)
  : msg_(msg)
  {}
  ::house_interface::srv::SetTemp_Event response(::house_interface::srv::SetTemp_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::house_interface::srv::SetTemp_Event msg_;
};

class Init_SetTemp_Event_request
{
public:
  explicit Init_SetTemp_Event_request(::house_interface::srv::SetTemp_Event & msg)
  : msg_(msg)
  {}
  Init_SetTemp_Event_response request(::house_interface::srv::SetTemp_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetTemp_Event_response(msg_);
  }

private:
  ::house_interface::srv::SetTemp_Event msg_;
};

class Init_SetTemp_Event_info
{
public:
  Init_SetTemp_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTemp_Event_request info(::house_interface::srv::SetTemp_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetTemp_Event_request(msg_);
  }

private:
  ::house_interface::srv::SetTemp_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::house_interface::srv::SetTemp_Event>()
{
  return house_interface::srv::builder::Init_SetTemp_Event_info();
}

}  // namespace house_interface

#endif  // HOUSE_INTERFACE__SRV__DETAIL__SET_TEMP__BUILDER_HPP_
