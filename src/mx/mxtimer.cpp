#include "mxtimer.h"

#include "custom/debug.h"

DWORD MxTimer::last_time_calculated_ = 0;

long MxTimer::timer_time_ = 0;

MxTimer::MxTimer()
{
  running_ = FALSE;
  start_time_ = timeGetTime();
  last_time_calculated_ = start_time_;
}

long MxTimer::GetRealTime()
{
  PARTIAL;
  last_time_calculated_ = timeGetTime();

  return static_cast<long>(last_time_calculated_ - start_time_);
}

void MxTimer::sub_100AE160()
{
  PARTIAL;
  timer_time_ = GetRealTime();
  running_ = TRUE;
}

void MxTimer::sub_100AE180()
{
  PARTIAL;
  long now = GetRealTime();

  now -= timer_time_;
  now -= 0x5;
  start_time_ += static_cast<DWORD>(now);

  running_ = FALSE;
}
