#include "mx/mxcore.h"

enum NotificationId
{

};

class LegoInputManager {
public:
    __declspec(dllexport) LegoInputManager();

    __declspec(dllexport) void Register(MxCore*);
    __declspec(dllexport) void UnRegister(MxCore*);

    __declspec(dllexport) void QueueEvent(NotificationId, unsigned char, long, long, unsigned char);
};

__declspec(dllexport) LegoInputManager* InputManager();
