#include "mxobjectfactory.h"

#include "custom/debug.h"

MxObjectFactory::MxObjectFactory()
{
  ALERT("MxObjectFactory::MxObjectFactory()", "Stub");
  unk8_ = MxAtomId("MxPresenter", Unk_LookupMode0);
  unkC_ = MxAtomId("MxCompositePresenter", Unk_LookupMode0);
  unk10_ = MxAtomId("MxVideoPresenter", Unk_LookupMode0);
  unk14_ = MxAtomId("MxFlcPresenter", Unk_LookupMode0);
  unk18_ = MxAtomId("MxSmkPresenter", Unk_LookupMode0);
  unk1C_ = MxAtomId("MxStillPresenter", Unk_LookupMode0);
  unk20_ = MxAtomId("MxWavePresenter", Unk_LookupMode0);
  unk24_ = MxAtomId("MxMIDIPresenter", Unk_LookupMode0);
  unk28_ = MxAtomId("MxEventPresenter", Unk_LookupMode0);
  unk2C_ = MxAtomId("MxLoopingFlcPresenter", Unk_LookupMode0);
  unk30_ = MxAtomId("MxLoopingSmkPresenter", Unk_LookupMode0);
  unk34_ = MxAtomId("MxLoopingMIDIPresenter", Unk_LookupMode0);
}
