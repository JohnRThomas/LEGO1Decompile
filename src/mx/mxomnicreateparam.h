#ifndef MXOMNICREATEPARAM_H
#define MXOMNICREATEPARAM_H

#include <Windows.h>

#include "mxomnicreateflags.h"
#include "mxvideoparam.h"

class MxOmniCreateParam {
public:
    __declspec(dllexport) MxOmniCreateParam(const char *, HWND__ *, MxVideoParam &, MxOmniCreateFlags);
};

#endif // MXOMNICREATEPARAM_H
