#include "mxomnicreateparam.h"

#include "custom/debug.h"

MxOmniCreateParam::MxOmniCreateParam(const char* str, HWND__* handle, MxVideoParam & vparams, MxOmniCreateFlags flags)
{
    unknown1_ = str;

    window_handle_ = handle;

    video_params_ = vparams;

    flags_ = flags;
}
