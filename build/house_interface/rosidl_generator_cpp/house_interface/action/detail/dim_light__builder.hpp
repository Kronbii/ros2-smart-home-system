// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from house_interface:action/DimLight.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "house_interface/action/dim_light.hpp"


#ifndef HOUSE_INTERFACE__ACTION__DETAIL__DIM_LIGHT__BUILDER_HPP_
#define HOUSE_INTERFACE__ACTION__DETAIL__DIM_LIGHT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "house_interface/action/detail/dim_light__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace house_interface
{

namespace action
{

namespace builder
{

class Init_DimLight_Goal_target_light_level
{
public:
  Init_DimLight_Goal_target_light_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::house_interface::action::DimLight_Goal target_light_level(::house_interface::action::DimLight_Goal::_target_light_level_type arg)
  {
    msg_.target_light_level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::house_interface::action::DimLight_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::house_interface::action::DimLight_Goal>()
{
  return house_interface::action::builder::Init_DimLight_Goal_target_light_level();
}

}  // namespace house_interface


namespace house_interface
{

namespace action
{

namespace builder
{

class Init_DimLight_Result_reached_light_level
{
public:
  Init_DimLight_Result_reached_light_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::house_interface::action::DimLight_Result reached_light_level(::house_interface::action::DimLight_Result::_reached_light_level_type arg)
  {
    msg_.reached_light_level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::house_interface::action::DimLight_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::house_interface::action::DimLight_Result>()
{
  return house_interface::action::builder::Init_DimLight_Result_reached_light_level();
}

}  // namespace house_interface


namespace house_interface
{

namespace action
{

namespace builder
{

class Init_DimLight_Feedback_current_light_level
{
public:
  Init_DimLight_Feedback_current_light_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::house_interface::action::DimLight_Feedback current_light_level(::house_interface::action::DimLight_Feedback::_current_light_level_type arg)
  {
    msg_.current_light_level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::house_interface::action::DimLight_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::house_interface::action::DimLight_Feedback>()
{
  return house_interface::action::builder::Init_DimLight_Feedback_current_light_level();
}

}  // namespace house_interface


namespace house_interface
{

namespace action
{

namespace builder
{

class Init_DimLight_SendGoal_Request_goal
{
public:
  explicit Init_DimLight_SendGoal_Request_goal(::house_interface::action::DimLight_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::house_interface::action::DimLight_SendGoal_Request goal(::house_interface::action::DimLight_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::house_interface::action::DimLight_SendGoal_Request msg_;
};

class Init_DimLight_SendGoal_Request_goal_id
{
public:
  Init_DimLight_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DimLight_SendGoal_Request_goal goal_id(::house_interface::action::DimLight_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DimLight_SendGoal_Request_goal(msg_);
  }

private:
  ::house_interface::action::DimLight_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::house_interface::action::DimLight_SendGoal_Request>()
{
  return house_interface::action::builder::Init_DimLight_SendGoal_Request_goal_id();
}

}  // namespace house_interface


namespace house_interface
{

namespace action
{

namespace builder
{

class Init_DimLight_SendGoal_Response_stamp
{
public:
  explicit Init_DimLight_SendGoal_Response_stamp(::house_interface::action::DimLight_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::house_interface::action::DimLight_SendGoal_Response stamp(::house_interface::action::DimLight_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::house_interface::action::DimLight_SendGoal_Response msg_;
};

class Init_DimLight_SendGoal_Response_accepted
{
public:
  Init_DimLight_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DimLight_SendGoal_Response_stamp accepted(::house_interface::action::DimLight_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_DimLight_SendGoal_Response_stamp(msg_);
  }

private:
  ::house_interface::action::DimLight_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::house_interface::action::DimLight_SendGoal_Response>()
{
  return house_interface::action::builder::Init_DimLight_SendGoal_Response_accepted();
}

}  // namespace house_interface


namespace house_interface
{

namespace action
{

namespace builder
{

class Init_DimLight_SendGoal_Event_response
{
public:
  explicit Init_DimLight_SendGoal_Event_response(::house_interface::action::DimLight_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::house_interface::action::DimLight_SendGoal_Event response(::house_interface::action::DimLight_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::house_interface::action::DimLight_SendGoal_Event msg_;
};

class Init_DimLight_SendGoal_Event_request
{
public:
  explicit Init_DimLight_SendGoal_Event_request(::house_interface::action::DimLight_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_DimLight_SendGoal_Event_response request(::house_interface::action::DimLight_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DimLight_SendGoal_Event_response(msg_);
  }

private:
  ::house_interface::action::DimLight_SendGoal_Event msg_;
};

class Init_DimLight_SendGoal_Event_info
{
public:
  Init_DimLight_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DimLight_SendGoal_Event_request info(::house_interface::action::DimLight_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DimLight_SendGoal_Event_request(msg_);
  }

private:
  ::house_interface::action::DimLight_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::house_interface::action::DimLight_SendGoal_Event>()
{
  return house_interface::action::builder::Init_DimLight_SendGoal_Event_info();
}

}  // namespace house_interface


namespace house_interface
{

namespace action
{

namespace builder
{

class Init_DimLight_GetResult_Request_goal_id
{
public:
  Init_DimLight_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::house_interface::action::DimLight_GetResult_Request goal_id(::house_interface::action::DimLight_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::house_interface::action::DimLight_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::house_interface::action::DimLight_GetResult_Request>()
{
  return house_interface::action::builder::Init_DimLight_GetResult_Request_goal_id();
}

}  // namespace house_interface


namespace house_interface
{

namespace action
{

namespace builder
{

class Init_DimLight_GetResult_Response_result
{
public:
  explicit Init_DimLight_GetResult_Response_result(::house_interface::action::DimLight_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::house_interface::action::DimLight_GetResult_Response result(::house_interface::action::DimLight_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::house_interface::action::DimLight_GetResult_Response msg_;
};

class Init_DimLight_GetResult_Response_status
{
public:
  Init_DimLight_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DimLight_GetResult_Response_result status(::house_interface::action::DimLight_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DimLight_GetResult_Response_result(msg_);
  }

private:
  ::house_interface::action::DimLight_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::house_interface::action::DimLight_GetResult_Response>()
{
  return house_interface::action::builder::Init_DimLight_GetResult_Response_status();
}

}  // namespace house_interface


namespace house_interface
{

namespace action
{

namespace builder
{

class Init_DimLight_GetResult_Event_response
{
public:
  explicit Init_DimLight_GetResult_Event_response(::house_interface::action::DimLight_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::house_interface::action::DimLight_GetResult_Event response(::house_interface::action::DimLight_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::house_interface::action::DimLight_GetResult_Event msg_;
};

class Init_DimLight_GetResult_Event_request
{
public:
  explicit Init_DimLight_GetResult_Event_request(::house_interface::action::DimLight_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_DimLight_GetResult_Event_response request(::house_interface::action::DimLight_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DimLight_GetResult_Event_response(msg_);
  }

private:
  ::house_interface::action::DimLight_GetResult_Event msg_;
};

class Init_DimLight_GetResult_Event_info
{
public:
  Init_DimLight_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DimLight_GetResult_Event_request info(::house_interface::action::DimLight_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DimLight_GetResult_Event_request(msg_);
  }

private:
  ::house_interface::action::DimLight_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::house_interface::action::DimLight_GetResult_Event>()
{
  return house_interface::action::builder::Init_DimLight_GetResult_Event_info();
}

}  // namespace house_interface


namespace house_interface
{

namespace action
{

namespace builder
{

class Init_DimLight_FeedbackMessage_feedback
{
public:
  explicit Init_DimLight_FeedbackMessage_feedback(::house_interface::action::DimLight_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::house_interface::action::DimLight_FeedbackMessage feedback(::house_interface::action::DimLight_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::house_interface::action::DimLight_FeedbackMessage msg_;
};

class Init_DimLight_FeedbackMessage_goal_id
{
public:
  Init_DimLight_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DimLight_FeedbackMessage_feedback goal_id(::house_interface::action::DimLight_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DimLight_FeedbackMessage_feedback(msg_);
  }

private:
  ::house_interface::action::DimLight_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::house_interface::action::DimLight_FeedbackMessage>()
{
  return house_interface::action::builder::Init_DimLight_FeedbackMessage_goal_id();
}

}  // namespace house_interface

#endif  // HOUSE_INTERFACE__ACTION__DETAIL__DIM_LIGHT__BUILDER_HPP_
