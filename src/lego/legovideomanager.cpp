#include "legovideomanager.h"

#include "custom/debug.h"

LegoVideoManager::LegoVideoManager()
{
    ALERT("Stub\n\nSize of LegoVideoManager: %x", sizeof(LegoVideoManager))
}

void LegoVideoManager::MoveCursor(int /*x*/, int /*y*/)
{
    ALERT("Stub")
}

void LegoVideoManager::EnableFullScreenMovie(unsigned char, unsigned char)
{
    ALERT("Stub")
}

int LegoVideoManager::EnableRMDevice()
{
    ALERT("Stub")

    return 0;
}

int LegoVideoManager::DisableRMDevice()
{
    ALERT("Stub")

    return 0;
}
