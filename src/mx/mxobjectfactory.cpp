#include "mxobjectfactory.h"

#include "custom/debug.h"

MxObjectFactory::MxObjectFactory() :
    unk8_("MxPresenter", Unk_LookupMode0),
    unkC_("MxCompositePresenter", Unk_LookupMode0),
    unk10_("MxVideoPresenter", Unk_LookupMode0),
    unk14_("MxFlcPresenter", Unk_LookupMode0),
    unk18_("MxSmkPresenter", Unk_LookupMode0),
    unk1C_("MxStillPresenter", Unk_LookupMode0),
    unk20_("MxWavePresenter", Unk_LookupMode0),
    unk24_("MxMIDIPresenter", Unk_LookupMode0),
    unk28_("MxEventPresenter", Unk_LookupMode0),
    unk2C_("MxLoopingFlcPresenter", Unk_LookupMode0),
    unk30_("MxLoopingSmkPresenter", Unk_LookupMode0),
    unk34_("MxLoopingMIDIPresenter", Unk_LookupMode0)
{
}
