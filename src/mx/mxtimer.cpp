#include "mxtimer.h"

#include <windows.h>

#include "custom/debug.h"

int MxTimer::last_time_calculated_; // FIXME: Default value?

MxTimer::MxTimer()
{
    FIXME("Stub");
}

long MxTimer::GetRealTime()
{
    last_time_calculated_ = timeGetTime();

    return last_time_calculated_ - start_time_;
}

MxTimer* Timer()
{
    FIXME("Stub");

    return nullptr;
}