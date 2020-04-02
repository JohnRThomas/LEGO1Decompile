#include "mxnotificationmanager.h"

#include "mxomni.h"
#include "mxstreamer.h"

MxNotificationManager::MxNotificationManager() :
  unk30_(0x10)
{
  NEARPERFECT;

  unk2C_ = 0;
  unk8_ = NULL;
  unk3C_ = 1;
  unkC_ = 0;
}

MxResult MxNotificationManager::sub_100AC600(int, int)
{
  NEARPERFECT;

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
  IMPERFECT;

  AUTOLOCK(&critical_section_);

  MxNotificationManagerUnknown1* edi = unk30_.root_;

  unsigned int core_id = core->id();

  MxNotificationManagerUnknown1* eax2 = edi->next_;

  if (eax2 != edi) {
    do {
      if (eax2->id_ == core_id) {
        break;
      }

      eax2 = eax2->next_;
    } while (edi != eax2);

    if (eax2 != edi) {
      return;
    }
  }

  MxNotificationManagerUnknown1* ebx = edi->previous_;

  eax2 = new MxNotificationManagerUnknown1();

  if (ebx) {
    eax2->next_ = edi;
    eax2->previous_ = ebx;
  } else {
    eax2->next_ = eax2;
    eax2->previous_ = eax2;
  }

  edi->previous_ = eax2;

  MxNotificationManagerUnknown1* ecx2 = eax2->previous_;
  ecx2->next_ = eax2;

  // This was the solution to the weird `add eax, 8` then `je` asm
  unsigned int* id = &eax2->id_;
  if (id) {
    *id = core_id;
  }

  unk30_.count_++;
}
