// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from warehouse_pick_place_interfaces:srv/SetBoxAttached.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "warehouse_pick_place_interfaces/srv/set_box_attached.hpp"


#ifndef WAREHOUSE_PICK_PLACE_INTERFACES__SRV__DETAIL__SET_BOX_ATTACHED__BUILDER_HPP_
#define WAREHOUSE_PICK_PLACE_INTERFACES__SRV__DETAIL__SET_BOX_ATTACHED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "warehouse_pick_place_interfaces/srv/detail/set_box_attached__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace warehouse_pick_place_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetBoxAttached_Request_attached
{
public:
  explicit Init_SetBoxAttached_Request_attached(::warehouse_pick_place_interfaces::srv::SetBoxAttached_Request & msg)
  : msg_(msg)
  {}
  ::warehouse_pick_place_interfaces::srv::SetBoxAttached_Request attached(::warehouse_pick_place_interfaces::srv::SetBoxAttached_Request::_attached_type arg)
  {
    msg_.attached = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::srv::SetBoxAttached_Request msg_;
};

class Init_SetBoxAttached_Request_box_name
{
public:
  Init_SetBoxAttached_Request_box_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetBoxAttached_Request_attached box_name(::warehouse_pick_place_interfaces::srv::SetBoxAttached_Request::_box_name_type arg)
  {
    msg_.box_name = std::move(arg);
    return Init_SetBoxAttached_Request_attached(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::srv::SetBoxAttached_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_pick_place_interfaces::srv::SetBoxAttached_Request>()
{
  return warehouse_pick_place_interfaces::srv::builder::Init_SetBoxAttached_Request_box_name();
}

}  // namespace warehouse_pick_place_interfaces


namespace warehouse_pick_place_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetBoxAttached_Response_message
{
public:
  explicit Init_SetBoxAttached_Response_message(::warehouse_pick_place_interfaces::srv::SetBoxAttached_Response & msg)
  : msg_(msg)
  {}
  ::warehouse_pick_place_interfaces::srv::SetBoxAttached_Response message(::warehouse_pick_place_interfaces::srv::SetBoxAttached_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::srv::SetBoxAttached_Response msg_;
};

class Init_SetBoxAttached_Response_success
{
public:
  Init_SetBoxAttached_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetBoxAttached_Response_message success(::warehouse_pick_place_interfaces::srv::SetBoxAttached_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetBoxAttached_Response_message(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::srv::SetBoxAttached_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_pick_place_interfaces::srv::SetBoxAttached_Response>()
{
  return warehouse_pick_place_interfaces::srv::builder::Init_SetBoxAttached_Response_success();
}

}  // namespace warehouse_pick_place_interfaces


namespace warehouse_pick_place_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetBoxAttached_Event_response
{
public:
  explicit Init_SetBoxAttached_Event_response(::warehouse_pick_place_interfaces::srv::SetBoxAttached_Event & msg)
  : msg_(msg)
  {}
  ::warehouse_pick_place_interfaces::srv::SetBoxAttached_Event response(::warehouse_pick_place_interfaces::srv::SetBoxAttached_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::srv::SetBoxAttached_Event msg_;
};

class Init_SetBoxAttached_Event_request
{
public:
  explicit Init_SetBoxAttached_Event_request(::warehouse_pick_place_interfaces::srv::SetBoxAttached_Event & msg)
  : msg_(msg)
  {}
  Init_SetBoxAttached_Event_response request(::warehouse_pick_place_interfaces::srv::SetBoxAttached_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetBoxAttached_Event_response(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::srv::SetBoxAttached_Event msg_;
};

class Init_SetBoxAttached_Event_info
{
public:
  Init_SetBoxAttached_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetBoxAttached_Event_request info(::warehouse_pick_place_interfaces::srv::SetBoxAttached_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetBoxAttached_Event_request(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::srv::SetBoxAttached_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_pick_place_interfaces::srv::SetBoxAttached_Event>()
{
  return warehouse_pick_place_interfaces::srv::builder::Init_SetBoxAttached_Event_info();
}

}  // namespace warehouse_pick_place_interfaces

#endif  // WAREHOUSE_PICK_PLACE_INTERFACES__SRV__DETAIL__SET_BOX_ATTACHED__BUILDER_HPP_
