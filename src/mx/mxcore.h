#include "mxparam.h"

class MxCore {
public:
    __declspec(dllexport) MxCore();
    __declspec(dllexport) virtual ~MxCore();

    __declspec(dllexport) virtual long Notify(MxParam&);

private:
    static int core_count_;

    int unknown1_;

    int id_;

    // FIXME: MxCore+44 is a MxVideoParam class (or maybe not?)

};
