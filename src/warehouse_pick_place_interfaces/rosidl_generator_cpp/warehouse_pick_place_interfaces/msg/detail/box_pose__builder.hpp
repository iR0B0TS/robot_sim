// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from warehouse_pick_place_interfaces:msg/BoxPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "warehouse_pick_place_interfaces/msg/box_pose.hpp"


#ifndef WAREHOUSE_PICK_PLACE_INTERFACES__MSG__DETAIL__BOX_POSE__BUILDER_HPP_
#define WAREHOUSE_PICK_PLACE_INTERFACES__MSG__DETAIL__BOX_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "warehouse_pick_place_interfaces/msg/detail/box_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace warehouse_pick_place_interfaces
{

namespace msg
{

namespace builder
{

class Init_BoxPose_yaw
{
public:
  explicit Init_BoxPose_yaw(::warehouse_pick_place_interfaces::msg::BoxPose & msg)
  : msg_(msg)
  {}
  ::warehouse_pick_place_interfaces::msg::BoxPose yaw(::warehouse_pick_place_interfaces::msg::BoxPose::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::msg::BoxPose msg_;
};

class Init_BoxPose_z
{
public:
  explicit Init_BoxPose_z(::warehouse_pick_place_interfaces::msg::BoxPose & msg)
  : msg_(msg)
  {}
  Init_BoxPose_yaw z(::warehouse_pick_place_interfaces::msg::BoxPose::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_BoxPose_yaw(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::msg::BoxPose msg_;
};

class Init_BoxPose_y
{
public:
  explicit Init_BoxPose_y(::warehouse_pick_place_interfaces::msg::BoxPose & msg)
  : msg_(msg)
  {}
  Init_BoxPose_z y(::warehouse_pick_place_interfaces::msg::BoxPose::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_BoxPose_z(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::msg::BoxPose msg_;
};

class Init_BoxPose_x
{
public:
  Init_BoxPose_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoxPose_y x(::warehouse_pick_place_interfaces::msg::BoxPose::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_BoxPose_y(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::msg::BoxPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_pick_place_interfaces::msg::BoxPose>()
{
  return warehouse_pick_place_interfaces::msg::builder::Init_BoxPose_x();
}

}  // namespace warehouse_pick_place_interfaces

#endif  // WAREHOUSE_PICK_PLACE_INTERFACES__MSG__DETAIL__BOX_POSE__BUILDER_HPP_
