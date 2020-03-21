#include "mxticklemanager.h"

#include "custom/debug.h"

MxTickleManager::~MxTickleManager()
{
  ALERT("MxTickleManager::~MxTickleManager()", "Stub");
  delete unknown0C_;
}

void MxTickleManager::vtable8()
{
  ALERT("void MxTickleManager::vtable8()", "Stub");
}

void MxTickleManager::vtableC()
{
  ALERT("void MxTickleManager::vtableC()", "Stub");
}

void MxTickleManager::vtable10()
{
  ALERT("void MxTickleManager::vtable10()", "Stub");
}

void MxTickleManager::vtable18()
{
  ALERT("void MxTickleManager::vtable18()", "Stub");
}

void MxTickleManager::vtable1C()
{
  ALERT("void MxTickleManager::vtable1C()", "Stub");
}

unsigned int MxTickleManager::vtable20(MxNotificationManager* punk1)
{
  ALERT("void MxTickleManager::vtable20()", "Stub");
  return 0;
}

MxTickleUnknownSubclass2::MxTickleUnknownSubclass2(MxNotificationManager* punk1, int punk2) {
  unkC_ = 0;

  unk0_ = punk1;
  unk4_ = punk2;

  unk8_ = -punk2;
}

MxTickleUnknownSubclass2::~MxTickleUnknownSubclass2() {
  ALERT("MxTickleManagerSub1::~MxTickleManagerSub1()", "Stub");
}

void MxTickleManager::sub_100BDE80(MxNotificationManager* punk1, int punk2)
{
  // 99%

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
