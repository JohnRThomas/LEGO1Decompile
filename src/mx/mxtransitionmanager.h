#ifndef MXTRANSITIONMANAGER_H
#define MXTRANSITIONMANAGER_H

#include "mxvideopresenter.h"

/**
 * @brief The MxTransitionManager class
 *
 * 0x900 bytes in size.
 * Accessible at LegoOmni+138
 * Alloc'd at 06552F48
 */
class MxTransitionManager {
public:
    __declspec(dllexport) MxTransitionManager();

    __declspec(dllexport) void SetWaitIndicator(MxVideoPresenter*);

private:
    char unk_[0x900];
};

__declspec(dllexport) MxTransitionManager* TransitionManager();

#endif // MXTRANSITIONMANAGER_H
