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

    MxAtomManagerUnknown1* unk0_;

    MxAtomManagerUnknown1* unk4_;

    MxAtomManagerUnknown1* unk8_;

    // FIXME: Not confident
    MxAtom* unkC_;

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

    MxAtomManagerUnknown1* unk4();
    const int &unk8();

    MxAtomManagerUnknown1* sub_100AD780(MxAtom *atom);

    void sub_100AD4D0(int *unkp1, MxAtomManagerUnknown1*, MxAtomManagerUnknown1*, MxAtom**);

    static MxAtomManagerUnknown1* addr_101013F0;
private:

    unsigned short unk0_;

    MxAtomManagerUnknown1* unk4_;

    int unk8_;

    int unkC_;

};

#endif // MXATOMMANAGER_H
