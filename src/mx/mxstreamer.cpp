#include "mxstreamer.h"

#include "custom/debug.h"
#include "mxomni.h"

MxStreamer::MxStreamer() :
    unk8_(0x10),
    unkC_(new MxStreamerUnknown()),
    unk10_(0),
    unk14_(0),
    unk18_(0x40),
    unk20_(0),
    unk24_(0x80),
    unk28_(0)
{
    NotificationManager()->sub_100ACD20(this);
}

MxStreamController* MxStreamer::Open(const char*, unsigned short)
{
    ALERT("Stub")

    return nullptr;
}

long MxStreamer::Close(const char*)
{
    ALERT("Stub")

    return 0;
}

MxStreamer* Streamer()
{
    ALERT("Stub")

    return nullptr;
}
