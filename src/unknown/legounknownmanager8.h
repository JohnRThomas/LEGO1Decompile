#ifndef LEGOUNKNOWNMANAGER8_H
#define LEGOUNKNOWNMANAGER8_H

#include "custom/debug.h"
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
  inline LegoUnknownManager8() {
    ALERT("LegoUnknownManager8::LegoUnknownManager8()", "Stub");

    unk8_ = 0;
    unk10_ = 0;
    unk14_ = 0;
  }

private:
  int unk8_;
  int unkC_;
  int unk10_;
  int unk14_;

};

#endif // LEGOUNKNOWNMANAGER8_H
