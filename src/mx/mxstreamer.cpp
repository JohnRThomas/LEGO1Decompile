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
  NEARPERFECT;

  int eax = unk14_.unk4_;

  int edx = eax + eax * 4;
  eax = eax + edx * 2;

  eax *= 2048;

  char* eax2 = new char[eax];

  unk14_.unk0_ = eax2;

  if (eax2) {
    eax = unk20_.unk4_;

    eax *= 2048;

    eax2 = new char[eax];

    unk20_.unk0_ = eax2;

    if (eax2) {
      return SUCCESS;
    }
  }

  return FAILURE;
}

MxStreamer* Streamer()
{
  STUB;

  return NULL;
}
