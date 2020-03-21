#ifndef MXUNKNOWNMANAGER1_H
#define MXUNKNOWNMANAGER1_H

#include "mxatomid.h"
#include "mxcore.h"

/**
 * @brief One of many unknown managers
 *
 * 0x38 bytes in size
 * Stored in MxOmni+1C
 * Allocated at ****3CE0
 */
class MxObjectFactory : public MxCore {
public:
  // sub_100B0D80
  MxObjectFactory();

private:
  MxAtomId unk8_;
  MxAtomId unkC_;
  MxAtomId unk10_;
  MxAtomId unk14_;
  MxAtomId unk18_;
  MxAtomId unk1C_;
  MxAtomId unk20_;
  MxAtomId unk24_;
  MxAtomId unk28_;
  MxAtomId unk2C_;
  MxAtomId unk30_;
  MxAtomId unk34_;

};

#endif // MXUNKNOWNMANAGER1_H
