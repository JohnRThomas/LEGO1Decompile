#include "mxpalette.h"
#include "mxrect32.h"
#include "mxvideoparamflags.h"

class MxVideoParam {
public:
    __declspec(dllexport) MxVideoParam();
    __declspec(dllexport) MxVideoParam(MxRect32&, MxPalette*, unsigned long, MxVideoParamFlags&);
    __declspec(dllexport) MxVideoParam(MxVideoParam&);
    __declspec(dllexport) ~MxVideoParam();

    __declspec(dllexport) MxVideoParam& operator=(const MxVideoParam&);

    __declspec(dllexport) void SetDeviceName(char*);

};
