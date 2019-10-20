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

    unk4_ = new MxAtomManagerUnknown2(addr_101013F0);
}

MxAtomManagerUnknown2 *MxAtomManager::unk_mamu2()
{
    return unk4_;
}

MxAtomManagerUnknown2 *MxAtomManager::sub_100AD780(int unkp1)
{
    if (unk4_->unk4_ == addr_101013F0) {
        return unk4_;
    }

    (void)unkp1;
    ALERT("Partial stub")

    // FIXME: This is not correct behavior
    return nullptr;
}

MxAtomManagerUnknown2::MxAtomManagerUnknown2(MxAtomManagerUnknown1* mamu1) :
    unk4_(mamu1),
    unk10_(0)
{
}

MxAtomManagerUnknown1::MxAtomManagerUnknown1() :
    unk0_(0),
    unk4_(0),
    unk8_(0),
    unk10_(1)
{
}
