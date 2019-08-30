#include <Windows.h>

#include "mxomnicreateflags.h"
#include "mxvideoparam.h"

class MxOmniCreateParam {
public:
    __declspec(dllexport) MxOmniCreateParam(char const *, HWND__ *, MxVideoParam &, MxOmniCreateFlags);
};
