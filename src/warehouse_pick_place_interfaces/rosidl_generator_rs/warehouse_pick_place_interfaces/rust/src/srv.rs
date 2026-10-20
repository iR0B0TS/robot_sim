#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to warehouse_pick_place_interfaces__srv__SetBoxAttached_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetBoxAttached_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub box_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub attached: bool,

}



impl Default for SetBoxAttached_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetBoxAttached_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetBoxAttached_Request {
  type RmwMsg = super::srv::rmw::SetBoxAttached_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        box_name: msg.box_name.as_str().into(),
        attached: msg.attached,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        box_name: msg.box_name.as_str().into(),
      attached: msg.attached,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      box_name: msg.box_name.to_string(),
      attached: msg.attached,
    }
  }
}


// Corresponds to warehouse_pick_place_interfaces__srv__SetBoxAttached_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetBoxAttached_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SetBoxAttached_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetBoxAttached_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetBoxAttached_Response {
  type RmwMsg = super::srv::rmw::SetBoxAttached_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to warehouse_pick_place_interfaces__srv__DetectBoxes_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetectBoxes_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for DetectBoxes_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::DetectBoxes_Request::default())
  }
}

impl rosidl_runtime_rs::Message for DetectBoxes_Request {
  type RmwMsg = super::srv::rmw::DetectBoxes_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to warehouse_pick_place_interfaces__srv__DetectBoxes_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetectBoxes_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub boxes: Vec<super::msg::BoxPose>,

}



impl Default for DetectBoxes_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::DetectBoxes_Response::default())
  }
}

impl rosidl_runtime_rs::Message for DetectBoxes_Response {
  type RmwMsg = super::srv::rmw::DetectBoxes_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        boxes: msg.boxes
          .into_iter()
          .map(|elem| super::msg::BoxPose::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        boxes: msg.boxes
          .iter()
          .map(|elem| super::msg::BoxPose::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      boxes: msg.boxes
          .into_iter()
          .map(super::msg::BoxPose::from_rmw_message)
          .collect(),
    }
  }
}






#[link(name = "warehouse_pick_place_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__warehouse_pick_place_interfaces__srv__SetBoxAttached() -> *const std::ffi::c_void;
}

// Corresponds to warehouse_pick_place_interfaces__srv__SetBoxAttached
#[allow(missing_docs, non_camel_case_types)]
pub struct SetBoxAttached;

impl rosidl_runtime_rs::Service for SetBoxAttached {
    type Request = SetBoxAttached_Request;
    type Response = SetBoxAttached_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__warehouse_pick_place_interfaces__srv__SetBoxAttached() }
    }
}




#[link(name = "warehouse_pick_place_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__warehouse_pick_place_interfaces__srv__DetectBoxes() -> *const std::ffi::c_void;
}

// Corresponds to warehouse_pick_place_interfaces__srv__DetectBoxes
#[allow(missing_docs, non_camel_case_types)]
pub struct DetectBoxes;

impl rosidl_runtime_rs::Service for DetectBoxes {
    type Request = DetectBoxes_Request;
    type Response = DetectBoxes_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__warehouse_pick_place_interfaces__srv__DetectBoxes() }
    }
}


