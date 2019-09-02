#include <Windows.h>

#include "mxomnicreateflags.h"
#include "mxvideoparam.h"

class MxOmniCreateParam {
public:
    __declspec(dllexport) MxOmniCreateParam(const char *, HWND__ *, MxVideoParam &, MxOmniCreateFlags);
};
