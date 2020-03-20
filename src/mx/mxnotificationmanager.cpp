#include "mxnotificationmanager.h"

#include "mxomni.h"
#include "mxstreamer.h"

MxNotificationManager::MxNotificationManager() :
  unk30_(0x10)
{
  // 99%, it appears our code is perfect but the asm differs very slightly because we're not using smartheap

  unk2C_ = 0;
  unk8_ = NULL;
  unk3C_ = 1;
  unkC_ = 0;
}

MxResult MxNotificationManager::sub_100AC600(int, int)
{
  // 99%

  unk8_ = new MAMU1Wrapper(0);

  if (!unk8_) {
    return FAILURE;
  }

  // Virtual
  TickleManager()->sub_100BDE80(this, 0xA);

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
