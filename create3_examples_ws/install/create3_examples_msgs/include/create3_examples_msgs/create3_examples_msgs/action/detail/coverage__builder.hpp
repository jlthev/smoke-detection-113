// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from create3_examples_msgs:action/Coverage.idl
// generated code does not contain a copyright notice

#ifndef CREATE3_EXAMPLES_MSGS__ACTION__DETAIL__COVERAGE__BUILDER_HPP_
#define CREATE3_EXAMPLES_MSGS__ACTION__DETAIL__COVERAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "create3_examples_msgs/action/detail/coverage__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace create3_examples_msgs
{

namespace action
{

namespace builder
{

class Init_Coverage_Goal_max_runtime
{
public:
  explicit Init_Coverage_Goal_max_runtime(::create3_examples_msgs::action::Coverage_Goal & msg)
  : msg_(msg)
  {}
  ::create3_examples_msgs::action::Coverage_Goal max_runtime(::create3_examples_msgs::action::Coverage_Goal::_max_runtime_type arg)
  {
    msg_.max_runtime = std::move(arg);
    return std::move(msg_);
  }

private:
  ::create3_examples_msgs::action::Coverage_Goal msg_;
};

class Init_Coverage_Goal_explore_duration
{
public:
  Init_Coverage_Goal_explore_duration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coverage_Goal_max_runtime explore_duration(::create3_examples_msgs::action::Coverage_Goal::_explore_duration_type arg)
  {
    msg_.explore_duration = std::move(arg);
    return Init_Coverage_Goal_max_runtime(msg_);
  }

private:
  ::create3_examples_msgs::action::Coverage_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::create3_examples_msgs::action::Coverage_Goal>()
{
  return create3_examples_msgs::action::builder::Init_Coverage_Goal_explore_duration();
}

}  // namespace create3_examples_msgs


namespace create3_examples_msgs
{

namespace action
{

namespace builder
{

class Init_Coverage_Result_duration
{
public:
  explicit Init_Coverage_Result_duration(::create3_examples_msgs::action::Coverage_Result & msg)
  : msg_(msg)
  {}
  ::create3_examples_msgs::action::Coverage_Result duration(::create3_examples_msgs::action::Coverage_Result::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::create3_examples_msgs::action::Coverage_Result msg_;
};

class Init_Coverage_Result_is_docked
{
public:
  explicit Init_Coverage_Result_is_docked(::create3_examples_msgs::action::Coverage_Result & msg)
  : msg_(msg)
  {}
  Init_Coverage_Result_duration is_docked(::create3_examples_msgs::action::Coverage_Result::_is_docked_type arg)
  {
    msg_.is_docked = std::move(arg);
    return Init_Coverage_Result_duration(msg_);
  }

private:
  ::create3_examples_msgs::action::Coverage_Result msg_;
};

class Init_Coverage_Result_success
{
public:
  Init_Coverage_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coverage_Result_is_docked success(::create3_examples_msgs::action::Coverage_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Coverage_Result_is_docked(msg_);
  }

private:
  ::create3_examples_msgs::action::Coverage_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::create3_examples_msgs::action::Coverage_Result>()
{
  return create3_examples_msgs::action::builder::Init_Coverage_Result_success();
}

}  // namespace create3_examples_msgs


namespace create3_examples_msgs
{

namespace action
{

namespace builder
{

class Init_Coverage_Feedback_current_behavior
{
public:
  Init_Coverage_Feedback_current_behavior()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::create3_examples_msgs::action::Coverage_Feedback current_behavior(::create3_examples_msgs::action::Coverage_Feedback::_current_behavior_type arg)
  {
    msg_.current_behavior = std::move(arg);
    return std::move(msg_);
  }

private:
  ::create3_examples_msgs::action::Coverage_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::create3_examples_msgs::action::Coverage_Feedback>()
{
  return create3_examples_msgs::action::builder::Init_Coverage_Feedback_current_behavior();
}

}  // namespace create3_examples_msgs


namespace create3_examples_msgs
{

namespace action
{

namespace builder
{

class Init_Coverage_SendGoal_Request_goal
{
public:
  explicit Init_Coverage_SendGoal_Request_goal(::create3_examples_msgs::action::Coverage_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::create3_examples_msgs::action::Coverage_SendGoal_Request goal(::create3_examples_msgs::action::Coverage_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::create3_examples_msgs::action::Coverage_SendGoal_Request msg_;
};

class Init_Coverage_SendGoal_Request_goal_id
{
public:
  Init_Coverage_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coverage_SendGoal_Request_goal goal_id(::create3_examples_msgs::action::Coverage_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Coverage_SendGoal_Request_goal(msg_);
  }

private:
  ::create3_examples_msgs::action::Coverage_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::create3_examples_msgs::action::Coverage_SendGoal_Request>()
{
  return create3_examples_msgs::action::builder::Init_Coverage_SendGoal_Request_goal_id();
}

}  // namespace create3_examples_msgs


namespace create3_examples_msgs
{

namespace action
{

namespace builder
{

class Init_Coverage_SendGoal_Response_stamp
{
public:
  explicit Init_Coverage_SendGoal_Response_stamp(::create3_examples_msgs::action::Coverage_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::create3_examples_msgs::action::Coverage_SendGoal_Response stamp(::create3_examples_msgs::action::Coverage_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::create3_examples_msgs::action::Coverage_SendGoal_Response msg_;
};

class Init_Coverage_SendGoal_Response_accepted
{
public:
  Init_Coverage_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coverage_SendGoal_Response_stamp accepted(::create3_examples_msgs::action::Coverage_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Coverage_SendGoal_Response_stamp(msg_);
  }

private:
  ::create3_examples_msgs::action::Coverage_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::create3_examples_msgs::action::Coverage_SendGoal_Response>()
{
  return create3_examples_msgs::action::builder::Init_Coverage_SendGoal_Response_accepted();
}

}  // namespace create3_examples_msgs


namespace create3_examples_msgs
{

namespace action
{

namespace builder
{

class Init_Coverage_GetResult_Request_goal_id
{
public:
  Init_Coverage_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::create3_examples_msgs::action::Coverage_GetResult_Request goal_id(::create3_examples_msgs::action::Coverage_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::create3_examples_msgs::action::Coverage_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::create3_examples_msgs::action::Coverage_GetResult_Request>()
{
  return create3_examples_msgs::action::builder::Init_Coverage_GetResult_Request_goal_id();
}

}  // namespace create3_examples_msgs


namespace create3_examples_msgs
{

namespace action
{

namespace builder
{

class Init_Coverage_GetResult_Response_result
{
public:
  explicit Init_Coverage_GetResult_Response_result(::create3_examples_msgs::action::Coverage_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::create3_examples_msgs::action::Coverage_GetResult_Response result(::create3_examples_msgs::action::Coverage_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::create3_examples_msgs::action::Coverage_GetResult_Response msg_;
};

class Init_Coverage_GetResult_Response_status
{
public:
  Init_Coverage_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coverage_GetResult_Response_result status(::create3_examples_msgs::action::Coverage_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Coverage_GetResult_Response_result(msg_);
  }

private:
  ::create3_examples_msgs::action::Coverage_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::create3_examples_msgs::action::Coverage_GetResult_Response>()
{
  return create3_examples_msgs::action::builder::Init_Coverage_GetResult_Response_status();
}

}  // namespace create3_examples_msgs


namespace create3_examples_msgs
{

namespace action
{

namespace builder
{

class Init_Coverage_FeedbackMessage_feedback
{
public:
  explicit Init_Coverage_FeedbackMessage_feedback(::create3_examples_msgs::action::Coverage_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::create3_examples_msgs::action::Coverage_FeedbackMessage feedback(::create3_examples_msgs::action::Coverage_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::create3_examples_msgs::action::Coverage_FeedbackMessage msg_;
};

class Init_Coverage_FeedbackMessage_goal_id
{
public:
  Init_Coverage_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coverage_FeedbackMessage_feedback goal_id(::create3_examples_msgs::action::Coverage_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Coverage_FeedbackMessage_feedback(msg_);
  }

private:
  ::create3_examples_msgs::action::Coverage_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::create3_examples_msgs::action::Coverage_FeedbackMessage>()
{
  return create3_examples_msgs::action::builder::Init_Coverage_FeedbackMessage_goal_id();
}

}  // namespace create3_examples_msgs

#endif  // CREATE3_EXAMPLES_MSGS__ACTION__DETAIL__COVERAGE__BUILDER_HPP_
