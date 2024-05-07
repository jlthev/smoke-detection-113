// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from create3_examples_msgs:action/Coverage.idl
// generated code does not contain a copyright notice

#ifndef CREATE3_EXAMPLES_MSGS__ACTION__DETAIL__COVERAGE__FUNCTIONS_H_
#define CREATE3_EXAMPLES_MSGS__ACTION__DETAIL__COVERAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "create3_examples_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "create3_examples_msgs/action/detail/coverage__struct.h"

/// Initialize action/Coverage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * create3_examples_msgs__action__Coverage_Goal
 * )) before or use
 * create3_examples_msgs__action__Coverage_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_Goal__init(create3_examples_msgs__action__Coverage_Goal * msg);

/// Finalize action/Coverage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_Goal__fini(create3_examples_msgs__action__Coverage_Goal * msg);

/// Create action/Coverage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * create3_examples_msgs__action__Coverage_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
create3_examples_msgs__action__Coverage_Goal *
create3_examples_msgs__action__Coverage_Goal__create();

/// Destroy action/Coverage message.
/**
 * It calls
 * create3_examples_msgs__action__Coverage_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_Goal__destroy(create3_examples_msgs__action__Coverage_Goal * msg);

/// Check for action/Coverage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_Goal__are_equal(const create3_examples_msgs__action__Coverage_Goal * lhs, const create3_examples_msgs__action__Coverage_Goal * rhs);

/// Copy a action/Coverage message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_Goal__copy(
  const create3_examples_msgs__action__Coverage_Goal * input,
  create3_examples_msgs__action__Coverage_Goal * output);

/// Initialize array of action/Coverage messages.
/**
 * It allocates the memory for the number of elements and calls
 * create3_examples_msgs__action__Coverage_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_Goal__Sequence__init(create3_examples_msgs__action__Coverage_Goal__Sequence * array, size_t size);

/// Finalize array of action/Coverage messages.
/**
 * It calls
 * create3_examples_msgs__action__Coverage_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_Goal__Sequence__fini(create3_examples_msgs__action__Coverage_Goal__Sequence * array);

/// Create array of action/Coverage messages.
/**
 * It allocates the memory for the array and calls
 * create3_examples_msgs__action__Coverage_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
create3_examples_msgs__action__Coverage_Goal__Sequence *
create3_examples_msgs__action__Coverage_Goal__Sequence__create(size_t size);

/// Destroy array of action/Coverage messages.
/**
 * It calls
 * create3_examples_msgs__action__Coverage_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_Goal__Sequence__destroy(create3_examples_msgs__action__Coverage_Goal__Sequence * array);

/// Check for action/Coverage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_Goal__Sequence__are_equal(const create3_examples_msgs__action__Coverage_Goal__Sequence * lhs, const create3_examples_msgs__action__Coverage_Goal__Sequence * rhs);

/// Copy an array of action/Coverage messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_Goal__Sequence__copy(
  const create3_examples_msgs__action__Coverage_Goal__Sequence * input,
  create3_examples_msgs__action__Coverage_Goal__Sequence * output);

/// Initialize action/Coverage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * create3_examples_msgs__action__Coverage_Result
 * )) before or use
 * create3_examples_msgs__action__Coverage_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_Result__init(create3_examples_msgs__action__Coverage_Result * msg);

/// Finalize action/Coverage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_Result__fini(create3_examples_msgs__action__Coverage_Result * msg);

/// Create action/Coverage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * create3_examples_msgs__action__Coverage_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
create3_examples_msgs__action__Coverage_Result *
create3_examples_msgs__action__Coverage_Result__create();

/// Destroy action/Coverage message.
/**
 * It calls
 * create3_examples_msgs__action__Coverage_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_Result__destroy(create3_examples_msgs__action__Coverage_Result * msg);

/// Check for action/Coverage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_Result__are_equal(const create3_examples_msgs__action__Coverage_Result * lhs, const create3_examples_msgs__action__Coverage_Result * rhs);

/// Copy a action/Coverage message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_Result__copy(
  const create3_examples_msgs__action__Coverage_Result * input,
  create3_examples_msgs__action__Coverage_Result * output);

/// Initialize array of action/Coverage messages.
/**
 * It allocates the memory for the number of elements and calls
 * create3_examples_msgs__action__Coverage_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_Result__Sequence__init(create3_examples_msgs__action__Coverage_Result__Sequence * array, size_t size);

/// Finalize array of action/Coverage messages.
/**
 * It calls
 * create3_examples_msgs__action__Coverage_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_Result__Sequence__fini(create3_examples_msgs__action__Coverage_Result__Sequence * array);

/// Create array of action/Coverage messages.
/**
 * It allocates the memory for the array and calls
 * create3_examples_msgs__action__Coverage_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
create3_examples_msgs__action__Coverage_Result__Sequence *
create3_examples_msgs__action__Coverage_Result__Sequence__create(size_t size);

/// Destroy array of action/Coverage messages.
/**
 * It calls
 * create3_examples_msgs__action__Coverage_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_Result__Sequence__destroy(create3_examples_msgs__action__Coverage_Result__Sequence * array);

/// Check for action/Coverage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_Result__Sequence__are_equal(const create3_examples_msgs__action__Coverage_Result__Sequence * lhs, const create3_examples_msgs__action__Coverage_Result__Sequence * rhs);

/// Copy an array of action/Coverage messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_Result__Sequence__copy(
  const create3_examples_msgs__action__Coverage_Result__Sequence * input,
  create3_examples_msgs__action__Coverage_Result__Sequence * output);

/// Initialize action/Coverage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * create3_examples_msgs__action__Coverage_Feedback
 * )) before or use
 * create3_examples_msgs__action__Coverage_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_Feedback__init(create3_examples_msgs__action__Coverage_Feedback * msg);

/// Finalize action/Coverage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_Feedback__fini(create3_examples_msgs__action__Coverage_Feedback * msg);

/// Create action/Coverage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * create3_examples_msgs__action__Coverage_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
create3_examples_msgs__action__Coverage_Feedback *
create3_examples_msgs__action__Coverage_Feedback__create();

/// Destroy action/Coverage message.
/**
 * It calls
 * create3_examples_msgs__action__Coverage_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_Feedback__destroy(create3_examples_msgs__action__Coverage_Feedback * msg);

/// Check for action/Coverage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_Feedback__are_equal(const create3_examples_msgs__action__Coverage_Feedback * lhs, const create3_examples_msgs__action__Coverage_Feedback * rhs);

/// Copy a action/Coverage message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_Feedback__copy(
  const create3_examples_msgs__action__Coverage_Feedback * input,
  create3_examples_msgs__action__Coverage_Feedback * output);

/// Initialize array of action/Coverage messages.
/**
 * It allocates the memory for the number of elements and calls
 * create3_examples_msgs__action__Coverage_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_Feedback__Sequence__init(create3_examples_msgs__action__Coverage_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Coverage messages.
/**
 * It calls
 * create3_examples_msgs__action__Coverage_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_Feedback__Sequence__fini(create3_examples_msgs__action__Coverage_Feedback__Sequence * array);

/// Create array of action/Coverage messages.
/**
 * It allocates the memory for the array and calls
 * create3_examples_msgs__action__Coverage_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
create3_examples_msgs__action__Coverage_Feedback__Sequence *
create3_examples_msgs__action__Coverage_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Coverage messages.
/**
 * It calls
 * create3_examples_msgs__action__Coverage_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_Feedback__Sequence__destroy(create3_examples_msgs__action__Coverage_Feedback__Sequence * array);

/// Check for action/Coverage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_Feedback__Sequence__are_equal(const create3_examples_msgs__action__Coverage_Feedback__Sequence * lhs, const create3_examples_msgs__action__Coverage_Feedback__Sequence * rhs);

/// Copy an array of action/Coverage messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_Feedback__Sequence__copy(
  const create3_examples_msgs__action__Coverage_Feedback__Sequence * input,
  create3_examples_msgs__action__Coverage_Feedback__Sequence * output);

/// Initialize action/Coverage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * create3_examples_msgs__action__Coverage_SendGoal_Request
 * )) before or use
 * create3_examples_msgs__action__Coverage_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_SendGoal_Request__init(create3_examples_msgs__action__Coverage_SendGoal_Request * msg);

/// Finalize action/Coverage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_SendGoal_Request__fini(create3_examples_msgs__action__Coverage_SendGoal_Request * msg);

/// Create action/Coverage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * create3_examples_msgs__action__Coverage_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
create3_examples_msgs__action__Coverage_SendGoal_Request *
create3_examples_msgs__action__Coverage_SendGoal_Request__create();

/// Destroy action/Coverage message.
/**
 * It calls
 * create3_examples_msgs__action__Coverage_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_SendGoal_Request__destroy(create3_examples_msgs__action__Coverage_SendGoal_Request * msg);

/// Check for action/Coverage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_SendGoal_Request__are_equal(const create3_examples_msgs__action__Coverage_SendGoal_Request * lhs, const create3_examples_msgs__action__Coverage_SendGoal_Request * rhs);

/// Copy a action/Coverage message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_SendGoal_Request__copy(
  const create3_examples_msgs__action__Coverage_SendGoal_Request * input,
  create3_examples_msgs__action__Coverage_SendGoal_Request * output);

/// Initialize array of action/Coverage messages.
/**
 * It allocates the memory for the number of elements and calls
 * create3_examples_msgs__action__Coverage_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence__init(create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Coverage messages.
/**
 * It calls
 * create3_examples_msgs__action__Coverage_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence__fini(create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence * array);

/// Create array of action/Coverage messages.
/**
 * It allocates the memory for the array and calls
 * create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence *
create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Coverage messages.
/**
 * It calls
 * create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence__destroy(create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence * array);

/// Check for action/Coverage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence__are_equal(const create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence * lhs, const create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Coverage messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence__copy(
  const create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence * input,
  create3_examples_msgs__action__Coverage_SendGoal_Request__Sequence * output);

/// Initialize action/Coverage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * create3_examples_msgs__action__Coverage_SendGoal_Response
 * )) before or use
 * create3_examples_msgs__action__Coverage_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_SendGoal_Response__init(create3_examples_msgs__action__Coverage_SendGoal_Response * msg);

/// Finalize action/Coverage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_SendGoal_Response__fini(create3_examples_msgs__action__Coverage_SendGoal_Response * msg);

/// Create action/Coverage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * create3_examples_msgs__action__Coverage_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
create3_examples_msgs__action__Coverage_SendGoal_Response *
create3_examples_msgs__action__Coverage_SendGoal_Response__create();

/// Destroy action/Coverage message.
/**
 * It calls
 * create3_examples_msgs__action__Coverage_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_SendGoal_Response__destroy(create3_examples_msgs__action__Coverage_SendGoal_Response * msg);

/// Check for action/Coverage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_SendGoal_Response__are_equal(const create3_examples_msgs__action__Coverage_SendGoal_Response * lhs, const create3_examples_msgs__action__Coverage_SendGoal_Response * rhs);

/// Copy a action/Coverage message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_SendGoal_Response__copy(
  const create3_examples_msgs__action__Coverage_SendGoal_Response * input,
  create3_examples_msgs__action__Coverage_SendGoal_Response * output);

/// Initialize array of action/Coverage messages.
/**
 * It allocates the memory for the number of elements and calls
 * create3_examples_msgs__action__Coverage_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence__init(create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Coverage messages.
/**
 * It calls
 * create3_examples_msgs__action__Coverage_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence__fini(create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence * array);

/// Create array of action/Coverage messages.
/**
 * It allocates the memory for the array and calls
 * create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence *
create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Coverage messages.
/**
 * It calls
 * create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence__destroy(create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence * array);

/// Check for action/Coverage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence__are_equal(const create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence * lhs, const create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Coverage messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence__copy(
  const create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence * input,
  create3_examples_msgs__action__Coverage_SendGoal_Response__Sequence * output);

/// Initialize action/Coverage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * create3_examples_msgs__action__Coverage_GetResult_Request
 * )) before or use
 * create3_examples_msgs__action__Coverage_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_GetResult_Request__init(create3_examples_msgs__action__Coverage_GetResult_Request * msg);

/// Finalize action/Coverage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_GetResult_Request__fini(create3_examples_msgs__action__Coverage_GetResult_Request * msg);

/// Create action/Coverage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * create3_examples_msgs__action__Coverage_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
create3_examples_msgs__action__Coverage_GetResult_Request *
create3_examples_msgs__action__Coverage_GetResult_Request__create();

/// Destroy action/Coverage message.
/**
 * It calls
 * create3_examples_msgs__action__Coverage_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_GetResult_Request__destroy(create3_examples_msgs__action__Coverage_GetResult_Request * msg);

/// Check for action/Coverage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_GetResult_Request__are_equal(const create3_examples_msgs__action__Coverage_GetResult_Request * lhs, const create3_examples_msgs__action__Coverage_GetResult_Request * rhs);

/// Copy a action/Coverage message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_GetResult_Request__copy(
  const create3_examples_msgs__action__Coverage_GetResult_Request * input,
  create3_examples_msgs__action__Coverage_GetResult_Request * output);

/// Initialize array of action/Coverage messages.
/**
 * It allocates the memory for the number of elements and calls
 * create3_examples_msgs__action__Coverage_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_GetResult_Request__Sequence__init(create3_examples_msgs__action__Coverage_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Coverage messages.
/**
 * It calls
 * create3_examples_msgs__action__Coverage_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_GetResult_Request__Sequence__fini(create3_examples_msgs__action__Coverage_GetResult_Request__Sequence * array);

/// Create array of action/Coverage messages.
/**
 * It allocates the memory for the array and calls
 * create3_examples_msgs__action__Coverage_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
create3_examples_msgs__action__Coverage_GetResult_Request__Sequence *
create3_examples_msgs__action__Coverage_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Coverage messages.
/**
 * It calls
 * create3_examples_msgs__action__Coverage_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_GetResult_Request__Sequence__destroy(create3_examples_msgs__action__Coverage_GetResult_Request__Sequence * array);

/// Check for action/Coverage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_GetResult_Request__Sequence__are_equal(const create3_examples_msgs__action__Coverage_GetResult_Request__Sequence * lhs, const create3_examples_msgs__action__Coverage_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Coverage messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_GetResult_Request__Sequence__copy(
  const create3_examples_msgs__action__Coverage_GetResult_Request__Sequence * input,
  create3_examples_msgs__action__Coverage_GetResult_Request__Sequence * output);

/// Initialize action/Coverage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * create3_examples_msgs__action__Coverage_GetResult_Response
 * )) before or use
 * create3_examples_msgs__action__Coverage_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_GetResult_Response__init(create3_examples_msgs__action__Coverage_GetResult_Response * msg);

/// Finalize action/Coverage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_GetResult_Response__fini(create3_examples_msgs__action__Coverage_GetResult_Response * msg);

/// Create action/Coverage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * create3_examples_msgs__action__Coverage_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
create3_examples_msgs__action__Coverage_GetResult_Response *
create3_examples_msgs__action__Coverage_GetResult_Response__create();

/// Destroy action/Coverage message.
/**
 * It calls
 * create3_examples_msgs__action__Coverage_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_GetResult_Response__destroy(create3_examples_msgs__action__Coverage_GetResult_Response * msg);

/// Check for action/Coverage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_GetResult_Response__are_equal(const create3_examples_msgs__action__Coverage_GetResult_Response * lhs, const create3_examples_msgs__action__Coverage_GetResult_Response * rhs);

/// Copy a action/Coverage message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_GetResult_Response__copy(
  const create3_examples_msgs__action__Coverage_GetResult_Response * input,
  create3_examples_msgs__action__Coverage_GetResult_Response * output);

/// Initialize array of action/Coverage messages.
/**
 * It allocates the memory for the number of elements and calls
 * create3_examples_msgs__action__Coverage_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_GetResult_Response__Sequence__init(create3_examples_msgs__action__Coverage_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Coverage messages.
/**
 * It calls
 * create3_examples_msgs__action__Coverage_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_GetResult_Response__Sequence__fini(create3_examples_msgs__action__Coverage_GetResult_Response__Sequence * array);

/// Create array of action/Coverage messages.
/**
 * It allocates the memory for the array and calls
 * create3_examples_msgs__action__Coverage_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
create3_examples_msgs__action__Coverage_GetResult_Response__Sequence *
create3_examples_msgs__action__Coverage_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Coverage messages.
/**
 * It calls
 * create3_examples_msgs__action__Coverage_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_GetResult_Response__Sequence__destroy(create3_examples_msgs__action__Coverage_GetResult_Response__Sequence * array);

/// Check for action/Coverage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_GetResult_Response__Sequence__are_equal(const create3_examples_msgs__action__Coverage_GetResult_Response__Sequence * lhs, const create3_examples_msgs__action__Coverage_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Coverage messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_GetResult_Response__Sequence__copy(
  const create3_examples_msgs__action__Coverage_GetResult_Response__Sequence * input,
  create3_examples_msgs__action__Coverage_GetResult_Response__Sequence * output);

/// Initialize action/Coverage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * create3_examples_msgs__action__Coverage_FeedbackMessage
 * )) before or use
 * create3_examples_msgs__action__Coverage_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_FeedbackMessage__init(create3_examples_msgs__action__Coverage_FeedbackMessage * msg);

/// Finalize action/Coverage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_FeedbackMessage__fini(create3_examples_msgs__action__Coverage_FeedbackMessage * msg);

/// Create action/Coverage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * create3_examples_msgs__action__Coverage_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
create3_examples_msgs__action__Coverage_FeedbackMessage *
create3_examples_msgs__action__Coverage_FeedbackMessage__create();

/// Destroy action/Coverage message.
/**
 * It calls
 * create3_examples_msgs__action__Coverage_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_FeedbackMessage__destroy(create3_examples_msgs__action__Coverage_FeedbackMessage * msg);

/// Check for action/Coverage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_FeedbackMessage__are_equal(const create3_examples_msgs__action__Coverage_FeedbackMessage * lhs, const create3_examples_msgs__action__Coverage_FeedbackMessage * rhs);

/// Copy a action/Coverage message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_FeedbackMessage__copy(
  const create3_examples_msgs__action__Coverage_FeedbackMessage * input,
  create3_examples_msgs__action__Coverage_FeedbackMessage * output);

/// Initialize array of action/Coverage messages.
/**
 * It allocates the memory for the number of elements and calls
 * create3_examples_msgs__action__Coverage_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence__init(create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Coverage messages.
/**
 * It calls
 * create3_examples_msgs__action__Coverage_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence__fini(create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence * array);

/// Create array of action/Coverage messages.
/**
 * It allocates the memory for the array and calls
 * create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence *
create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Coverage messages.
/**
 * It calls
 * create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
void
create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence__destroy(create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence * array);

/// Check for action/Coverage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence__are_equal(const create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence * lhs, const create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Coverage messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_create3_examples_msgs
bool
create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence__copy(
  const create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence * input,
  create3_examples_msgs__action__Coverage_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CREATE3_EXAMPLES_MSGS__ACTION__DETAIL__COVERAGE__FUNCTIONS_H_
