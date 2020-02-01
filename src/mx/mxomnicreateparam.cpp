#include "mxomnicreateparam.h"

#include "custom/debug.h"

MxOmniCreateParam::MxOmniCreateParam(const char* str, struct HWND__ *handle, MxVideoParam & vparams, MxOmniCreateFlags flags)
{
  unknown1_ = str;

  window_handle_ = handle;

  video_params_ = vparams;

  flags_ = flags;
}

struct HWND__ *MxOmniCreateParam::window_handle()
{
  return window_handle_;
}

const MxString &MxOmniCreateParam::unknown1()
{
  return unknown1_;
}

MxVideoParam &MxOmniCreateParam::video_params()
{
  return video_params_;
}

MxOmniCreateParamBase::~MxOmniCreateParamBase()
{
  ALERT("MxOmniCreateParamBase::~MxOmniCreateParamBase()", "Stub");
}
