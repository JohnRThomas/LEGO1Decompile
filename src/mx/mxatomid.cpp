#include "mxatomid.h"

#include "custom/debug.h"
#include "mxomni.h"

MxAtomId::MxAtomId() :
  str_(NULL)
{
}

MxAtomId::MxAtomId(const char* str, LookupMode mode)
{
  if (MxOmni::GetInstance() != NULL && AtomManager() != NULL) {
    MxAtom* atom = sub_100AD210(str, mode);

    str_ = atom->string();

    atom->sub_100AD7F0();
  }
}

MxAtomId::~MxAtomId()
{
  if (str_ != NULL
      && MxOmni::GetInstance() != NULL
      && AtomManager() != NULL) {
    ALERT("Partial Stub");
  }
}

MxAtomId& MxAtomId::operator=(const MxAtomId &other)
{
  if (str_ != NULL) {
    sub_100ACFE0();
  }

  if (other.str_ != NULL) {
    if (MxOmni::GetInstance() != NULL && AtomManager() != NULL) {
      MxAtom* atom = sub_100AD210(other.str_, Unk_LookupMode0);

      str_ = atom->string();

      atom->sub_100AD7F0();
    }
  } else {
    str_ = NULL;
  }

  return *this;
}

MxAtom *MxAtomId::sub_100AD210(const char *str, LookupMode mode)
{
  ALERT("Partial Stub");

  MxAtom* ebp_14 = new MxAtom(str);

  if (mode == Unk_LookupMode1 || mode == Unk_LookupMode3) {
    // Call 100AE4A0
    ALERT("Stub");
  } else if (mode == Unk_LookupMode2) {
    // Call MxString operator ==
    ALERT("Stub");
  }

  MxAtomItem* ebp_18 = AtomManager()->sub_100AD780(ebp_14);

  MxAtomItem* ebp_10;

  if (ebp_18 != AtomManager()->unk4() // 100AD2B6
      || ebp_18->unkC()->string() != ebp_14->string()) { // 100AD2BB
    ebp_10 = AtomManager()->unk4();
  } else {
    ebp_10 = ebp_18->unk0();
  }

  // 100AD309
  if (ebp_10 != AtomManager()->unk4() && ebp_14 != NULL) {
    delete ebp_14;
    ebp_14 = ebp_10->unkC();
  } else {
    // 100AD345
    MxAtomItem* edi_1 = AtomManager()->unk4();
    MxAtomItem* esi_1 = edi_1->parent();

    // FIXME: Unsure if this codepath is accurate
    BOOL eax_1 = TRUE;

    while (esi_1 != MxAtomManager::addr_101013F0) {
      edi_1 = esi_1;

      if (ebp_14->string() != esi_1->unkC()->string()) {
        esi_1 = esi_1->unk8();
        eax_1 = FALSE;
      } else {
        esi_1 = esi_1->unk0();
        eax_1 = TRUE;
      }
    }

    int ebp_20, ebp_28;

    // 100AD3B0
    if (AtomManager()->unk8() == 0) {

      // 100AD3C1
      ebp_10 = edi_1;

      // 100AD3C4
      if (eax_1) {
        if (AtomManager()->unk4()->unk0() == edi_1) {
          AtomManager()->sub_100AD4D0(&ebp_28, esi_1, edi_1, &ebp_14);
        } else {
          ebp_10->sub_100AD480();
        }
      }

      if (ebp_10->unkC()->string() != ebp_14->string()) {
        AtomManager()->sub_100AD4D0(&ebp_20, esi_1, edi_1, &ebp_14);
      }

    } else {
      AtomManager()->sub_100AD4D0(&ebp_20, esi_1, edi_1, &ebp_14);
    }
  }

  return ebp_14;
}

void MxAtomId::sub_100ACFE0()
{
  ALERT("Stub");
}
