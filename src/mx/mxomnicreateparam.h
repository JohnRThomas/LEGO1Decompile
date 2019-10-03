#ifndef MXOMNICREATEPARAM_H
#define MXOMNICREATEPARAM_H

#include <Windows.h>

#include "mxomnicreateflags.h"
#include "mxstring.h"
#include "mxvideoparam.h"

/**
 * @brief The MxOmniCreateParam class
 *
 * Usually alloc at 0019FCAC
 */
class MxOmniCreateParam {
public:
    __declspec(dllexport) MxOmniCreateParam(const char *, HWND__* handle, MxVideoParam &, MxOmniCreateFlags);

    HWND__ * window_handle();

    const MxVideoParam& video_params();

    MxOmniCreateFlags& flags();

private:
    // FIXME: vtable? this class must have virtual functions...
    int unknown0_;

    // +4
    MxString unknown1_;

    // +14
    HWND__ * window_handle_;

    // +18
    MxVideoParam video_params_;

    // +3C
    MxOmniCreateFlags flags_;


};

#endif // MXOMNICREATEPARAM_H
