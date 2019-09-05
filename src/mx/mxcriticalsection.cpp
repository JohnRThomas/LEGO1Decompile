#include "mxcriticalsection.h"

#include "custom/debug.h"

MxCriticalSection::MxCriticalSection()
{
    // FIXME: Find what this address actually is...
    DWORD addr_0x10101E78 = 1;

    if (addr_0x10101E78 == 0)
    {
        mutex_ = CreateMutexA(0, 0, 0);
    } else {
        InitializeCriticalSection(&critical_section_);

        mutex_ = nullptr;
    }
}

MxCriticalSection::~MxCriticalSection()
{
    if (mutex_ != nullptr) {
        CloseHandle(mutex_);
    } else {
        DeleteCriticalSection(&critical_section_);
    }
}
