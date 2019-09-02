#include "mxtimer.h"

#include <windows.h>

#include "custom/debug.h"

MxTimer::MxTimer()
{
    FIXME("Stub");
}

long MxTimer::GetRealTime()
{
    // FIXME: Original seems to store the result of timeGetTime() in a static variable for some reason

    return timeGetTime() - start_time_;
}

MxTimer* Timer()
{
    FIXME("Stub");

    return nullptr;
}
