#include "mxdsaction.h"

#include "custom/debug.h"

MxDSAction::MxDSAction()
{
  // FIXME: Imperfect

  unk40_.unk4_ = unk40_.unk8_;
  unk54_.unk4_ = unk54_.unk8_;
  unk68_.unk4_ = unk68_.unk8_;

  unk80_ = 0;
  unk7C_ = NULL;

  unk30_ = 0x20;
  unk34_ = 0x80000000;
  unk38_ = 0x80000000;
  unk3C_ = 0xFFFFFFFF;

  unkC_ = 1;

  unk40_.sub_10003BF0(0x7F7FFFFF);
  unk54_.sub_10003BF0(0x7F7FFFFF);
  unk68_.sub_10003BF0(0x7F7FFFFF);

  unk84_ = 0;
  unk88_ = 0;
  unk8C_ = 0;
  unk90_ = 0x80000000;
}

MxDSAction::~MxDSAction()
{
  delete unk7C_;
}

long Start(MxDSAction*)
{
  ALERT("long Start(MxDSAction*)", "Stub");

  return 0;
}

MxDSActionBase::MxDSActionBase()
{
  // FIXME: Imperfect

  unkC_ = 0;

  unk24_ = 0xFFFF;

  unk10_ = NULL;
  unk14_ = 0;
  unk18_ = NULL;
  unk1C_ = 0xFFFFFFFF;
  unk28_ = 0;
}

MxDSActionBase::~MxDSActionBase()
{
  delete unk18_;
  delete unk10_;
}

void MxDSActionSubclass::sub_10003BF0(const int &esp_8)
{
  unk4_[0] = esp_8;
  unk4_[1] = esp_8;
  unk4_[2] = esp_8;
}
