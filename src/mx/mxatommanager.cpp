#include "mxatommanager.h"

#include "custom/debug.h"
#include "mxomni.h"

MxAtomManagerUnknown1* MxAtomManager::addr_101013F0 = nullptr;

MxAtomManager::MxAtomManager() :
    unk0_(0),
    unk8_(0),
    unkC_(0)
{
    if (addr_101013F0 == nullptr) {
        addr_101013F0 = new MxAtomManagerUnknown1();
    }

    MxAtomManagerUnknown2* eax_1 = new MxAtomManagerUnknown2();
    eax_1->unk4_ = addr_101013F0;
    eax_1->unk10_ = 0;
    unk4_ = eax_1;

    unk4()->unk0_ = unk4();
    unk4()->unk8_ = unk4();
}

MxAtomManagerUnknown2 *MxAtomManager::unk4()
{
    return unk4_;
}

const int& MxAtomManager::unk8()
{
    return unk8_;
}

MxAtomManagerUnknown2 *MxAtomManager::sub_100AD780(MxAtom **unkp1)
{
    if (unk4_->unk4_ == addr_101013F0) {
        return unk4_;
    }

    (void)unkp1;
    ALERT("Partial stub")

    // FIXME: This is not correct behavior
    return nullptr;
}

MxAtomManagerUnknown2::MxAtomManagerUnknown2()
{
}

MxAtomManagerUnknown1::MxAtomManagerUnknown1() :
    unk0_(0),
    unk4_(0),
    unk8_(0),
    unk10_(1)
{
}
