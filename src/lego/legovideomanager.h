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
    char unk_[0x588];
};

#endif // LEGOVIDEOMANAGER_H
