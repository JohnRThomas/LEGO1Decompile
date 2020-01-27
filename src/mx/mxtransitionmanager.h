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
    MxTransitionManager();

    void SetWaitIndicator(MxVideoPresenter*);

private:
    char unk_[0x900];
};

MxTransitionManager* TransitionManager();

#endif // MXTRANSITIONMANAGER_H
