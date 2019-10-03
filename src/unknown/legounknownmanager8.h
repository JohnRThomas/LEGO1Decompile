#ifndef LEGOUNKNOWNMANAGER8_H
#define LEGOUNKNOWNMANAGER8_H

#include "mx/mxcore.h"

/**
 * @brief The LegoUnknownManager8 class
 *
 * Some other unknown manager.
 *
 * 0x18 bytes in size.
 * Accessible at LegoOmni+78
 * Alloc'd at ****4B58
 */
class LegoUnknownManager8 : public MxCore {
public:
    LegoUnknownManager8();

private:
    int unk8_;
    int unkC_;
    int unk10_;
    int unk14_;

};

#endif // LEGOUNKNOWNMANAGER8_H
