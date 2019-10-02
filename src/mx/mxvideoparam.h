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

    const int& x() const;
    const int& y() const;
    const int& width() const;
    const int& height() const;

private:
    // +0
    int x_;

    // +4
    int y_;

    // +8
    int width_;

    // +C
    int height_;

    // +10
    MxPalette* palette_;

    // +14
    unsigned long unknown1_;

    // +18
    MxVideoParamFlags flags_;

    // +1C
    int unknown2_;

    // +20
    char* device_name_;
};

#endif // MXVIDEOPARAM_H
