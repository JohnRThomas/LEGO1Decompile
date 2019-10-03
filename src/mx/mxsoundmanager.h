#ifndef MXSOUNDMANAGER_H
#define MXSOUNDMANAGER_H

#include "mxcore.h"
#include "unknown/mxunknownmanager5.h"

/**
 * @brief Game engine sound manager
 *
 * FIXME: Seems to have a much more complicated derivation tree than just MxCore.
 *
 * 0x3C bytes in size
 */
class MxSoundManager : public MxUnknownManager5 {
public:
    // 100AE740
    MxSoundManager();

    // 100AE830
    void Init();

private:
    int unk30_;
    int unk34_;
    int unk38_;
};

#endif // MXSOUNDMANAGER_H
