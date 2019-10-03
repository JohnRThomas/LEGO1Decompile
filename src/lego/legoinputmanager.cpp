#include "legoinputmanager.h"

#include "custom/debug.h"

LegoInputManager::LegoInputManager() :
    unk5C_(0),
    unk60_(0),
    unk64_(0),
    unk68_(0),
    unk6C_(0),
    unk70_(0),
    unk74_(0x19),
    unk78_(0),
    unk7C_(0x3E8),
    unk80_(0),
    unk81_(0),
    unk84_(0),
    unk88_(0),
    unk8C_(0),
    unk90_(0),
    unk194_(0), // ASM actually asks for char at +195
    unk198_(0),
    unk19C_(0),
    unk334_(0) // ASM actually asks for chars at +334, +335, and +336
{
}

void LegoInputManager::Register(MxCore*)
{
    ALERT("Stub")
}

void LegoInputManager::UnRegister(MxCore*)
{
    ALERT("Stub")
}


void LegoInputManager::QueueEvent(NotificationId, unsigned char, long, long, unsigned char)
{
    ALERT("Stub")
}
