#ifndef MXTRANSITIONMANAGER_H
#define MXTRANSITIONMANAGER_H

#include "mxvideopresenter.h"

class MxTransitionManager {
public:
    __declspec(dllexport) MxTransitionManager();

    __declspec(dllexport) void SetWaitIndicator(MxVideoPresenter*);
};

__declspec(dllexport) MxTransitionManager* TransitionManager();

#endif // MXTRANSITIONMANAGER_H
