#ifndef MXTIMER_H
#define MXTIMER_H

#include <Windows.h>

#include "mxcore.h"

/**
 * @brief The MxTimer class
 *
 * 0x10 bytes in size
 */
class MxTimer : public MxCore {
public:
    __declspec(dllexport) MxTimer();

    __declspec(dllexport) long GetRealTime();

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
    BOOL running_;
};

#endif // MXTIMER_H
