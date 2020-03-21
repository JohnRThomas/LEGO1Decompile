#ifndef MXATOMMANAGER_H
#define MXATOMMANAGER_H

#include "custom/debug.h"
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
  MxAtomItem* unk0_;

  MxAtomItem* parent_;

  MxAtomItem* unk8_;

  MxAtom* unkC_;

  BOOL root_;

  void sub_100AD480();

};

/**
 * @brief The MxAtomManager class
 *
 * Likely not its real name.
 *
 * 0x10 bytes in size
 * Alloc at ****0A70
 */
class MxAtomTable
{
public:
  // 100AF105
  inline MxAtomTable(unsigned char u1, unsigned char u2)
  {
    IMPERFECT;

    unk0_ = u1;
    unk1_ = u2;
    unk8_ = 0;

    if (addr_101013F0 == NULL) {
      MxAtomItem* root_item = new MxAtomItem();

      root_item->parent_ = NULL;
      root_item->root_ = TRUE;

      addr_101013F0 = root_item;

      root_item->unk0_ = NULL;

      addr_101013F0->unk8_ = NULL;
    }

    //sub_100AF185();

    MxAtomItem* our_item = new MxAtomItem();
    our_item->parent_ = addr_101013F0;
    our_item->root_ = FALSE;

    unk4_ = our_item;

    unk4_->unk0_ = unk4_;
    unk4_->unk8_ = unk4_;

    unkC_ = 0;
  }

  MxAtomItem* unk4();
  const int &unk8();

  MxAtomItem* sub_100AD780(MxAtom *atom);

  void sub_100AD4D0(int *unkp1, MxAtomItem*, MxAtomItem*, MxAtom**);

  static MxAtomItem* addr_101013F0;
private:
  unsigned char unk0_;

  unsigned char unk1_;

  MxAtomItem* unk4_;

  int unk8_;

  int unkC_;

};

#endif // MXATOMMANAGER_H
