#include "mxomnicreateparam.h"

#include "custom/debug.h"

MxOmniCreateParam::MxOmniCreateParam(const char* str, struct HWND__ *handle, MxVideoParam & vparams, MxOmniCreateFlags flags)
{
  PERFECT;

  unknown1_ = str;

  window_handle_ = handle;

  video_params_ = vparams;

  flags_ = flags;
}

MxOmniCreateParamBase::~MxOmniCreateParamBase()
{
  STUB;
}
