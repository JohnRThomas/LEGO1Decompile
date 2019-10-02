#ifndef LEGOINPUTMANAGER_H
#define LEGOINPUTMANAGER_H

#include "mx/mxcore.h"

enum NotificationId
{

};

/**
 * @brief The LegoInputManager class
 *
 * 0x338 bytes in size.
 */
class LegoInputManager {
public:
    __declspec(dllexport) LegoInputManager();

    __declspec(dllexport) void Register(MxCore*);
    __declspec(dllexport) void UnRegister(MxCore*);

    __declspec(dllexport) void QueueEvent(NotificationId, unsigned char, long, long, unsigned char);

};

#endif // LEGOINPUTMANAGER_H
