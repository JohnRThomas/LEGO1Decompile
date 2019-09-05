#ifndef MXCORE_H
#define MXCORE_H

#include "mxparam.h"

class MxCore {
public:
    __declspec(dllexport) MxCore();
    __declspec(dllexport) virtual ~MxCore();

    __declspec(dllexport) virtual long Notify(MxParam&);

private:
    static int core_count_;

    int id_;

};

#endif // MXCORE_H
