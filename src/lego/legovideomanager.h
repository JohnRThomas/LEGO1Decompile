#ifndef LEGOVIDEOMANAGER_H
#define LEGOVIDEOMANAGER_H

#include "mx/mxvideomanager.h"

/**
 * @brief The LegoVideoManager class
 *
 * This class is 0x590 bytes in size, accessible at MxOmni+2C, allocated at ****2558
 */
class LegoVideoManager : public MxVideoManager {
public:
    __declspec(dllexport) LegoVideoManager();

    __declspec(dllexport) void MoveCursor(int x, int y);
    __declspec(dllexport) void EnableFullScreenMovie(unsigned char, unsigned char);

    __declspec(dllexport) int EnableRMDevice();
    __declspec(dllexport) int DisableRMDevice();

private:
    int unk64_;
    int unk68_;
    int unk6C_;
    int unk70_;
    int unk74_;

    int unk78_[0x1B];

    int unkE4_;
    int unkE8_;
    int unkEC_;

    char unkF0_[0x3F8];

    int unk4E8_;
    int unk4EC_;
    int unk4F0_;
    int unk4F4_;
    int unk4F8_;
    int unk4FC_;
    int unk500_;
    int unk504_;
    int unk508_;
    int unk50C_;
    int unk510_;
    int unk514_;
    int unk518_;
    int unk51C_;
    int unk520_;
    int unk524_;
    int unk528_;
    int unk52C_;
    int unk530_;
    int unk534_;
    int unk538_;
    int unk53C_;
    int unk540_;
    int unk544_;
    int unk548_;
    int unk54C_;
    int unk550_;
    int unk554_;
    int unk558_;
    int unk55C_;

    int unk560_[0xC];
};

#endif // LEGOVIDEOMANAGER_H
