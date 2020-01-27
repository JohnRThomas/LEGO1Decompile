#ifndef MXATOMMANAGER_H
#define MXATOMMANAGER_H

#include "mxatom.h"

/**
 * @brief The MxAtomManagerUnknown1 class
 *
 * Might be some kind of LinkedList item?
 *
 * 0x14 bytes in size
 * Alloc at ****0A68
 */
class MxAtomItem {
public:
    MxAtomItem(MxAtomItem* parent, BOOL root);

    MxAtomItem* unk0(){return unk0_;}
    void set_unk0(MxAtomItem* item){unk0_ = item;}

    MxAtomItem* parent(){return parent_;}

    MxAtomItem* unk8(){return unk8_;}
    void set_unk8(MxAtomItem* item){unk8_ = item;}

    MxAtom* unkC(){return unkC_;}

    BOOL root(){return root_;}

    void sub_100AD480();

private:
    MxAtomItem* unk0_;

    MxAtomItem* parent_;

    MxAtomItem* unk8_;

    MxAtom* unkC_;

    BOOL root_;
};

/**
 * @brief The MxAtomManager class
 *
 * Likely not its real name.
 *
 * 0x10 bytes in size
 * Alloc at ****0A70
 */
class MxAtomManager
{
public:
    // 100AF105
    MxAtomManager();

    MxAtomItem* unk4();
    const int &unk8();

    MxAtomItem* sub_100AD780(MxAtom *atom);

    void sub_100AD4D0(int *unkp1, MxAtomItem*, MxAtomItem*, MxAtom**);

    static MxAtomItem* addr_101013F0;
private:

    unsigned short unk0_;

    MxAtomItem* unk4_;

    int unk8_;

    int unkC_;

};

#endif // MXATOMMANAGER_H
