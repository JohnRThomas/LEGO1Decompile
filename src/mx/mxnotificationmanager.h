#ifndef MXNOTIFICATIONMANAGER_H
#define MXNOTIFICATIONMANAGER_H

#include "mxcore.h"
#include "mxcriticalsection.h"

class MxStreamer;

/**
 * @brief The MxNotificationManagerUnknown class
 *
 * 0xC bytes in size
 */
class MxNotificationManagerUnknown {
public:
    int unk0_;
    int unk4_;
    int unk8_;
};

/**
 * @brief The MxNotificationManager class
 *
 * 0x40 bytes in size
 */
class MxNotificationManager : public MxCore {
public:
    MxNotificationManager();

    void sub_100ACD20(MxStreamer* streamer);

private:
    int unk8_;
    int unkC_;

    MxCriticalSection critical_section_;

    int unk2C_;
    unsigned char unk30_;
    MxNotificationManagerUnknown* unk34_;
    int unk38_;
    unsigned char unk3C_;
};

#endif // MXNOTIFICATIONMANAGER_H
