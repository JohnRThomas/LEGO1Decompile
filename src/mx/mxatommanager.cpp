#include "mxatommanager.h"

#include "custom/debug.h"
#include "mxomni.h"

MxAtomItem* MxAtomManager::addr_101013F0 = NULL;

MxAtomManager::MxAtomManager() :
  unk0_(0),
  unk8_(0),
  unkC_(0)
{
  ALERT("MxAtomManager::MxAtomManager()", "Stub");
  if (addr_101013F0 == NULL) {
    addr_101013F0 = new MxAtomItem(NULL, TRUE);
  }

  unk4_ = new MxAtomItem(addr_101013F0, FALSE);
  unk4_->set_unk0(unk4_);
  unk4_->set_unk8(unk4_);
}

MxAtomItem *MxAtomManager::unk4()
{
  ALERT("MxAtomItem *MxAtomManager::unk4()", "Stub");
  return unk4_;
}

const int& MxAtomManager::unk8()
{
  ALERT("const int& MxAtomManager::unk8()", "Stub");
  return unk8_;
}

MxAtomItem *MxAtomManager::sub_100AD780(MxAtom *atom)
{
  ALERT("MxAtomItem *MxAtomManager::sub_100AD780(MxAtom *atom)", "Stub");
  MxAtomItem* esi_1 = unk4_->parent();
  MxAtomItem* ret = unk4_;

  while (esi_1 != addr_101013F0) {
    MxAtom* ecx_1 = esi_1->unkC();

    if (ecx_1->string() == atom->string()) {
      ret = esi_1;
      esi_1 = esi_1->unk0();
    } else {
      esi_1 = esi_1->unk8();
    }
  }

  return ret;
}

void MxAtomManager::sub_100AD4D0(int*, MxAtomItem *, MxAtomItem *, MxAtom **)
{
  ALERT("void MxAtomManager::sub_100AD4D0(int*, MxAtomItem *, MxAtomItem *, MxAtom **)", "Stub");
}

MxAtomItem::MxAtomItem(MxAtomItem *parent, BOOL root) :
  unk0_(NULL),
  parent_(parent),
  unk8_(NULL),
  root_(root)
{
  ALERT("MxAtomItem::MxAtomItem(MxAtomItem *parent, BOOL root)", "Stub");
}

void MxAtomItem::sub_100AD480()
{
  ALERT("void MxAtomItem::sub_100AD480()", "Stub");
  if (!unk0()->root_ && unk0()->parent()->parent() == unk0()) {
    unk0_ = unk0()->unk8();
  } else if (unk0()->unk0() == MxAtomManager::addr_101013F0) {
    MxAtomItem* edx = unk0()->parent();

    if (edx->unk0() == unk0()) {
      MxAtomItem* eax;
      do {
        unk0_ = edx;
        eax = edx;
        edx = edx->parent();
      } while (edx->unk0() == eax);
    }

    unk0_ = edx;
  } else {
    MxAtomItem* edx = unk0()->unk0();

    while (edx->unk8() != MxAtomManager::addr_101013F0) {
      edx = edx->unk8();
    }

    unk0_ = edx;
  }
}
