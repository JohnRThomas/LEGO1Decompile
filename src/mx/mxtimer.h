#ifndef MXTIMER_H
#define MXTIMER_H

#include "mxbool.h"
#include "mxcore.h"

#include <WINDOWS.H>

/**
 * @brief The MxTimer class
 *
 * 0x10 bytes in size
 */
class MxTimer : public MxCore {
public:
  MxTimer();

  long GetRealTime();

  // Start?
  void sub_100AE160();

  // Stop?
  void sub_100AE180();

private:
  // 0x10101414
  static DWORD last_time_calculated_;

  // 0x10101418
  static long timer_time_;

  // +8
  DWORD start_time_;

  // +C
  MxBool running_;
};

#endif // MXTIMER_H
