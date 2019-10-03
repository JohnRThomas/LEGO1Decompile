#ifndef LEGOUNKNOWNMANAGER2_H
#define LEGOUNKNOWNMANAGER2_H

/**
 * @brief The LUM21 class
 *
 * 0x18 bytes in size
 */
class LUM21 {
public:
    int unk0_; // vtable?
    LUM21* unk4_;
    int unk8_; // vtable?
    int unkC_;
    int unk10_;
    int unk14_;
};

/**
 * @brief The LegoUnknownManager2 class
 *
 * 0x14 bytes in size. Some other unknown manager. Accessible at LegoOmni+6C, alloc'd at ****3480
 */
class LegoUnknownManager2 {
public:
    // 100A6FD0
    LegoUnknownManager2();

private:
    static LUM21* addr_10101068;

    int unk0_;
    int unk4_;
    LUM21* unk8_;
    int unkC_;
    int unk10_;
};

#endif // LEGOUNKNOWNMANAGER2_H
