#ifndef LEGOSOUNDMANAGER_H
#define LEGOSOUNDMANAGER_H

#include "mx/mxsoundmanager.h"

/**
 * @brief Lego Sound Manager
 *
 * This class is 0x44 bytes in size, stored in MxOmni+30, usually allocated at ****2AC8.
 */
class LegoSoundManager : public MxSoundManager {
public:
    LegoSoundManager();

private:
    char unk_[0x3C];
};

#endif // LEGOSOUNDMANAGER_H
