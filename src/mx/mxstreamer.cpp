#include "mxstreamer.h"

#include "mxomni.h"

MxStreamer::MxStreamer() :
  unk14_(0x40),
  unk20_(0x80)
{
  IMPERFECT;

  NotificationManager()->sub_100ACD20(this);
}

MxStreamController* MxStreamer::Open(const char*, unsigned short)
{
  STUB;

  return NULL;
}

long MxStreamer::Close(const char*)
{
  STUB;

  return 0;
}

MxStreamer* Streamer()
{
  STUB;

  return NULL;
}
