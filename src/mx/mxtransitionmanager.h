#include "mxvideopresenter.h"

class MxTransitionManager {
public:
    __declspec(dllexport) MxTransitionManager();

    __declspec(dllexport) void SetWaitIndicator(MxVideoPresenter*);
};

__declspec(dllexport) MxTransitionManager* TransitionManager();
