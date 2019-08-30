#include "mxparam.h"

class MxCore {
public:
    __declspec(dllexport) MxCore();
    __declspec(dllexport) virtual ~MxCore();

    __declspec(dllexport) virtual long Notify(MxParam&);
};
