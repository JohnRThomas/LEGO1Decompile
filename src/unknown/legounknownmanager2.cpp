#include "legounknownmanager2.h"

#include "custom/debug.h"

LUM21* LegoUnknownManager2::addr_10101068 = nullptr;

LegoUnknownManager2::LegoUnknownManager2() :
    unk4_(0x0810),
    unkC_(0)
{
    if (addr_10101068 == nullptr) {
        addr_10101068 = new LUM21();
        addr_10101068->unk4_ = nullptr;
        addr_10101068->unk14_ = 1;
        addr_10101068->unk8_ = 0;
        addr_10101068->unk0_ = 0;
    }

    unk8_ = new LUM21();
    unk8_->unk4_ = addr_10101068;
    unk8_->unk14_ = 0;
}
