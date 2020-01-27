#ifndef MXOMNICREATEFLAGS_H
#define MXOMNICREATEFLAGS_H

class MxOmniCreateFlags {
public:
    enum Flags {
        CreateObjectFactory = 0x1,
        CreateVariableTable = 0x2,
        CreateTickleManager = 0x4,
        CreateNotificationManager = 0x8,
        CreateVideoManager = 0x10,
        CreateSoundManager = 0x20,
        CreateMxUnknownManager3 = 0x40,
        CreateMxUnknownManager4 = 0x80,
        // 0x100 - never seems to be used,
        CreateTimer = 0x200,
        CreateStreamer = 0x400,

    };

    MxOmniCreateFlags();

    operator unsigned short&();

private:
    unsigned short flags_;
};

#endif // MXOMNICREATEFLAGS_H
