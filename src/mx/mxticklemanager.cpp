#include "mxticklemanager.h"

#include "custom/debug.h"

MxTickleManager::MxTickleManager(unsigned char u) :
    unknown08_(u),
    unknown0C_(new MxTickleUnknownSubclass1()),
    unknown10_(0)
{
}

MxTickleManager::~MxTickleManager()
{
    delete unknown0C_;
}

void MxTickleManager::unk_func1()
{
    ALERT("Stub")
}

void MxTickleManager::unk_func2()
{
    ALERT("Stub")
}

void MxTickleManager::unk_func3()
{
    ALERT("Stub")
}

void MxTickleManager::unk_func4()
{
    ALERT("Stub")
}

void MxTickleManager::unk_func5()
{
    ALERT("Stub")
}

void MxTickleManager::unk_func6()
{
    ALERT("Stub")
}

MxTickleUnknownSubclass1::MxTickleUnknownSubclass1()
{
}

MxTickleUnknownSubclass1::~MxTickleUnknownSubclass1()
{
}
