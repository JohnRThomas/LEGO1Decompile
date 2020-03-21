#include "mxatomtable.h"

#include "mxomni.h"

MxAtomItem* MxAtomTable::addr_101013F0 = NULL;

MxAtomItem *MxAtomTable::unk4()
{
  PARTIAL;

  return unk4_;
}

const int& MxAtomTable::unk8()
{
  PARTIAL;

  return unk8_;
}

MxAtomItem *MxAtomTable::sub_100AD780(MxAtom *atom)
{
  PARTIAL;

  MxAtomItem* esi_1 = unk4_->parent_;
  MxAtomItem* ret = unk4_;

  while (esi_1 != addr_101013F0) {
    MxAtom* ecx_1 = esi_1->unkC_;

    if (ecx_1->string() == atom->string()) {
      ret = esi_1;
      esi_1 = esi_1->unk0_;
    } else {
      esi_1 = esi_1->unk8_;
    }
  }

  return ret;
}

void MxAtomTable::sub_100AD4D0(int*, MxAtomItem *, MxAtomItem *, MxAtom **)
{
  STUB;
}

void MxAtomItem::sub_100AD480()
{
  PARTIAL;

  if (!unk0_->root_ && unk0_->parent_->parent_ == unk0_) {
    unk0_ = unk0_->unk8_;
  } else if (unk0_->unk0_ == MxAtomTable::addr_101013F0) {
    MxAtomItem* edx = unk0_->parent_;

    if (edx->unk0_ == unk0_) {
      MxAtomItem* eax;
      do {
        unk0_ = edx;
        eax = edx;
        edx = edx->parent_;
      } while (edx->unk0_ == eax);
    }

    unk0_ = edx;
  } else {
    MxAtomItem* edx = unk0_->unk0_;

    while (edx->unk8_ != MxAtomTable::addr_101013F0) {
      edx = edx->unk8_;
    }

    unk0_ = edx;
  }
}
