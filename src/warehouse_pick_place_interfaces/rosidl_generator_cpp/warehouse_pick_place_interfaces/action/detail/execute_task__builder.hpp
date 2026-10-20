// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from warehouse_pick_place_interfaces:action/ExecuteTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "warehouse_pick_place_interfaces/action/execute_task.hpp"


#ifndef WAREHOUSE_PICK_PLACE_INTERFACES__ACTION__DETAIL__EXECUTE_TASK__BUILDER_HPP_
#define WAREHOUSE_PICK_PLACE_INTERFACES__ACTION__DETAIL__EXECUTE_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "warehouse_pick_place_interfaces/action/detail/execute_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace warehouse_pick_place_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteTask_Goal_z
{
public:
  explicit Init_ExecuteTask_Goal_z(::warehouse_pick_place_interfaces::action::ExecuteTask_Goal & msg)
  : msg_(msg)
  {}
  ::warehouse_pick_place_interfaces::action::ExecuteTask_Goal z(::warehouse_pick_place_interfaces::action::ExecuteTask_Goal::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_Goal msg_;
};

class Init_ExecuteTask_Goal_y
{
public:
  explicit Init_ExecuteTask_Goal_y(::warehouse_pick_place_interfaces::action::ExecuteTask_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteTask_Goal_z y(::warehouse_pick_place_interfaces::action::ExecuteTask_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ExecuteTask_Goal_z(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_Goal msg_;
};

class Init_ExecuteTask_Goal_x
{
public:
  explicit Init_ExecuteTask_Goal_x(::warehouse_pick_place_interfaces::action::ExecuteTask_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteTask_Goal_y x(::warehouse_pick_place_interfaces::action::ExecuteTask_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ExecuteTask_Goal_y(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_Goal msg_;
};

class Init_ExecuteTask_Goal_box_poses
{
public:
  explicit Init_ExecuteTask_Goal_box_poses(::warehouse_pick_place_interfaces::action::ExecuteTask_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteTask_Goal_x box_poses(::warehouse_pick_place_interfaces::action::ExecuteTask_Goal::_box_poses_type arg)
  {
    msg_.box_poses = std::move(arg);
    return Init_ExecuteTask_Goal_x(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_Goal msg_;
};

class Init_ExecuteTask_Goal_box_name
{
public:
  explicit Init_ExecuteTask_Goal_box_name(::warehouse_pick_place_interfaces::action::ExecuteTask_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteTask_Goal_box_poses box_name(::warehouse_pick_place_interfaces::action::ExecuteTask_Goal::_box_name_type arg)
  {
    msg_.box_name = std::move(arg);
    return Init_ExecuteTask_Goal_box_poses(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_Goal msg_;
};

class Init_ExecuteTask_Goal_destination
{
public:
  explicit Init_ExecuteTask_Goal_destination(::warehouse_pick_place_interfaces::action::ExecuteTask_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteTask_Goal_box_name destination(::warehouse_pick_place_interfaces::action::ExecuteTask_Goal::_destination_type arg)
  {
    msg_.destination = std::move(arg);
    return Init_ExecuteTask_Goal_box_name(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_Goal msg_;
};

class Init_ExecuteTask_Goal_command
{
public:
  Init_ExecuteTask_Goal_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTask_Goal_destination command(::warehouse_pick_place_interfaces::action::ExecuteTask_Goal::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_ExecuteTask_Goal_destination(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_pick_place_interfaces::action::ExecuteTask_Goal>()
{
  return warehouse_pick_place_interfaces::action::builder::Init_ExecuteTask_Goal_command();
}

}  // namespace warehouse_pick_place_interfaces


namespace warehouse_pick_place_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteTask_Result_message
{
public:
  explicit Init_ExecuteTask_Result_message(::warehouse_pick_place_interfaces::action::ExecuteTask_Result & msg)
  : msg_(msg)
  {}
  ::warehouse_pick_place_interfaces::action::ExecuteTask_Result message(::warehouse_pick_place_interfaces::action::ExecuteTask_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_Result msg_;
};

class Init_ExecuteTask_Result_success
{
public:
  Init_ExecuteTask_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTask_Result_message success(::warehouse_pick_place_interfaces::action::ExecuteTask_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ExecuteTask_Result_message(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_pick_place_interfaces::action::ExecuteTask_Result>()
{
  return warehouse_pick_place_interfaces::action::builder::Init_ExecuteTask_Result_success();
}

}  // namespace warehouse_pick_place_interfaces


namespace warehouse_pick_place_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteTask_Feedback_progress
{
public:
  explicit Init_ExecuteTask_Feedback_progress(::warehouse_pick_place_interfaces::action::ExecuteTask_Feedback & msg)
  : msg_(msg)
  {}
  ::warehouse_pick_place_interfaces::action::ExecuteTask_Feedback progress(::warehouse_pick_place_interfaces::action::ExecuteTask_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_Feedback msg_;
};

class Init_ExecuteTask_Feedback_state
{
public:
  Init_ExecuteTask_Feedback_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTask_Feedback_progress state(::warehouse_pick_place_interfaces::action::ExecuteTask_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_ExecuteTask_Feedback_progress(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_pick_place_interfaces::action::ExecuteTask_Feedback>()
{
  return warehouse_pick_place_interfaces::action::builder::Init_ExecuteTask_Feedback_state();
}

}  // namespace warehouse_pick_place_interfaces


namespace warehouse_pick_place_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteTask_SendGoal_Request_goal
{
public:
  explicit Init_ExecuteTask_SendGoal_Request_goal(::warehouse_pick_place_interfaces::action::ExecuteTask_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::warehouse_pick_place_interfaces::action::ExecuteTask_SendGoal_Request goal(::warehouse_pick_place_interfaces::action::ExecuteTask_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_SendGoal_Request msg_;
};

class Init_ExecuteTask_SendGoal_Request_goal_id
{
public:
  Init_ExecuteTask_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTask_SendGoal_Request_goal goal_id(::warehouse_pick_place_interfaces::action::ExecuteTask_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteTask_SendGoal_Request_goal(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_pick_place_interfaces::action::ExecuteTask_SendGoal_Request>()
{
  return warehouse_pick_place_interfaces::action::builder::Init_ExecuteTask_SendGoal_Request_goal_id();
}

}  // namespace warehouse_pick_place_interfaces


namespace warehouse_pick_place_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteTask_SendGoal_Response_stamp
{
public:
  explicit Init_ExecuteTask_SendGoal_Response_stamp(::warehouse_pick_place_interfaces::action::ExecuteTask_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::warehouse_pick_place_interfaces::action::ExecuteTask_SendGoal_Response stamp(::warehouse_pick_place_interfaces::action::ExecuteTask_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_SendGoal_Response msg_;
};

class Init_ExecuteTask_SendGoal_Response_accepted
{
public:
  Init_ExecuteTask_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTask_SendGoal_Response_stamp accepted(::warehouse_pick_place_interfaces::action::ExecuteTask_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ExecuteTask_SendGoal_Response_stamp(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_pick_place_interfaces::action::ExecuteTask_SendGoal_Response>()
{
  return warehouse_pick_place_interfaces::action::builder::Init_ExecuteTask_SendGoal_Response_accepted();
}

}  // namespace warehouse_pick_place_interfaces


namespace warehouse_pick_place_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteTask_SendGoal_Event_response
{
public:
  explicit Init_ExecuteTask_SendGoal_Event_response(::warehouse_pick_place_interfaces::action::ExecuteTask_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::warehouse_pick_place_interfaces::action::ExecuteTask_SendGoal_Event response(::warehouse_pick_place_interfaces::action::ExecuteTask_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_SendGoal_Event msg_;
};

class Init_ExecuteTask_SendGoal_Event_request
{
public:
  explicit Init_ExecuteTask_SendGoal_Event_request(::warehouse_pick_place_interfaces::action::ExecuteTask_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_ExecuteTask_SendGoal_Event_response request(::warehouse_pick_place_interfaces::action::ExecuteTask_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExecuteTask_SendGoal_Event_response(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_SendGoal_Event msg_;
};

class Init_ExecuteTask_SendGoal_Event_info
{
public:
  Init_ExecuteTask_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTask_SendGoal_Event_request info(::warehouse_pick_place_interfaces::action::ExecuteTask_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExecuteTask_SendGoal_Event_request(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_pick_place_interfaces::action::ExecuteTask_SendGoal_Event>()
{
  return warehouse_pick_place_interfaces::action::builder::Init_ExecuteTask_SendGoal_Event_info();
}

}  // namespace warehouse_pick_place_interfaces


namespace warehouse_pick_place_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteTask_GetResult_Request_goal_id
{
public:
  Init_ExecuteTask_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::warehouse_pick_place_interfaces::action::ExecuteTask_GetResult_Request goal_id(::warehouse_pick_place_interfaces::action::ExecuteTask_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_pick_place_interfaces::action::ExecuteTask_GetResult_Request>()
{
  return warehouse_pick_place_interfaces::action::builder::Init_ExecuteTask_GetResult_Request_goal_id();
}

}  // namespace warehouse_pick_place_interfaces


namespace warehouse_pick_place_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteTask_GetResult_Response_result
{
public:
  explicit Init_ExecuteTask_GetResult_Response_result(::warehouse_pick_place_interfaces::action::ExecuteTask_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::warehouse_pick_place_interfaces::action::ExecuteTask_GetResult_Response result(::warehouse_pick_place_interfaces::action::ExecuteTask_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_GetResult_Response msg_;
};

class Init_ExecuteTask_GetResult_Response_status
{
public:
  Init_ExecuteTask_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTask_GetResult_Response_result status(::warehouse_pick_place_interfaces::action::ExecuteTask_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ExecuteTask_GetResult_Response_result(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_pick_place_interfaces::action::ExecuteTask_GetResult_Response>()
{
  return warehouse_pick_place_interfaces::action::builder::Init_ExecuteTask_GetResult_Response_status();
}

}  // namespace warehouse_pick_place_interfaces


namespace warehouse_pick_place_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteTask_GetResult_Event_response
{
public:
  explicit Init_ExecuteTask_GetResult_Event_response(::warehouse_pick_place_interfaces::action::ExecuteTask_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::warehouse_pick_place_interfaces::action::ExecuteTask_GetResult_Event response(::warehouse_pick_place_interfaces::action::ExecuteTask_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_GetResult_Event msg_;
};

class Init_ExecuteTask_GetResult_Event_request
{
public:
  explicit Init_ExecuteTask_GetResult_Event_request(::warehouse_pick_place_interfaces::action::ExecuteTask_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_ExecuteTask_GetResult_Event_response request(::warehouse_pick_place_interfaces::action::ExecuteTask_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExecuteTask_GetResult_Event_response(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_GetResult_Event msg_;
};

class Init_ExecuteTask_GetResult_Event_info
{
public:
  Init_ExecuteTask_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTask_GetResult_Event_request info(::warehouse_pick_place_interfaces::action::ExecuteTask_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExecuteTask_GetResult_Event_request(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_pick_place_interfaces::action::ExecuteTask_GetResult_Event>()
{
  return warehouse_pick_place_interfaces::action::builder::Init_ExecuteTask_GetResult_Event_info();
}

}  // namespace warehouse_pick_place_interfaces


namespace warehouse_pick_place_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteTask_FeedbackMessage_feedback
{
public:
  explicit Init_ExecuteTask_FeedbackMessage_feedback(::warehouse_pick_place_interfaces::action::ExecuteTask_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::warehouse_pick_place_interfaces::action::ExecuteTask_FeedbackMessage feedback(::warehouse_pick_place_interfaces::action::ExecuteTask_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_FeedbackMessage msg_;
};

class Init_ExecuteTask_FeedbackMessage_goal_id
{
public:
  Init_ExecuteTask_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTask_FeedbackMessage_feedback goal_id(::warehouse_pick_place_interfaces::action::ExecuteTask_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteTask_FeedbackMessage_feedback(msg_);
  }

private:
  ::warehouse_pick_place_interfaces::action::ExecuteTask_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_pick_place_interfaces::action::ExecuteTask_FeedbackMessage>()
{
  return warehouse_pick_place_interfaces::action::builder::Init_ExecuteTask_FeedbackMessage_goal_id();
}

}  // namespace warehouse_pick_place_interfaces

#endif  // WAREHOUSE_PICK_PLACE_INTERFACES__ACTION__DETAIL__EXECUTE_TASK__BUILDER_HPP_
