#ifndef MXOMNICREATEPARAM_H
#define MXOMNICREATEPARAM_H

#include <Windows.h>

#include "mxomni.h"
#include "mxomnicreateflags.h"
#include "mxvideoparam.h"

class MxOmniCreateParam {
public:
    __declspec(dllexport) MxOmniCreateParam(const char *, HWND__* handle, MxVideoParam &, MxOmniCreateFlags);

private:
    // FIXME: vtable, this class must be a derivative
    int unknown0_;

    // esi+4
    MxOmniUnknownStruct1 unknown1_;

    int unknown2_;

    // esi+14
    HWND__ * window_handle_;

    // esi+18
    MxVideoParam video_params_;

    // esi+3C
    MxOmniCreateFlags flags_;


};

#endif // MXOMNICREATEPARAM_H
