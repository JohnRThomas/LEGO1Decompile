#include "mxticklemanager.h"

#include "custom/debug.h"

MxTickleManager::MxTickleManager()
{
}

MxTickleManager::~MxTickleManager()
{
  ALERT("MxTickleManager::~MxTickleManager()", "Stub");
  delete unknown0C_;
}

MxResult MxTickleManager::Create(unsigned char u)
{
  ALERT("MxTickleManager::Create()", "Stub");

  unknown08_ = u;
  unknown0C_ = new MxTickleUnknownSubclass1();
  unknown10_ = 0;

  return SUCCESS;
}

void MxTickleManager::vtable4()
{
  ALERT("void MxTickleManager::vtable4()", "Stub");
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

void MxTickleManager::vtable14()
{
  ALERT("void MxTickleManager::vtable14()", "Stub");
}

void MxTickleManager::vtable18()
{
  ALERT("void MxTickleManager::vtable18()", "Stub");
}

void MxTickleManager::sub_100BDE80(MxNotificationManager *, int)
{
  ALERT("void MxTickleManager::sub_100BDE80(MxNotificationManager *, int)", "Stub");
}

MxTickleUnknownSubclass1::MxTickleUnknownSubclass1()
{
  ALERT("MxTickleUnknownSubclass1::MxTickleUnknownSubclass1()", "Stub");
}
