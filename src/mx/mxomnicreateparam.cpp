#include "mxomnicreateparam.h"

#include "custom/debug.h"

MxOmniCreateParam::MxOmniCreateParam(const char* str, HWND__* handle, MxVideoParam & vparams, MxOmniCreateFlags flags)
{
    unknown1_ = str;

    window_handle_ = handle;

    video_params_ = vparams;

    flags_ = flags;
}

HWND__ *MxOmniCreateParam::window_handle()
{
    return window_handle_;
}

const MxString &MxOmniCreateParam::unknown1()
{
    return unknown1_;
}

MxOmniCreateFlags &MxOmniCreateParam::flags()
{
    return flags_;
}

const MxVideoParam &MxOmniCreateParam::video_params()
{
    return video_params_;
}
