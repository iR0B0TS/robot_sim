// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from warehouse_pick_place_interfaces:srv/DetectBoxes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "warehouse_pick_place_interfaces/srv/detect_boxes.hpp"


#ifndef WAREHOUSE_PICK_PLACE_INTERFACES__SRV__DETAIL__DETECT_BOXES__BUILDER_HPP_
#define WAREHOUSE_PICK_PLACE_INTERFACES__SRV__DETAIL__DETECT_BOXES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "warehouse_pick_place_interfaces/srv/detail/detect_boxes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace warehouse_pick_place_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_pick_place_interfaces::srv::DetectBoxes_Request>()
{
  return ::warehouse_pick_place_interfaces::srv::DetectBoxes_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace warehouse_pick_place_interfaces


namespace warehouse_pick_place_interfaces
{

namespace srv
{

namespace builder
{

class Init_DetectBoxes_Response_boxes
{
public:
  explicit Init_DetectBoxes_Response_boxes(::warehouse_pick_place_interfaces::srv::DetectBoxes_Response & msg)
  : msg_(msg)
  {}
  ::warehouse_pick_place_interfaces::srv::DetectBoxes_Response boxes(::warehouse_pick_place_interfaces::srv::DetectBoxes_Response::_boxes_type arg)
  {
    msg_.boxes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::srv::DetectBoxes_Response msg_;
};

class Init_DetectBoxes_Response_message
{
public:
  explicit Init_DetectBoxes_Response_message(::warehouse_pick_place_interfaces::srv::DetectBoxes_Response & msg)
  : msg_(msg)
  {}
  Init_DetectBoxes_Response_boxes message(::warehouse_pick_place_interfaces::srv::DetectBoxes_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_DetectBoxes_Response_boxes(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::srv::DetectBoxes_Response msg_;
};

class Init_DetectBoxes_Response_success
{
public:
  Init_DetectBoxes_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectBoxes_Response_message success(::warehouse_pick_place_interfaces::srv::DetectBoxes_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DetectBoxes_Response_message(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::srv::DetectBoxes_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_pick_place_interfaces::srv::DetectBoxes_Response>()
{
  return warehouse_pick_place_interfaces::srv::builder::Init_DetectBoxes_Response_success();
}

}  // namespace warehouse_pick_place_interfaces


namespace warehouse_pick_place_interfaces
{

namespace srv
{

namespace builder
{

class Init_DetectBoxes_Event_response
{
public:
  explicit Init_DetectBoxes_Event_response(::warehouse_pick_place_interfaces::srv::DetectBoxes_Event & msg)
  : msg_(msg)
  {}
  ::warehouse_pick_place_interfaces::srv::DetectBoxes_Event response(::warehouse_pick_place_interfaces::srv::DetectBoxes_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::srv::DetectBoxes_Event msg_;
};

class Init_DetectBoxes_Event_request
{
public:
  explicit Init_DetectBoxes_Event_request(::warehouse_pick_place_interfaces::srv::DetectBoxes_Event & msg)
  : msg_(msg)
  {}
  Init_DetectBoxes_Event_response request(::warehouse_pick_place_interfaces::srv::DetectBoxes_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DetectBoxes_Event_response(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::srv::DetectBoxes_Event msg_;
};

class Init_DetectBoxes_Event_info
{
public:
  Init_DetectBoxes_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectBoxes_Event_request info(::warehouse_pick_place_interfaces::srv::DetectBoxes_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DetectBoxes_Event_request(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::srv::DetectBoxes_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_pick_place_interfaces::srv::DetectBoxes_Event>()
{
  return warehouse_pick_place_interfaces::srv::builder::Init_DetectBoxes_Event_info();
}

}  // namespace warehouse_pick_place_interfaces

#endif  // WAREHOUSE_PICK_PLACE_INTERFACES__SRV__DETAIL__DETECT_BOXES__BUILDER_HPP_
