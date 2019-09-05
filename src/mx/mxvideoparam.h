#ifndef MXVIDEOPARAM_H
#define MXVIDEOPARAM_H

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

private:
    int x_;
    int y_;
    int width_;
    int height_;

    MxPalette* palette_;

    // FIXME: Unknown variables
    int unknown1_;

    // FIXME: Should be MxVideoParamFlags rather than int
    MxVideoParamFlags flags_;

    // FIXME: Unknown variables
    int unknown2_;

    char* device_name_;
};

#endif // MXVIDEOPARAM_H
