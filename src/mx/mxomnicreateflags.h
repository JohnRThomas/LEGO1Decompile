#ifndef MXOMNICREATEFLAGS_H
#define MXOMNICREATEFLAGS_H

class MxOmniCreateFlags {
public:
    __declspec(dllexport) MxOmniCreateFlags();

    operator unsigned short&();

private:
    unsigned short flags_;
};

#endif // MXOMNICREATEFLAGS_H
