// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from create3_examples_msgs:action/Coverage.idl
// generated code does not contain a copyright notice

#ifndef CREATE3_EXAMPLES_MSGS__ACTION__DETAIL__COVERAGE__TRAITS_HPP_
#define CREATE3_EXAMPLES_MSGS__ACTION__DETAIL__COVERAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "create3_examples_msgs/action/detail/coverage__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'explore_duration'
// Member 'max_runtime'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace create3_examples_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Coverage_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: explore_duration
  {
    out << "explore_duration: ";
    to_flow_style_yaml(msg.explore_duration, out);
    out << ", ";
  }

  // member: max_runtime
  {
    out << "max_runtime: ";
    to_flow_style_yaml(msg.max_runtime, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Coverage_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: explore_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "explore_duration:\n";
    to_block_style_yaml(msg.explore_duration, out, indentation + 2);
  }

  // member: max_runtime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_runtime:\n";
    to_block_style_yaml(msg.max_runtime, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Coverage_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace create3_examples_msgs

namespace rosidl_generator_traits
{

[[deprecated("use create3_examples_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const create3_examples_msgs::action::Coverage_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  create3_examples_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use create3_examples_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const create3_examples_msgs::action::Coverage_Goal & msg)
{
  return create3_examples_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<create3_examples_msgs::action::Coverage_Goal>()
{
  return "create3_examples_msgs::action::Coverage_Goal";
}

template<>
inline const char * name<create3_examples_msgs::action::Coverage_Goal>()
{
  return "create3_examples_msgs/action/Coverage_Goal";
}

template<>
struct has_fixed_size<create3_examples_msgs::action::Coverage_Goal>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<create3_examples_msgs::action::Coverage_Goal>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<create3_examples_msgs::action::Coverage_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'duration'
// already included above
// #include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace create3_examples_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Coverage_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: is_docked
  {
    out << "is_docked: ";
    rosidl_generator_traits::value_to_yaml(msg.is_docked, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    to_flow_style_yaml(msg.duration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Coverage_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: is_docked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_docked: ";
    rosidl_generator_traits::value_to_yaml(msg.is_docked, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration:\n";
    to_block_style_yaml(msg.duration, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Coverage_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace create3_examples_msgs

namespace rosidl_generator_traits
{

[[deprecated("use create3_examples_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const create3_examples_msgs::action::Coverage_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  create3_examples_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use create3_examples_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const create3_examples_msgs::action::Coverage_Result & msg)
{
  return create3_examples_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<create3_examples_msgs::action::Coverage_Result>()
{
  return "create3_examples_msgs::action::Coverage_Result";
}

template<>
inline const char * name<create3_examples_msgs::action::Coverage_Result>()
{
  return "create3_examples_msgs/action/Coverage_Result";
}

template<>
struct has_fixed_size<create3_examples_msgs::action::Coverage_Result>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<create3_examples_msgs::action::Coverage_Result>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<create3_examples_msgs::action::Coverage_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace create3_examples_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Coverage_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_behavior
  {
    out << "current_behavior: ";
    rosidl_generator_traits::value_to_yaml(msg.current_behavior, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Coverage_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_behavior
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_behavior: ";
    rosidl_generator_traits::value_to_yaml(msg.current_behavior, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Coverage_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace create3_examples_msgs

namespace rosidl_generator_traits
{

[[deprecated("use create3_examples_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const create3_examples_msgs::action::Coverage_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  create3_examples_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use create3_examples_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const create3_examples_msgs::action::Coverage_Feedback & msg)
{
  return create3_examples_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<create3_examples_msgs::action::Coverage_Feedback>()
{
  return "create3_examples_msgs::action::Coverage_Feedback";
}

template<>
inline const char * name<create3_examples_msgs::action::Coverage_Feedback>()
{
  return "create3_examples_msgs/action/Coverage_Feedback";
}

template<>
struct has_fixed_size<create3_examples_msgs::action::Coverage_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<create3_examples_msgs::action::Coverage_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<create3_examples_msgs::action::Coverage_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "create3_examples_msgs/action/detail/coverage__traits.hpp"

namespace create3_examples_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Coverage_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Coverage_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Coverage_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace create3_examples_msgs

namespace rosidl_generator_traits
{

[[deprecated("use create3_examples_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const create3_examples_msgs::action::Coverage_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  create3_examples_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use create3_examples_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const create3_examples_msgs::action::Coverage_SendGoal_Request & msg)
{
  return create3_examples_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<create3_examples_msgs::action::Coverage_SendGoal_Request>()
{
  return "create3_examples_msgs::action::Coverage_SendGoal_Request";
}

template<>
inline const char * name<create3_examples_msgs::action::Coverage_SendGoal_Request>()
{
  return "create3_examples_msgs/action/Coverage_SendGoal_Request";
}

template<>
struct has_fixed_size<create3_examples_msgs::action::Coverage_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<create3_examples_msgs::action::Coverage_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<create3_examples_msgs::action::Coverage_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<create3_examples_msgs::action::Coverage_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<create3_examples_msgs::action::Coverage_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace create3_examples_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Coverage_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Coverage_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Coverage_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace create3_examples_msgs

namespace rosidl_generator_traits
{

[[deprecated("use create3_examples_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const create3_examples_msgs::action::Coverage_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  create3_examples_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use create3_examples_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const create3_examples_msgs::action::Coverage_SendGoal_Response & msg)
{
  return create3_examples_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<create3_examples_msgs::action::Coverage_SendGoal_Response>()
{
  return "create3_examples_msgs::action::Coverage_SendGoal_Response";
}

template<>
inline const char * name<create3_examples_msgs::action::Coverage_SendGoal_Response>()
{
  return "create3_examples_msgs/action/Coverage_SendGoal_Response";
}

template<>
struct has_fixed_size<create3_examples_msgs::action::Coverage_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<create3_examples_msgs::action::Coverage_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<create3_examples_msgs::action::Coverage_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<create3_examples_msgs::action::Coverage_SendGoal>()
{
  return "create3_examples_msgs::action::Coverage_SendGoal";
}

template<>
inline const char * name<create3_examples_msgs::action::Coverage_SendGoal>()
{
  return "create3_examples_msgs/action/Coverage_SendGoal";
}

template<>
struct has_fixed_size<create3_examples_msgs::action::Coverage_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<create3_examples_msgs::action::Coverage_SendGoal_Request>::value &&
    has_fixed_size<create3_examples_msgs::action::Coverage_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<create3_examples_msgs::action::Coverage_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<create3_examples_msgs::action::Coverage_SendGoal_Request>::value &&
    has_bounded_size<create3_examples_msgs::action::Coverage_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<create3_examples_msgs::action::Coverage_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<create3_examples_msgs::action::Coverage_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<create3_examples_msgs::action::Coverage_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace create3_examples_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Coverage_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Coverage_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Coverage_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace create3_examples_msgs

namespace rosidl_generator_traits
{

[[deprecated("use create3_examples_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const create3_examples_msgs::action::Coverage_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  create3_examples_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use create3_examples_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const create3_examples_msgs::action::Coverage_GetResult_Request & msg)
{
  return create3_examples_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<create3_examples_msgs::action::Coverage_GetResult_Request>()
{
  return "create3_examples_msgs::action::Coverage_GetResult_Request";
}

template<>
inline const char * name<create3_examples_msgs::action::Coverage_GetResult_Request>()
{
  return "create3_examples_msgs/action/Coverage_GetResult_Request";
}

template<>
struct has_fixed_size<create3_examples_msgs::action::Coverage_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<create3_examples_msgs::action::Coverage_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<create3_examples_msgs::action::Coverage_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "create3_examples_msgs/action/detail/coverage__traits.hpp"

namespace create3_examples_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Coverage_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Coverage_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Coverage_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace create3_examples_msgs

namespace rosidl_generator_traits
{

[[deprecated("use create3_examples_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const create3_examples_msgs::action::Coverage_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  create3_examples_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use create3_examples_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const create3_examples_msgs::action::Coverage_GetResult_Response & msg)
{
  return create3_examples_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<create3_examples_msgs::action::Coverage_GetResult_Response>()
{
  return "create3_examples_msgs::action::Coverage_GetResult_Response";
}

template<>
inline const char * name<create3_examples_msgs::action::Coverage_GetResult_Response>()
{
  return "create3_examples_msgs/action/Coverage_GetResult_Response";
}

template<>
struct has_fixed_size<create3_examples_msgs::action::Coverage_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<create3_examples_msgs::action::Coverage_Result>::value> {};

template<>
struct has_bounded_size<create3_examples_msgs::action::Coverage_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<create3_examples_msgs::action::Coverage_Result>::value> {};

template<>
struct is_message<create3_examples_msgs::action::Coverage_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<create3_examples_msgs::action::Coverage_GetResult>()
{
  return "create3_examples_msgs::action::Coverage_GetResult";
}

template<>
inline const char * name<create3_examples_msgs::action::Coverage_GetResult>()
{
  return "create3_examples_msgs/action/Coverage_GetResult";
}

template<>
struct has_fixed_size<create3_examples_msgs::action::Coverage_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<create3_examples_msgs::action::Coverage_GetResult_Request>::value &&
    has_fixed_size<create3_examples_msgs::action::Coverage_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<create3_examples_msgs::action::Coverage_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<create3_examples_msgs::action::Coverage_GetResult_Request>::value &&
    has_bounded_size<create3_examples_msgs::action::Coverage_GetResult_Response>::value
  >
{
};

template<>
struct is_service<create3_examples_msgs::action::Coverage_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<create3_examples_msgs::action::Coverage_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<create3_examples_msgs::action::Coverage_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "create3_examples_msgs/action/detail/coverage__traits.hpp"

namespace create3_examples_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Coverage_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Coverage_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Coverage_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace create3_examples_msgs

namespace rosidl_generator_traits
{

[[deprecated("use create3_examples_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const create3_examples_msgs::action::Coverage_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  create3_examples_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use create3_examples_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const create3_examples_msgs::action::Coverage_FeedbackMessage & msg)
{
  return create3_examples_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<create3_examples_msgs::action::Coverage_FeedbackMessage>()
{
  return "create3_examples_msgs::action::Coverage_FeedbackMessage";
}

template<>
inline const char * name<create3_examples_msgs::action::Coverage_FeedbackMessage>()
{
  return "create3_examples_msgs/action/Coverage_FeedbackMessage";
}

template<>
struct has_fixed_size<create3_examples_msgs::action::Coverage_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<create3_examples_msgs::action::Coverage_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<create3_examples_msgs::action::Coverage_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<create3_examples_msgs::action::Coverage_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<create3_examples_msgs::action::Coverage_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<create3_examples_msgs::action::Coverage>
  : std::true_type
{
};

template<>
struct is_action_goal<create3_examples_msgs::action::Coverage_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<create3_examples_msgs::action::Coverage_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<create3_examples_msgs::action::Coverage_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CREATE3_EXAMPLES_MSGS__ACTION__DETAIL__COVERAGE__TRAITS_HPP_
