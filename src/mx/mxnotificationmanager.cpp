#include "mxnotificationmanager.h"

#include "custom/debug.h"
#include "mxstreamer.h"

MxNotificationManager::MxNotificationManager() :
    unk8_(0),
    unkC_(0),
    unk2C_(0),
    unk30_(0x10),
    unk34_(new MxNotificationManagerUnknown()),
    unk38_(0),
    unk3C_(1)
{
}

void MxNotificationManager::sub_100ACD20(MxStreamer *streamer)
{
    critical_section_.Lock();

    (void)streamer;
    ALERT("Stub")

    critical_section_.Unlock();
}
