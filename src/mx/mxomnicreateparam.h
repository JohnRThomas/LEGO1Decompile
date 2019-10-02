#ifndef MXOMNICREATEPARAM_H
#define MXOMNICREATEPARAM_H

#include <windows.h>

#include "mxomni.h"
#include "mxomnicreateflags.h"
#include "mxvideoparam.h"

class MxOmniCreateParam {
public:
    __declspec(dllexport) MxOmniCreateParam(const char *, HWND__* handle, MxVideoParam &, MxOmniCreateFlags);

private:
    // FIXME: vtable? this class must have virtual functions...
    int unknown0_;

    // +4
    MxString unknown1_;

    // +10
    int unknown4_;

    // +14
    HWND__ * window_handle_;

    // +18
    MxVideoParam video_params_;

    // +3C
    MxOmniCreateFlags flags_;


};

#endif // MXOMNICREATEPARAM_H
