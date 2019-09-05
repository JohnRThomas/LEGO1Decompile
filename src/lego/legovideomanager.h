#ifndef LEGOVIDEOMANAGER_H
#define LEGOVIDEOMANAGER_H

class LegoVideoManager {
public:
    __declspec(dllexport) LegoVideoManager();

    __declspec(dllexport) void MoveCursor(int x, int y);
    __declspec(dllexport) void EnableFullScreenMovie(unsigned char, unsigned char);

    __declspec(dllexport) int EnableRMDevice();
    __declspec(dllexport) int DisableRMDevice();
};

__declspec(dllexport) LegoVideoManager* VideoManager();

#endif // LEGOVIDEOMANAGER_H
