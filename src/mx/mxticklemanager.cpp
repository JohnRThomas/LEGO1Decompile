#include "mxticklemanager.h"

#include "custom/debug.h"

MxTickleManager::~MxTickleManager()
{
  PARTIAL;
  delete unknown0C_;
}

void MxTickleManager::vtable8()
{
  STUB;
}

void MxTickleManager::vtableC()
{
  STUB;
}

void MxTickleManager::vtable10()
{
  STUB;
}

void MxTickleManager::vtable18()
{
  STUB;
}

void MxTickleManager::vtable1C()
{
  STUB;
}

unsigned int MxTickleManager::vtable20(MxNotificationManager* punk1)
{
  IMPERFECT; // but I can't see any explicit functionality differences

  MxTickleUnknownSubclass1* edx = unknown0C_;
  MxTickleUnknownSubclass1* eax = edx->unk00_;

  while (edx != eax) {
    MxTickleUnknownSubclass2* eax2 = eax->unk08_;

    if (eax2->unk0_ == punk1 && eax2->unkC_ == 1) {
      return eax2->unk4_;
    }

    eax = eax->unk00_;
  }

  return 0x80000000;
}

MxTickleUnknownSubclass2::MxTickleUnknownSubclass2(MxNotificationManager* punk1, int punk2)
{
  PERFECT;

  unkC_ = 0;

  unk0_ = punk1;
  unk4_ = punk2;

  unk8_ = -punk2;
}

MxTickleUnknownSubclass2::~MxTickleUnknownSubclass2()
{
  STUB;
}

void MxTickleManager::sub_100BDE80(MxNotificationManager* punk1, int punk2)
{
  NEARPERFECT;

  if (vtable20(punk1) == 0x80000000) {
    MxTickleUnknownSubclass2* ebp_14 = new MxTickleUnknownSubclass2(punk1, punk2);

    if (ebp_14) {
      MxTickleUnknownSubclass1* ebp_10 = unknown0C_;
      MxTickleUnknownSubclass1** edi = &ebp_10->unk04_;
      MxTickleUnknownSubclass1* ebx = *edi;

      MxTickleUnknownSubclass1* eax = new MxTickleUnknownSubclass1();

      if (ebx) {
        eax->unk00_ = ebp_10;
        eax->unk04_ = ebx;
      } else {
        eax->unk00_ = eax;
        eax->unk04_ = eax;
      }

      *edi = eax;

      eax->unk04_->unk00_ = eax;

      MxTickleUnknownSubclass2** eax2 = &eax->unk08_;

      if (eax2) {
        *eax2 = ebp_14;
      }

      unknown10_++;
    }
  }
}
