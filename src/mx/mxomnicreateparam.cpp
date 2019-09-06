#include "mxomnicreateparam.h"

#include "custom/debug.h"

MxOmniCreateParam::MxOmniCreateParam(const char* str, HWND__* handle, MxVideoParam & vparams, MxOmniCreateFlags flags)
{
    // FIXME: Original code uses an MxString function for this somehow
    int str_length = strlen(str)+1;
    unknown1_.string_ = new char[str_length];
    strcpy_s(unknown1_.string_, str_length, str);

    window_handle_ = handle;

    video_params_ = vparams;

    flags_ = flags;
}
