// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from warehouse_pick_place_interfaces:msg/BoxPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "warehouse_pick_place_interfaces/msg/box_pose.hpp"


#ifndef WAREHOUSE_PICK_PLACE_INTERFACES__MSG__DETAIL__BOX_POSE__STRUCT_HPP_
#define WAREHOUSE_PICK_PLACE_INTERFACES__MSG__DETAIL__BOX_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__warehouse_pick_place_interfaces__msg__BoxPose __attribute__((deprecated))
#else
# define DEPRECATED__warehouse_pick_place_interfaces__msg__BoxPose __declspec(deprecated)
#endif

namespace warehouse_pick_place_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoxPose_
{
  using Type = BoxPose_<ContainerAllocator>;

  explicit BoxPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->yaw = 0.0;
    }
  }

  explicit BoxPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->yaw = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _yaw_type =
    double;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    warehouse_pick_place_interfaces::msg::BoxPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const warehouse_pick_place_interfaces::msg::BoxPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<warehouse_pick_place_interfaces::msg::BoxPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<warehouse_pick_place_interfaces::msg::BoxPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      warehouse_pick_place_interfaces::msg::BoxPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<warehouse_pick_place_interfaces::msg::BoxPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      warehouse_pick_place_interfaces::msg::BoxPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<warehouse_pick_place_interfaces::msg::BoxPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<warehouse_pick_place_interfaces::msg::BoxPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<warehouse_pick_place_interfaces::msg::BoxPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__warehouse_pick_place_interfaces__msg__BoxPose
    std::shared_ptr<warehouse_pick_place_interfaces::msg::BoxPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__warehouse_pick_place_interfaces__msg__BoxPose
    std::shared_ptr<warehouse_pick_place_interfaces::msg::BoxPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoxPose_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoxPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoxPose_

// alias to use template instance with default allocator
using BoxPose =
  warehouse_pick_place_interfaces::msg::BoxPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace warehouse_pick_place_interfaces

#endif  // WAREHOUSE_PICK_PLACE_INTERFACES__MSG__DETAIL__BOX_POSE__STRUCT_HPP_
