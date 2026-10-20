// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from warehouse_pick_place_interfaces:msg/BoxPose.idl
// generated code does not contain a copyright notice
#include "warehouse_pick_place_interfaces/msg/detail/box_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
warehouse_pick_place_interfaces__msg__BoxPose__init(warehouse_pick_place_interfaces__msg__BoxPose * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // yaw
  return true;
}

void
warehouse_pick_place_interfaces__msg__BoxPose__fini(warehouse_pick_place_interfaces__msg__BoxPose * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // yaw
}

bool
warehouse_pick_place_interfaces__msg__BoxPose__are_equal(const warehouse_pick_place_interfaces__msg__BoxPose * lhs, const warehouse_pick_place_interfaces__msg__BoxPose * rhs)
{
  if (!lhs || !rhs) {
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
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  return true;
}

bool
warehouse_pick_place_interfaces__msg__BoxPose__copy(
  const warehouse_pick_place_interfaces__msg__BoxPose * input,
  warehouse_pick_place_interfaces__msg__BoxPose * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // yaw
  output->yaw = input->yaw;
  return true;
}

warehouse_pick_place_interfaces__msg__BoxPose *
warehouse_pick_place_interfaces__msg__BoxPose__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__msg__BoxPose * msg = (warehouse_pick_place_interfaces__msg__BoxPose *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__msg__BoxPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(warehouse_pick_place_interfaces__msg__BoxPose));
  bool success = warehouse_pick_place_interfaces__msg__BoxPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
warehouse_pick_place_interfaces__msg__BoxPose__destroy(warehouse_pick_place_interfaces__msg__BoxPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    warehouse_pick_place_interfaces__msg__BoxPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
warehouse_pick_place_interfaces__msg__BoxPose__Sequence__init(warehouse_pick_place_interfaces__msg__BoxPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__msg__BoxPose * data = NULL;

  if (size) {
    data = (warehouse_pick_place_interfaces__msg__BoxPose *)allocator.zero_allocate(size, sizeof(warehouse_pick_place_interfaces__msg__BoxPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = warehouse_pick_place_interfaces__msg__BoxPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        warehouse_pick_place_interfaces__msg__BoxPose__fini(&data[i - 1]);
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
warehouse_pick_place_interfaces__msg__BoxPose__Sequence__fini(warehouse_pick_place_interfaces__msg__BoxPose__Sequence * array)
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
      warehouse_pick_place_interfaces__msg__BoxPose__fini(&array->data[i]);
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

warehouse_pick_place_interfaces__msg__BoxPose__Sequence *
warehouse_pick_place_interfaces__msg__BoxPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_pick_place_interfaces__msg__BoxPose__Sequence * array = (warehouse_pick_place_interfaces__msg__BoxPose__Sequence *)allocator.allocate(sizeof(warehouse_pick_place_interfaces__msg__BoxPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = warehouse_pick_place_interfaces__msg__BoxPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
warehouse_pick_place_interfaces__msg__BoxPose__Sequence__destroy(warehouse_pick_place_interfaces__msg__BoxPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    warehouse_pick_place_interfaces__msg__BoxPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
warehouse_pick_place_interfaces__msg__BoxPose__Sequence__are_equal(const warehouse_pick_place_interfaces__msg__BoxPose__Sequence * lhs, const warehouse_pick_place_interfaces__msg__BoxPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!warehouse_pick_place_interfaces__msg__BoxPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
warehouse_pick_place_interfaces__msg__BoxPose__Sequence__copy(
  const warehouse_pick_place_interfaces__msg__BoxPose__Sequence * input,
  warehouse_pick_place_interfaces__msg__BoxPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(warehouse_pick_place_interfaces__msg__BoxPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    warehouse_pick_place_interfaces__msg__BoxPose * data =
      (warehouse_pick_place_interfaces__msg__BoxPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!warehouse_pick_place_interfaces__msg__BoxPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          warehouse_pick_place_interfaces__msg__BoxPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!warehouse_pick_place_interfaces__msg__BoxPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
