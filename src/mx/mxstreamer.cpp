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

MxResult MxStreamer::sub_100B9190()
{
  PERFECT;

  if ((unk14_.unk0_ = new char[unk14_.unk4_ * 11 * 2048])
      && (unk20_.unk0_ = new char[unk20_.unk4_ * 2048])) {
    return SUCCESS;
  }

  return FAILURE;
}

MxStreamer* Streamer()
{
  STUB;

  return NULL;
}
