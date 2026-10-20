// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from warehouse_pick_place_interfaces:srv/DetectBoxes.idl
// generated code does not contain a copyright notice
#include "warehouse_pick_place_interfaces/srv/detail/detect_boxes__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
warehouse_pick_place_interfaces__srv__DetectBoxes_Request__init(warehouse_pick_place_interfaces__srv__DetectBoxes_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
warehouse_pick_place_interfaces__srv__DetectBoxes_Request__fini(warehouse_pick_place_interfaces__srv__DetectBoxes_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
warehouse_pick_place_interfaces__srv__DetectBoxes_Request__are_equal(const warehouse_pick_place_interfaces__srv__DetectBoxes_Request * lhs, const warehouse_pick_place_interfaces__srv__DetectBoxes_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
warehouse_pick_place_interfaces__srv__DetectBoxes_Request__copy(
  const warehouse_pick_place_interfaces__srv__DetectBoxes_Request * input,
  warehouse_pick_place_interfaces__srv__DetectBoxes_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

warehouse_pick_place_interfaces__srv__DetectBoxes_Request *
warehouse_pick_place_interfaces__srv__DetectBoxes_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__srv__DetectBoxes_Request * msg = (warehouse_pick_place_interfaces__srv__DetectBoxes_Request *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__srv__DetectBoxes_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(warehouse_pick_place_interfaces__srv__DetectBoxes_Request));
  bool success = warehouse_pick_place_interfaces__srv__DetectBoxes_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
warehouse_pick_place_interfaces__srv__DetectBoxes_Request__destroy(warehouse_pick_place_interfaces__srv__DetectBoxes_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    warehouse_pick_place_interfaces__srv__DetectBoxes_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence__init(warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__srv__DetectBoxes_Request * data = NULL;

  if (size) {
    data = (warehouse_pick_place_interfaces__srv__DetectBoxes_Request *)allocator.zero_allocate(size, sizeof(warehouse_pick_place_interfaces__srv__DetectBoxes_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = warehouse_pick_place_interfaces__srv__DetectBoxes_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        warehouse_pick_place_interfaces__srv__DetectBoxes_Request__fini(&data[i - 1]);
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
warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence__fini(warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence * array)
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
      warehouse_pick_place_interfaces__srv__DetectBoxes_Request__fini(&array->data[i]);
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

warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence *
warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence * array = (warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence__destroy(warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence__are_equal(const warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence * lhs, const warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!warehouse_pick_place_interfaces__srv__DetectBoxes_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence__copy(
  const warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence * input,
  warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(warehouse_pick_place_interfaces__srv__DetectBoxes_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    warehouse_pick_place_interfaces__srv__DetectBoxes_Request * data =
      (warehouse_pick_place_interfaces__srv__DetectBoxes_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!warehouse_pick_place_interfaces__srv__DetectBoxes_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          warehouse_pick_place_interfaces__srv__DetectBoxes_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!warehouse_pick_place_interfaces__srv__DetectBoxes_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `boxes`
#include "warehouse_pick_place_interfaces/msg/detail/box_pose__functions.h"

bool
warehouse_pick_place_interfaces__srv__DetectBoxes_Response__init(warehouse_pick_place_interfaces__srv__DetectBoxes_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    warehouse_pick_place_interfaces__srv__DetectBoxes_Response__fini(msg);
    return false;
  }
  // boxes
  if (!warehouse_pick_place_interfaces__msg__BoxPose__Sequence__init(&msg->boxes, 0)) {
    warehouse_pick_place_interfaces__srv__DetectBoxes_Response__fini(msg);
    return false;
  }
  return true;
}

void
warehouse_pick_place_interfaces__srv__DetectBoxes_Response__fini(warehouse_pick_place_interfaces__srv__DetectBoxes_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // boxes
  warehouse_pick_place_interfaces__msg__BoxPose__Sequence__fini(&msg->boxes);
}

bool
warehouse_pick_place_interfaces__srv__DetectBoxes_Response__are_equal(const warehouse_pick_place_interfaces__srv__DetectBoxes_Response * lhs, const warehouse_pick_place_interfaces__srv__DetectBoxes_Response * rhs)
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
  // boxes
  if (!warehouse_pick_place_interfaces__msg__BoxPose__Sequence__are_equal(
      &(lhs->boxes), &(rhs->boxes)))
  {
    return false;
  }
  return true;
}

bool
warehouse_pick_place_interfaces__srv__DetectBoxes_Response__copy(
  const warehouse_pick_place_interfaces__srv__DetectBoxes_Response * input,
  warehouse_pick_place_interfaces__srv__DetectBoxes_Response * output)
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
  // boxes
  if (!warehouse_pick_place_interfaces__msg__BoxPose__Sequence__copy(
      &(input->boxes), &(output->boxes)))
  {
    return false;
  }
  return true;
}

warehouse_pick_place_interfaces__srv__DetectBoxes_Response *
warehouse_pick_place_interfaces__srv__DetectBoxes_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__srv__DetectBoxes_Response * msg = (warehouse_pick_place_interfaces__srv__DetectBoxes_Response *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__srv__DetectBoxes_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(warehouse_pick_place_interfaces__srv__DetectBoxes_Response));
  bool success = warehouse_pick_place_interfaces__srv__DetectBoxes_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
warehouse_pick_place_interfaces__srv__DetectBoxes_Response__destroy(warehouse_pick_place_interfaces__srv__DetectBoxes_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    warehouse_pick_place_interfaces__srv__DetectBoxes_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence__init(warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__srv__DetectBoxes_Response * data = NULL;

  if (size) {
    data = (warehouse_pick_place_interfaces__srv__DetectBoxes_Response *)allocator.zero_allocate(size, sizeof(warehouse_pick_place_interfaces__srv__DetectBoxes_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = warehouse_pick_place_interfaces__srv__DetectBoxes_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        warehouse_pick_place_interfaces__srv__DetectBoxes_Response__fini(&data[i - 1]);
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
warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence__fini(warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence * array)
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
      warehouse_pick_place_interfaces__srv__DetectBoxes_Response__fini(&array->data[i]);
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

warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence *
warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence * array = (warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence__destroy(warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence__are_equal(const warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence * lhs, const warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!warehouse_pick_place_interfaces__srv__DetectBoxes_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence__copy(
  const warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence * input,
  warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(warehouse_pick_place_interfaces__srv__DetectBoxes_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    warehouse_pick_place_interfaces__srv__DetectBoxes_Response * data =
      (warehouse_pick_place_interfaces__srv__DetectBoxes_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!warehouse_pick_place_interfaces__srv__DetectBoxes_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          warehouse_pick_place_interfaces__srv__DetectBoxes_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!warehouse_pick_place_interfaces__srv__DetectBoxes_Response__copy(
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
// #include "warehouse_pick_place_interfaces/srv/detail/detect_boxes__functions.h"

bool
warehouse_pick_place_interfaces__srv__DetectBoxes_Event__init(warehouse_pick_place_interfaces__srv__DetectBoxes_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    warehouse_pick_place_interfaces__srv__DetectBoxes_Event__fini(msg);
    return false;
  }
  // request
  if (!warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence__init(&msg->request, 0)) {
    warehouse_pick_place_interfaces__srv__DetectBoxes_Event__fini(msg);
    return false;
  }
  // response
  if (!warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence__init(&msg->response, 0)) {
    warehouse_pick_place_interfaces__srv__DetectBoxes_Event__fini(msg);
    return false;
  }
  return true;
}

void
warehouse_pick_place_interfaces__srv__DetectBoxes_Event__fini(warehouse_pick_place_interfaces__srv__DetectBoxes_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence__fini(&msg->request);
  // response
  warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence__fini(&msg->response);
}

bool
warehouse_pick_place_interfaces__srv__DetectBoxes_Event__are_equal(const warehouse_pick_place_interfaces__srv__DetectBoxes_Event * lhs, const warehouse_pick_place_interfaces__srv__DetectBoxes_Event * rhs)
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
  if (!warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
warehouse_pick_place_interfaces__srv__DetectBoxes_Event__copy(
  const warehouse_pick_place_interfaces__srv__DetectBoxes_Event * input,
  warehouse_pick_place_interfaces__srv__DetectBoxes_Event * output)
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
  if (!warehouse_pick_place_interfaces__srv__DetectBoxes_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!warehouse_pick_place_interfaces__srv__DetectBoxes_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

warehouse_pick_place_interfaces__srv__DetectBoxes_Event *
warehouse_pick_place_interfaces__srv__DetectBoxes_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__srv__DetectBoxes_Event * msg = (warehouse_pick_place_interfaces__srv__DetectBoxes_Event *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__srv__DetectBoxes_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(warehouse_pick_place_interfaces__srv__DetectBoxes_Event));
  bool success = warehouse_pick_place_interfaces__srv__DetectBoxes_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
warehouse_pick_place_interfaces__srv__DetectBoxes_Event__destroy(warehouse_pick_place_interfaces__srv__DetectBoxes_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    warehouse_pick_place_interfaces__srv__DetectBoxes_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
warehouse_pick_place_interfaces__srv__DetectBoxes_Event__Sequence__init(warehouse_pick_place_interfaces__srv__DetectBoxes_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__srv__DetectBoxes_Event * data = NULL;

  if (size) {
    data = (warehouse_pick_place_interfaces__srv__DetectBoxes_Event *)allocator.zero_allocate(size, sizeof(warehouse_pick_place_interfaces__srv__DetectBoxes_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = warehouse_pick_place_interfaces__srv__DetectBoxes_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        warehouse_pick_place_interfaces__srv__DetectBoxes_Event__fini(&data[i - 1]);
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
warehouse_pick_place_interfaces__srv__DetectBoxes_Event__Sequence__fini(warehouse_pick_place_interfaces__srv__DetectBoxes_Event__Sequence * array)
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
      warehouse_pick_place_interfaces__srv__DetectBoxes_Event__fini(&array->data[i]);
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

warehouse_pick_place_interfaces__srv__DetectBoxes_Event__Sequence *
warehouse_pick_place_interfaces__srv__DetectBoxes_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__srv__DetectBoxes_Event__Sequence * array = (warehouse_pick_place_interfaces__srv__DetectBoxes_Event__Sequence *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__srv__DetectBoxes_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = warehouse_pick_place_interfaces__srv__DetectBoxes_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
warehouse_pick_place_interfaces__srv__DetectBoxes_Event__Sequence__destroy(warehouse_pick_place_interfaces__srv__DetectBoxes_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    warehouse_pick_place_interfaces__srv__DetectBoxes_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
warehouse_pick_place_interfaces__srv__DetectBoxes_Event__Sequence__are_equal(const warehouse_pick_place_interfaces__srv__DetectBoxes_Event__Sequence * lhs, const warehouse_pick_place_interfaces__srv__DetectBoxes_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!warehouse_pick_place_interfaces__srv__DetectBoxes_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
warehouse_pick_place_interfaces__srv__DetectBoxes_Event__Sequence__copy(
  const warehouse_pick_place_interfaces__srv__DetectBoxes_Event__Sequence * input,
  warehouse_pick_place_interfaces__srv__DetectBoxes_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(warehouse_pick_place_interfaces__srv__DetectBoxes_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    warehouse_pick_place_interfaces__srv__DetectBoxes_Event * data =
      (warehouse_pick_place_interfaces__srv__DetectBoxes_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!warehouse_pick_place_interfaces__srv__DetectBoxes_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          warehouse_pick_place_interfaces__srv__DetectBoxes_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!warehouse_pick_place_interfaces__srv__DetectBoxes_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
