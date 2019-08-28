#include "mxparam.h"

class MxCore {
public:
    MxCore();
    virtual ~MxCore();

    virtual long Notify(MxParam&);
};
