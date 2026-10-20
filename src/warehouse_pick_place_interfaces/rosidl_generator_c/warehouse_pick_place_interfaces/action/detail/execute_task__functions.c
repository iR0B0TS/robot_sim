// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from warehouse_pick_place_interfaces:action/ExecuteTask.idl
// generated code does not contain a copyright notice
#include "warehouse_pick_place_interfaces/action/detail/execute_task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `command`
// Member `destination`
// Member `box_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `box_poses`
#include "warehouse_pick_place_interfaces/msg/detail/box_pose__functions.h"

bool
warehouse_pick_place_interfaces__action__ExecuteTask_Goal__init(warehouse_pick_place_interfaces__action__ExecuteTask_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    warehouse_pick_place_interfaces__action__ExecuteTask_Goal__fini(msg);
    return false;
  }
  // destination
  if (!rosidl_runtime_c__String__init(&msg->destination)) {
    warehouse_pick_place_interfaces__action__ExecuteTask_Goal__fini(msg);
    return false;
  }
  // box_name
  if (!rosidl_runtime_c__String__init(&msg->box_name)) {
    warehouse_pick_place_interfaces__action__ExecuteTask_Goal__fini(msg);
    return false;
  }
  // box_poses
  if (!warehouse_pick_place_interfaces__msg__BoxPose__Sequence__init(&msg->box_poses, 0)) {
    warehouse_pick_place_interfaces__action__ExecuteTask_Goal__fini(msg);
    return false;
  }
  // x
  // y
  // z
  return true;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_Goal__fini(warehouse_pick_place_interfaces__action__ExecuteTask_Goal * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
  // destination
  rosidl_runtime_c__String__fini(&msg->destination);
  // box_name
  rosidl_runtime_c__String__fini(&msg->box_name);
  // box_poses
  warehouse_pick_place_interfaces__msg__BoxPose__Sequence__fini(&msg->box_poses);
  // x
  // y
  // z
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_Goal__are_equal(const warehouse_pick_place_interfaces__action__ExecuteTask_Goal * lhs, const warehouse_pick_place_interfaces__action__ExecuteTask_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  // destination
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->destination), &(rhs->destination)))
  {
    return false;
  }
  // box_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->box_name), &(rhs->box_name)))
  {
    return false;
  }
  // box_poses
  if (!warehouse_pick_place_interfaces__msg__BoxPose__Sequence__are_equal(
      &(lhs->box_poses), &(rhs->box_poses)))
  {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  return true;
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_Goal__copy(
  const warehouse_pick_place_interfaces__action__ExecuteTask_Goal * input,
  warehouse_pick_place_interfaces__action__ExecuteTask_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  // destination
  if (!rosidl_runtime_c__String__copy(
      &(input->destination), &(output->destination)))
  {
    return false;
  }
  // box_name
  if (!rosidl_runtime_c__String__copy(
      &(input->box_name), &(output->box_name)))
  {
    return false;
  }
  // box_poses
  if (!warehouse_pick_place_interfaces__msg__BoxPose__Sequence__copy(
      &(input->box_poses), &(output->box_poses)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  return true;
}

warehouse_pick_place_interfaces__action__ExecuteTask_Goal *
warehouse_pick_place_interfaces__action__ExecuteTask_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_Goal * msg = (warehouse_pick_place_interfaces__action__ExecuteTask_Goal *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_Goal));
  bool success = warehouse_pick_place_interfaces__action__ExecuteTask_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_Goal__destroy(warehouse_pick_place_interfaces__action__ExecuteTask_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    warehouse_pick_place_interfaces__action__ExecuteTask_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence__init(warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_Goal * data = NULL;

  if (size) {
    data = (warehouse_pick_place_interfaces__action__ExecuteTask_Goal *)allocator.zero_allocate(size, sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = warehouse_pick_place_interfaces__action__ExecuteTask_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        warehouse_pick_place_interfaces__action__ExecuteTask_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence__fini(warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      warehouse_pick_place_interfaces__action__ExecuteTask_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence *
warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence * array = (warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence__destroy(warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence__are_equal(const warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence * lhs, const warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!warehouse_pick_place_interfaces__action__ExecuteTask_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence__copy(
  const warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence * input,
  warehouse_pick_place_interfaces__action__ExecuteTask_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    warehouse_pick_place_interfaces__action__ExecuteTask_Goal * data =
      (warehouse_pick_place_interfaces__action__ExecuteTask_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!warehouse_pick_place_interfaces__action__ExecuteTask_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          warehouse_pick_place_interfaces__action__ExecuteTask_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!warehouse_pick_place_interfaces__action__ExecuteTask_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
warehouse_pick_place_interfaces__action__ExecuteTask_Result__init(warehouse_pick_place_interfaces__action__ExecuteTask_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    warehouse_pick_place_interfaces__action__ExecuteTask_Result__fini(msg);
    return false;
  }
  return true;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_Result__fini(warehouse_pick_place_interfaces__action__ExecuteTask_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_Result__are_equal(const warehouse_pick_place_interfaces__action__ExecuteTask_Result * lhs, const warehouse_pick_place_interfaces__action__ExecuteTask_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_Result__copy(
  const warehouse_pick_place_interfaces__action__ExecuteTask_Result * input,
  warehouse_pick_place_interfaces__action__ExecuteTask_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

warehouse_pick_place_interfaces__action__ExecuteTask_Result *
warehouse_pick_place_interfaces__action__ExecuteTask_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_Result * msg = (warehouse_pick_place_interfaces__action__ExecuteTask_Result *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_Result));
  bool success = warehouse_pick_place_interfaces__action__ExecuteTask_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_Result__destroy(warehouse_pick_place_interfaces__action__ExecuteTask_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    warehouse_pick_place_interfaces__action__ExecuteTask_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence__init(warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_Result * data = NULL;

  if (size) {
    data = (warehouse_pick_place_interfaces__action__ExecuteTask_Result *)allocator.zero_allocate(size, sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = warehouse_pick_place_interfaces__action__ExecuteTask_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        warehouse_pick_place_interfaces__action__ExecuteTask_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence__fini(warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      warehouse_pick_place_interfaces__action__ExecuteTask_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence *
warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence * array = (warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence__destroy(warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence__are_equal(const warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence * lhs, const warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!warehouse_pick_place_interfaces__action__ExecuteTask_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence__copy(
  const warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence * input,
  warehouse_pick_place_interfaces__action__ExecuteTask_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    warehouse_pick_place_interfaces__action__ExecuteTask_Result * data =
      (warehouse_pick_place_interfaces__action__ExecuteTask_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!warehouse_pick_place_interfaces__action__ExecuteTask_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          warehouse_pick_place_interfaces__action__ExecuteTask_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!warehouse_pick_place_interfaces__action__ExecuteTask_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `state`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__init(warehouse_pick_place_interfaces__action__ExecuteTask_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__fini(msg);
    return false;
  }
  // progress
  return true;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__fini(warehouse_pick_place_interfaces__action__ExecuteTask_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // progress
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__are_equal(const warehouse_pick_place_interfaces__action__ExecuteTask_Feedback * lhs, const warehouse_pick_place_interfaces__action__ExecuteTask_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // progress
  if (lhs->progress != rhs->progress) {
    return false;
  }
  return true;
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__copy(
  const warehouse_pick_place_interfaces__action__ExecuteTask_Feedback * input,
  warehouse_pick_place_interfaces__action__ExecuteTask_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // progress
  output->progress = input->progress;
  return true;
}

warehouse_pick_place_interfaces__action__ExecuteTask_Feedback *
warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_Feedback * msg = (warehouse_pick_place_interfaces__action__ExecuteTask_Feedback *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_Feedback));
  bool success = warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__destroy(warehouse_pick_place_interfaces__action__ExecuteTask_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence__init(warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_Feedback * data = NULL;

  if (size) {
    data = (warehouse_pick_place_interfaces__action__ExecuteTask_Feedback *)allocator.zero_allocate(size, sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence__fini(warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence *
warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence * array = (warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence__destroy(warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence__are_equal(const warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence * lhs, const warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence__copy(
  const warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence * input,
  warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    warehouse_pick_place_interfaces__action__ExecuteTask_Feedback * data =
      (warehouse_pick_place_interfaces__action__ExecuteTask_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "warehouse_pick_place_interfaces/action/detail/execute_task__functions.h"

bool
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__init(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!warehouse_pick_place_interfaces__action__ExecuteTask_Goal__init(&msg->goal)) {
    warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__fini(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  warehouse_pick_place_interfaces__action__ExecuteTask_Goal__fini(&msg->goal);
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__are_equal(const warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request * lhs, const warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!warehouse_pick_place_interfaces__action__ExecuteTask_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__copy(
  const warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request * input,
  warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!warehouse_pick_place_interfaces__action__ExecuteTask_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request *
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request * msg = (warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request));
  bool success = warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__destroy(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence__init(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request * data = NULL;

  if (size) {
    data = (warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request *)allocator.zero_allocate(size, sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence__fini(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence *
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence * array = (warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence__destroy(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence__are_equal(const warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence * lhs, const warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence__copy(
  const warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence * input,
  warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request * data =
      (warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__init(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__fini(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__are_equal(const warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response * lhs, const warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__copy(
  const warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response * input,
  warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response *
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response * msg = (warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response));
  bool success = warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__destroy(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence__init(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response * data = NULL;

  if (size) {
    data = (warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response *)allocator.zero_allocate(size, sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence__fini(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence *
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence * array = (warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence__destroy(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence__are_equal(const warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence * lhs, const warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence__copy(
  const warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence * input,
  warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response * data =
      (warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "warehouse_pick_place_interfaces/action/detail/execute_task__functions.h"

bool
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__init(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__fini(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__are_equal(const warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event * lhs, const warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__copy(
  const warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event * input,
  warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event *
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event * msg = (warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event));
  bool success = warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__destroy(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__Sequence__init(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event * data = NULL;

  if (size) {
    data = (warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event *)allocator.zero_allocate(size, sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__Sequence__fini(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__Sequence *
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__Sequence * array = (warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__Sequence *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__Sequence__destroy(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__Sequence__are_equal(const warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__Sequence * lhs, const warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__Sequence__copy(
  const warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__Sequence * input,
  warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event * data =
      (warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!warehouse_pick_place_interfaces__action__ExecuteTask_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__init(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__fini(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__are_equal(const warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request * lhs, const warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__copy(
  const warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request * input,
  warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request *
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request * msg = (warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request));
  bool success = warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__destroy(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence__init(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request * data = NULL;

  if (size) {
    data = (warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request *)allocator.zero_allocate(size, sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence__fini(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence *
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence * array = (warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence__destroy(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence__are_equal(const warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence * lhs, const warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence__copy(
  const warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence * input,
  warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request * data =
      (warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "warehouse_pick_place_interfaces/action/detail/execute_task__functions.h"

bool
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__init(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!warehouse_pick_place_interfaces__action__ExecuteTask_Result__init(&msg->result)) {
    warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__fini(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  warehouse_pick_place_interfaces__action__ExecuteTask_Result__fini(&msg->result);
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__are_equal(const warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response * lhs, const warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!warehouse_pick_place_interfaces__action__ExecuteTask_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__copy(
  const warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response * input,
  warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!warehouse_pick_place_interfaces__action__ExecuteTask_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response *
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response * msg = (warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response));
  bool success = warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__destroy(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence__init(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response * data = NULL;

  if (size) {
    data = (warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response *)allocator.zero_allocate(size, sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence__fini(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence *
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence * array = (warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence__destroy(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence__are_equal(const warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence * lhs, const warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence__copy(
  const warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence * input,
  warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response * data =
      (warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "warehouse_pick_place_interfaces/action/detail/execute_task__functions.h"

bool
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__init(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence__init(&msg->request, 0)) {
    warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence__init(&msg->response, 0)) {
    warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__fini(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence__fini(&msg->request);
  // response
  warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence__fini(&msg->response);
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__are_equal(const warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event * lhs, const warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__copy(
  const warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event * input,
  warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event *
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event * msg = (warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event));
  bool success = warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__destroy(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__Sequence__init(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event * data = NULL;

  if (size) {
    data = (warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event *)allocator.zero_allocate(size, sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__Sequence__fini(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__Sequence *
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__Sequence * array = (warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__Sequence *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__Sequence__destroy(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__Sequence__are_equal(const warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__Sequence * lhs, const warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__Sequence__copy(
  const warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__Sequence * input,
  warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event * data =
      (warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!warehouse_pick_place_interfaces__action__ExecuteTask_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "warehouse_pick_place_interfaces/action/detail/execute_task__functions.h"

bool
warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__init(warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__init(&msg->feedback)) {
    warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__fini(warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__fini(&msg->feedback);
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__are_equal(const warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage * lhs, const warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__copy(
  const warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage * input,
  warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!warehouse_pick_place_interfaces__action__ExecuteTask_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage *
warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage * msg = (warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage));
  bool success = warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__destroy(warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence__init(warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage * data = NULL;

  if (size) {
    data = (warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage *)allocator.zero_allocate(size, sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence__fini(warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence *
warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence * array = (warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence__destroy(warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence__are_equal(const warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence * lhs, const warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence__copy(
  const warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence * input,
  warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage * data =
      (warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!warehouse_pick_place_interfaces__action__ExecuteTask_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
