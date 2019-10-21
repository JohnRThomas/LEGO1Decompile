#ifndef MXATOMMANAGER_H
#define MXATOMMANAGER_H

#include "mxatom.h"

/**
 * @brief The MxAtomManagerUnknown1 class
 *
 * 0x14 bytes in size
 * Alloc at ****0A68
 */
class MxAtomManagerUnknown1 {
public:
    MxAtomManagerUnknown1();

private:
    int unk0_;

    int unk4_;

    int unk8_;

    int unkC_;

    int unk10_;
};

/**
 * @brief The MxAtomManagerUnknown2 class
 *
 * 0x14 bytes in size
 * Alloc at ****0AA0
 */
class MxAtomManagerUnknown2 {
public:
    MxAtomManagerUnknown2();

    MxAtomManagerUnknown2* unk0_;

    MxAtomManagerUnknown1* unk4_;

    MxAtomManagerUnknown2* unk8_;

    int unkC_;

    int unk10_;
};

/**
 * @brief The MxAtomManager class
 *
 * 0x10 bytes in size
 * Alloc at ****0A70
 */
class MxAtomManager
{
public:
    // 100AF105
    MxAtomManager();

    MxAtomManagerUnknown2* unk4();
    const int &unk8();

    MxAtomManagerUnknown2* sub_100AD780(MxAtom **unkp1);

    static MxAtomManagerUnknown1* addr_101013F0;
private:

    unsigned short unk0_;

    MxAtomManagerUnknown2* unk4_;

    int unk8_;

    int unkC_;

};

#endif // MXATOMMANAGER_H
