#include "mxstreamer.h"

#include "custom/debug.h"

MxStreamer::MxStreamer()
{
    ALERT("Stub");
}

MxStreamController* MxStreamer::Open(const char*, unsigned short)
{
    ALERT("Stub");

    return nullptr;
}

long MxStreamer::Close(const char*)
{
    ALERT("Stub");

    return 0;
}

MxStreamer* Streamer()
{
    ALERT("Stub");

    return nullptr;
}
