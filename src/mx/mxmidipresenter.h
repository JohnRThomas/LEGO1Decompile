#ifndef MXUNKNOWNMANAGER3_H
#define MXUNKNOWNMANAGER3_H

#include "unknown/mxunknownmanager5.h"

/**
 * @brief The MxMIDIPresenter class
 *
 * FIXME: MIGHT be MxLoopingMIDIPresenter, making MxUnknownManager5 the real MxMIDIPresenter?
 *
 * 0x58 bytes in size
 */
class MxMIDIPresenter : public MxUnknownManager5
{
public:
    // sub_100C05A0
    // sub_100C0690
    MxMIDIPresenter();

    // sub_100C06A0
    void Init();

private:
    int unk30_;
    unsigned char unk34_;
    int unk38_;
    int unk3C_;
    int unk40_;
    int unk44_;
    int unk48_;
    int unk4C_;
    int unk50_;
    int unk54_;
};

#endif // MXUNKNOWNMANAGER3_H
