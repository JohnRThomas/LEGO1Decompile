#ifndef MXUNKNOWNMANAGER6_H
#define MXUNKNOWNMANAGER6_H

#include "mx/mxcore.h"
#include "mx/mxcriticalsection.h"

/**
 * @brief The MxUnknownManager6 class
 *
 * MIGHT be MxPresenter?
 *
 * SEEMS like 0x2C bytes in size
 */
class MxUnknownManager6 : public MxCore
{
public:
    // sub_100B84C0
    MxUnknownManager6();

    // sub_100B8501
    void Init();

private:
    int unk8_;

    int unkC_;

    MxCriticalSection critical_section_;
};

#endif // MXUNKNOWNMANAGER6_H
