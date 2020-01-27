#include "mxticklemanager.h"

#include "custom/debug.h"

MxTickleManager::MxTickleManager(unsigned char u) :
  unknown08_(u),
  unknown0C_(new MxTickleUnknownSubclass1()),
  unknown10_(0)
{
  ALERT("MxTickleManager::MxTickleManager(unsigned char u)", "Stub");
}

MxTickleManager::~MxTickleManager()
{
  ALERT("MxTickleManager::~MxTickleManager()", "Stub");
  delete unknown0C_;
}

void MxTickleManager::unk_func1()
{
  ALERT("void MxTickleManager::unk_func1()", "Stub");
}

void MxTickleManager::unk_func2()
{
  ALERT("void MxTickleManager::unk_func2()", "Stub");
}

void MxTickleManager::unk_func3()
{
  ALERT("void MxTickleManager::unk_func3()", "Stub");
}

void MxTickleManager::unk_func4()
{
  ALERT("void MxTickleManager::unk_func4()", "Stub");
}

void MxTickleManager::unk_func5()
{
  ALERT("void MxTickleManager::unk_func5()", "Stub");
}

void MxTickleManager::unk_func6()
{
  ALERT("void MxTickleManager::unk_func6()", "Stub");
}

void MxTickleManager::sub_100BDE80(MxNotificationManager *, int)
{
  ALERT("void MxTickleManager::sub_100BDE80(MxNotificationManager *, int)", "Stub");
}

MxTickleUnknownSubclass1::MxTickleUnknownSubclass1()
{
  ALERT("MxTickleUnknownSubclass1::MxTickleUnknownSubclass1()", "Stub");
}

MxTickleUnknownSubclass1::~MxTickleUnknownSubclass1()
{
  ALERT("MxTickleUnknownSubclass1::~MxTickleUnknownSubclass1()", "Stub");
}
