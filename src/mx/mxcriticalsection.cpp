#include "mxcriticalsection.h"

#include "custom/debug.h"

bool MxCriticalSection::do_mutex_ = false;

MxCriticalSection::MxCriticalSection()
{
    if (do_mutex_)
    {
        mutex_ = CreateMutexA(nullptr, 0, nullptr);
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

void MxCriticalSection::Lock()
{
    if (mutex_ != nullptr) {
        // 1388 is accurate to the ASM code
        if (WaitForSingleObject(mutex_, 1388) == WAIT_FAILED) {

            // FIXME: This code will never be run because no code ever runs SetDoMutex() to enable mutexes - the game
            //        always uses CRITICALSECTIONs. It may be decompiled for completeness sake but for now is an
            //        extremely low priority and the end result is the same: abort().
            ALERT("Mutex failure is a stub")
            abort();

        }
    } else {
        EnterCriticalSection(&critical_section_);
    }
}

void MxCriticalSection::Unlock()
{
    if (mutex_ != nullptr) {
        ReleaseMutex(mutex_);
    } else {
        LeaveCriticalSection(&critical_section_);
    }
}

void MxCriticalSection::SetDoMutex()
{
    do_mutex_ = true;
}
