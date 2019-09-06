#include "mxomnicreateparam.h"

#include "custom/debug.h"

MxOmniCreateParam::MxOmniCreateParam(const char* str, HWND__* handle, MxVideoParam & vparams, MxOmniCreateFlags flags)
{
    // FIXME: Wrap this functionality up in an MxString
    int str_length = strlen(str)+1;
    unknown1_.unknown1_ = new char[str_length];
    strcpy_s(unknown1_.unknown1_, str_length, str);

    window_handle_ = handle;

    video_params_ = vparams;

    flags_ = flags;
}
