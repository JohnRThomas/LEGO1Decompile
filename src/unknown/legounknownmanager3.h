#ifndef LEGOUNKNOWNMANAGER3_H
#define LEGOUNKNOWNMANAGER3_H

#include <WINDOWS.H>

/**
 * @brief Unknown class used in LegoUnknownManager3
 *
 * 0x18 bytes in size
 */
class LUM31 {
public:
    int unk0_;
    LUM31* unk4_;
    LUM31* unk8_;
    int unkC_;
    int unk10_;
    int unk14_;
};

/**
 * @brief Unknown class used in LegoUnknownManager3
 *
 * 0x10 bytes in size
 */
class LUM32 {
public:
    int unk0_;
    int unk4_;
    int unk8_;
    int unkC_;
};

/**
 * @brief Unknown class used in LegoUnknownManager3
 *
 * 0x80 bytes in size
 */
class LUM33 {
public:
    unsigned char unk_[0x80];
};

/**
 * @brief Unknown class used in LegoUnknownManager3
 *
 * 0x50 bytes in size
 */
class LUM34 {
public:
    unsigned char unk_[0x50];
};

/**
 * @brief The LegoUnknownManager3 class
 *
 * Some other unknown manager.
 *
 * 0x24 bytes in size.
 * Accessible at LegoOmni+74,
 * alloc'd at ****3B00
 */
class LegoUnknownManager3 {
public:
    LegoUnknownManager3();
    virtual ~LegoUnknownManager3();

    void SetUnknown4(unsigned char u);

    // FIXME: This may not be a member of this class
    static void sub_10046C10();

private:
    // Original stores this at 0x100F0100
    static LUM31* addr_100F0100;

    // FIXME: This may not be a member of this class
    // Some kind of buffer?
    static __int64* addr_100F42E8;
    static __int64* addr_100F42EC;
    static __int64* addr_100F4358;
    static __int64* addr_100F435C;

    unsigned int unk0_;
    unsigned char unk4_;
    unsigned short unk8_;
    LUM31* unkC_;
    int unk10_;
    int unk14_;
    unsigned char unk18_;
    LUM32* unk1C_;
    int unk20_;
};

#endif // LEGOUNKNOWNMANAGER3_H
