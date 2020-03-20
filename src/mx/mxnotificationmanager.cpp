#include "mxnotificationmanager.h"

#include "mxomni.h"
#include "mxstreamer.h"

MxNotificationManager::MxNotificationManager()
{
  // FIXME: Imperfect, it appears our code is perfect but the asm differs very slightly because we're not using smartheap

  unk2C_ = 0;
  unk8_ = NULL;
  unk3C_ = 1;
  unkC_ = 0;
}

MxResult MxNotificationManager::sub_100AC600(int, int)
{
  ALERT("void MxNotificationManager::sub_100AC600(int, int)", "Stub");
  MxNotificationManagerUnknown2* ebp_14 = new MxNotificationManagerUnknown2();

  // FIXME: Byte ptr?
  ebp_14->unk0_ = 0;

  MxNotificationManagerUnknown1* mnmu3 = new MxNotificationManagerUnknown1();
  mnmu3->next_ = mnmu3;
  mnmu3->previous_ = mnmu3;

  ebp_14->unk4_ = mnmu3;
  ebp_14->unk8_ = 0;

  unk8_ = ebp_14;

  if (unk8_ != NULL) {
    // Virtual
    TickleManager()->sub_100BDE80(this, 0xA);
  }

  return SUCCESS;
}

void MxNotificationManager::sub_100ACD20(MxCore *core)
{
  ALERT("void MxNotificationManager::sub_100ACD20(MxStreamer *streamer)", "Stub");
  critical_section_.Lock();

  int ebp_4 = 0;

  //MxNotificationManagerUnknown1* ebp_14 = unk34_;


  critical_section_.Unlock();
}
