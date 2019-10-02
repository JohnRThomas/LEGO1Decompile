#ifndef MXVIDEOPARAMFLAGS_H
#define MXVIDEOPARAMFLAGS_H

class MxVideoParamFlags {
public:
    __declspec(dllexport) MxVideoParamFlags();

    operator unsigned short&();

private:
    unsigned short flags_;
};

#endif // MXVIDEOPARAMFLAGS_H
