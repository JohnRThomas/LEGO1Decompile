#include "mxdsaction.h"

#include "custom/debug.h"

MxDSAction::MxDSAction()
{
  // FIXME: Imperfect

  unk40_.unk4_ = unk40_.unk8_;
  unk54_.unk4_ = unk54_.unk8_;
  unk68_.unk4_ = unk68_.unk8_;

  unk80_ = 0;
  unk7C_ = 0;

  unk30_ = 0x20;
  unk34_ = 0x80000000;
  unk38_ = 0x80000000;
  unk3C_ = 0xFFFFFFFF;

  unkC_ = 1;

  int ebp_10 = 0x7F7FFFFF;
  unk40_.sub_10003BF0(&ebp_10);

  ebp_10 = 0x7F7FFFFF;
  unk54_.sub_10003BF0(&ebp_10);

  ebp_10 = 0x7F7FFFFF;
  unk68_.sub_10003BF0(&ebp_10);

  unk84_ = 0;
  unk88_ = 0;
  unk8C_ = 0;
  unk90_ = 0x80000000;
}

MxDSAction::~MxDSAction()
{
  ALERT("MxDSAction::~MxDSAction()", "Stub");
}

long Start(MxDSAction*)
{
  ALERT("long Start(MxDSAction*)", "Stub");

  return 0;
}

MxDSActionBase::MxDSActionBase()
{
  // FIXME: Imperfect, but very close

  unk24_ = 0xFFFF;
  unk1C_ = 0xFFFFFFFF;

  unkC_ = 0;

  unk20_ = 0;
  unk10_ = 0;
  unk14_ = 0;
  unk18_ = 0;

  unk28_ = 0;
}

void MxDSActionSubclass::sub_10003BF0(int *esp_8)
{
  // FIXME: Imperfect, but soooo cloooose

  int* eax = unk4_;
  int* esi = esp_8;
  int edx = *esi;
  eax[0] = edx;

  eax = unk4_;
  edx = *esi;
  eax[1] = edx;

  eax = unk4_;
  edx = *esi;
  eax[2] = edx;
}
