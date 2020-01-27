#include "mxnotificationmanager.h"

#include "custom/debug.h"
#include "mxomni.h"
#include "mxstreamer.h"

MxNotificationManager::MxNotificationManager() :
    unk8_(NULL),
    unkC_(0),
    unk2C_(0),
    unk30_(0x10),
    unk34_(new MxNotificationManagerUnknown1()),
    unk38_(0),
    unk3C_(1)
{
}

void MxNotificationManager::sub_100AC600(int, int)
{
    MxNotificationManagerUnknown2* ebp_14 = new MxNotificationManagerUnknown2();

    // FIXME: Byte ptr?
    ebp_14->unk0_ = 0;

    MxNotificationManagerUnknown3* mnmu3 = new MxNotificationManagerUnknown3();
    mnmu3->unk0_ = mnmu3;
    mnmu3->unk4_ = mnmu3;

    ebp_14->unk4_ = mnmu3;
    ebp_14->unk8_ = 0;

    unk8_ = ebp_14;

    if (unk8_ != NULL) {
        // Virtual
        TickleManager()->sub_100BDE80(this, 0xA);
    }
}

void MxNotificationManager::sub_100ACD20(MxStreamer *streamer)
{
    critical_section_.Lock();

    int ebp_4 = 0;

    MxNotificationManagerUnknown1* ebp_14 = unk34_;


    critical_section_.Unlock();
}
