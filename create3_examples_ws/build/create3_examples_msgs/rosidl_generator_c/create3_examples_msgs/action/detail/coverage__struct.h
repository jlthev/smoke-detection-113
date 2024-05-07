// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from create3_examples_msgs:action/Coverage.idl
// generated code does not contain a copyright notice

#ifndef CREATE3_EXAMPLES_MSGS__ACTION__DETAIL__COVERAGE__STRUCT_H_
#define CREATE3_EXAMPLES_MSGS__ACTION__DETAIL__COVERAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'explore_duration'
// Member 'max_runtime'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/Coverage in the package create3_examples_msgs.
typedef struct create3_examples_msgs__action__Coverage_Goal
{
  /// The robot will explore the environment for `explore_duration` time.
  /// After that, it will try to dock as soon as it sees the docking station.
  /// The `max_runtime` duration defines when the behavior should end regardless of whether
  /// the dock has been found or not.
  builtin_interfaces__msg__Duration explore_duration;
  builtin_interfaces__msg__Duration max_runtime;
} create3_examples_msgs__action__Coverage_Goal;

// Struct for a sequence of create3_examples_msgs__action__Coverage_Goal.
typedef struct create3_examples_msgs__action__Coverage_Goal__Sequence
{
  create3_examples_msgs__action__Coverage_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} create3_examples_msgs__action__Coverage_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'duration'
// already included above
// #include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/Coverage in the package create3_examples_msgs.
typedef struct create3_examples_msgs__action__Coverage_Result
{
  bool success;
  bool is_docked;
  builtin_interfaces__msg__Duration duration;
} create3_examples_msgs__action__Coverage_Result;

// Struct for a sequence of create3_examples_msgs__action__Coverage_Result.
typedef struct create3_examples_msgs__action__Coverage_Result__Sequence
{
  create3_examples_msgs__action__Coverage_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} create3_examples_msgs__action__Coverage_Result__Sequence;


// Constants defined in the message

/// Constant 'DOCK'.
enum
{
  create3_examples_msgs__action__Coverage_Feedback__DOCK = 0l
};

/// Constant 'DRIVE_STRAIGHT'.
enum
{
  create3_examples_msgs__action__Coverage_Feedback__DRIVE_STRAIGHT = 1l
};

/// Constant 'ROTATE'.
enum
{
  create3_examples_msgs__action__Coverage_Feedback__ROTATE = 2l
};

/// Constant 'SPIRAL'.
enum
{
  create3_examples_msgs__action__Coverage_Feedback__SPIRAL = 3l
};

/// Constant 'UNDOCK'.
enum
{
  create3_examples_msgs__action__Coverage_Feedback__UNDOCK = 4l
};

/// Struct defined in action/Coverage in the package create3_examples_msgs.
typedef struct create3_examples_msgs__action__Coverage_Feedback
{
  int32_t current_behavior;
} create3_examples_msgs__action__Coverage_Feedback;

// Struct for a sequence of create3_examples_msgs__action__Coverage_Feedback.
typedef struct create3_examples_msgs__action__Coverage_Feedback__Sequence
{
  create3_examples_msgs__action__Coverage_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} create3_examples_msgs__action__Coverage_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "create3_examples_msgs/action/detail/coverage__struct.h"

/// Struct defined in action/Coverage in the package create3_examples_msgs.
typedef struct create3_examples_msgs__action__Coverage_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  create3_examples_msgs__action__Coverage_Goal goal;
} create3_examples_msgs__action__Coverage_SendGoal_Request;

// Struct for a sequence of create3_examples_msgs__action__Coverage_SendGoal_Request.
typedef struct create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence
{
  create3_examples_msgs__action__Coverage_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Coverage in the package create3_examples_msgs.
typedef struct create3_examples_msgs__action__Coverage_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} create3_examples_msgs__action__Coverage_SendGoal_Response;

// Struct for a sequence of create3_examples_msgs__action__Coverage_SendGoal_Response.
typedef struct create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence
{
  create3_examples_msgs__action__Coverage_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Coverage in the package create3_examples_msgs.
typedef struct create3_examples_msgs__action__Coverage_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} create3_examples_msgs__action__Coverage_GetResult_Request;

// Struct for a sequence of create3_examples_msgs__action__Coverage_GetResult_Request.
typedef struct create3_examples_msgs__action__Coverage_GetResult_Request__Sequence
{
  create3_examples_msgs__action__Coverage_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} create3_examples_msgs__action__Coverage_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "create3_examples_msgs/action/detail/coverage__struct.h"

/// Struct defined in action/Coverage in the package create3_examples_msgs.
typedef struct create3_examples_msgs__action__Coverage_GetResult_Response
{
  int8_t status;
  create3_examples_msgs__action__Coverage_Result result;
} create3_examples_msgs__action__Coverage_GetResult_Response;

// Struct for a sequence of create3_examples_msgs__action__Coverage_GetResult_Response.
typedef struct create3_examples_msgs__action__Coverage_GetResult_Response__Sequence
{
  create3_examples_msgs__action__Coverage_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} create3_examples_msgs__action__Coverage_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "create3_examples_msgs/action/detail/coverage__struct.h"

/// Struct defined in action/Coverage in the package create3_examples_msgs.
typedef struct create3_examples_msgs__action__Coverage_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  create3_examples_msgs__action__Coverage_Feedback feedback;
} create3_examples_msgs__action__Coverage_FeedbackMessage;

// Struct for a sequence of create3_examples_msgs__action__Coverage_FeedbackMessage.
typedef struct create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence
{
  create3_examples_msgs__action__Coverage_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CREATE3_EXAMPLES_MSGS__ACTION__DETAIL__COVERAGE__STRUCT_H_
