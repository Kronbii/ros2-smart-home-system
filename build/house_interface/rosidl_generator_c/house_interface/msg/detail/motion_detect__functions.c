// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from house_interface:msg/MotionDetect.idl
// generated code does not contain a copyright notice
#include "house_interface/msg/detail/motion_detect__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
house_interface__msg__MotionDetect__init(house_interface__msg__MotionDetect * msg)
{
  if (!msg) {
    return false;
  }
  // motion
  return true;
}

void
house_interface__msg__MotionDetect__fini(house_interface__msg__MotionDetect * msg)
{
  if (!msg) {
    return;
  }
  // motion
}

bool
house_interface__msg__MotionDetect__are_equal(const house_interface__msg__MotionDetect * lhs, const house_interface__msg__MotionDetect * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motion
  if (lhs->motion != rhs->motion) {
    return false;
  }
  return true;
}

bool
house_interface__msg__MotionDetect__copy(
  const house_interface__msg__MotionDetect * input,
  house_interface__msg__MotionDetect * output)
{
  if (!input || !output) {
    return false;
  }
  // motion
  output->motion = input->motion;
  return true;
}

house_interface__msg__MotionDetect *
house_interface__msg__MotionDetect__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  house_interface__msg__MotionDetect * msg = (house_interface__msg__MotionDetect *)allocator.allocate(sizeof(house_interface__msg__MotionDetect), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(house_interface__msg__MotionDetect));
  bool success = house_interface__msg__MotionDetect__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
house_interface__msg__MotionDetect__destroy(house_interface__msg__MotionDetect * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    house_interface__msg__MotionDetect__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
house_interface__msg__MotionDetect__Sequence__init(house_interface__msg__MotionDetect__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  house_interface__msg__MotionDetect * data = NULL;

  if (size) {
    data = (house_interface__msg__MotionDetect *)allocator.zero_allocate(size, sizeof(house_interface__msg__MotionDetect), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = house_interface__msg__MotionDetect__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        house_interface__msg__MotionDetect__fini(&data[i - 1]);
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
house_interface__msg__MotionDetect__Sequence__fini(house_interface__msg__MotionDetect__Sequence * array)
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
      house_interface__msg__MotionDetect__fini(&array->data[i]);
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

house_interface__msg__MotionDetect__Sequence *
house_interface__msg__MotionDetect__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  house_interface__msg__MotionDetect__Sequence * array = (house_interface__msg__MotionDetect__Sequence *)allocator.allocate(sizeof(house_interface__msg__MotionDetect__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = house_interface__msg__MotionDetect__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
house_interface__msg__MotionDetect__Sequence__destroy(house_interface__msg__MotionDetect__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    house_interface__msg__MotionDetect__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
house_interface__msg__MotionDetect__Sequence__are_equal(const house_interface__msg__MotionDetect__Sequence * lhs, const house_interface__msg__MotionDetect__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!house_interface__msg__MotionDetect__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
house_interface__msg__MotionDetect__Sequence__copy(
  const house_interface__msg__MotionDetect__Sequence * input,
  house_interface__msg__MotionDetect__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(house_interface__msg__MotionDetect);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    house_interface__msg__MotionDetect * data =
      (house_interface__msg__MotionDetect *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!house_interface__msg__MotionDetect__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          house_interface__msg__MotionDetect__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!house_interface__msg__MotionDetect__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
