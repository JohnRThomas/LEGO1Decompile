#include "mxatomid.h"

#include "mxomni.h"

MxAtomId::MxAtomId(const char* str, LookupMode mode)
{
  // Partial
  PARTIAL;

  if (MxOmni::GetInstance() != NULL && AtomTable() != NULL) {
    MxAtom* atom = sub_100AD210(str, mode);

    str_ = atom->string();

    atom->sub_100AD7F0();
  }
}

MxAtomId::~MxAtomId()
{
  // Partial
  PARTIAL;

  if (str_ != NULL
      && MxOmni::GetInstance() != NULL
      && AtomTable() != NULL) {
  }
}

MxAtomId& MxAtomId::operator=(const MxAtomId &other)
{
  // Partial
  PARTIAL;

  if (str_ != NULL) {
    sub_100ACFE0();
  }

  if (other.str_ != NULL) {
    if (MxOmni::GetInstance() != NULL && AtomTable() != NULL) {
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
  PARTIAL;

  MxAtom* ebp_14 = new MxAtom(str);

  if (mode == Unk_LookupMode1 || mode == Unk_LookupMode3) {
    // Call 100AE4A0
    STUB;
  } else if (mode == Unk_LookupMode2) {
    // Call MxString operator ==
    STUB;
  }

  MxAtomItem* ebp_18 = AtomTable()->sub_100AD780(ebp_14);

  MxAtomItem* ebp_10;

  if (ebp_18 != AtomTable()->unk4() // 100AD2B6
      || ebp_18->unkC_->string() != ebp_14->string()) { // 100AD2BB
    ebp_10 = AtomTable()->unk4();
  } else {
    ebp_10 = ebp_18->unk0_;
  }

  // 100AD309
  if (ebp_10 != AtomTable()->unk4() && ebp_14 != NULL) {
    delete ebp_14;
    ebp_14 = ebp_10->unkC_;
  } else {
    // 100AD345
    MxAtomItem* edi_1 = AtomTable()->unk4();
    MxAtomItem* esi_1 = edi_1->parent_;

    // FIXME: Unsure if this codepath is accurate
    BOOL eax_1 = TRUE;

    while (esi_1 != MxAtomTable::addr_101013F0) {
      edi_1 = esi_1;

      if (ebp_14->string() != esi_1->unkC_->string()) {
        esi_1 = esi_1->unk8_;
        eax_1 = FALSE;
      } else {
        esi_1 = esi_1->unk0_;
        eax_1 = TRUE;
      }
    }

    int ebp_20, ebp_28;

    // 100AD3B0
    if (AtomTable()->unk8() == 0) {

      // 100AD3C1
      ebp_10 = edi_1;

      // 100AD3C4
      if (eax_1) {
        if (AtomTable()->unk4()->unk0_ == edi_1) {
          AtomTable()->sub_100AD4D0(&ebp_28, esi_1, edi_1, &ebp_14);
        } else {
          ebp_10->sub_100AD480();
        }
      }

      if (ebp_10->unkC_->string() != ebp_14->string()) {
        AtomTable()->sub_100AD4D0(&ebp_20, esi_1, edi_1, &ebp_14);
      }

    } else {
      AtomTable()->sub_100AD4D0(&ebp_20, esi_1, edi_1, &ebp_14);
    }
  }

  return ebp_14;
}

void MxAtomId::sub_100ACFE0()
{
  PARTIAL;
}
