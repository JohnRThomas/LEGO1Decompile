#include "mxdsaction.h"

#include "custom/debug.h"

MxDSAction::MxDSAction()
{
  ALERT("MxDSAction::MxDSAction()", "Stub");
  unknown12_ = 0x20;
  unknown13_ = 0x80000000;
  unknown14_ = 0x80000000;
  unknown15_ = 0xFFFFFFFF;

  // FIXME: What the hell is this?
  unknown16_.Set(0x7f7fffff);
  unknown21_.Set(0x7f7fffff);
  unknown26_.Set(0x7f7fffff);

  unkC_ = 1;

  unknown31_ = 0;
  unknown32_ = 0;
  unknown33_ = 0;
  unknown34_ = 0;
  unknown35_ = 0;
  unknown36_ = 0x80000000;
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
  ALERT("MxDSActionBase::MxDSActionBase()", "Stub");

  unsigned int ebp_4 = 0;
  ebp_4 = 1;

  unkC_ = 0;
  unk20_ = 0;

  unk24_ = 0xFFFF;
  unk10_ = 0;
  unk14_ = 0;
  unk18_ = 0;
  unk1C_ = 0xFFFFFFFF;
  unk28_ = 0;

  ebp_4 = 0xFFFFFFFF;
}

MxDSSubclass::MxDSSubclass()
{
  ALERT("MxDSSubclass::MxDSSubclass()", "Stub");
}

void MxDSSubclass::Set(int value)
{
  ALERT("void MxDSSubclass::Set(int value)", "Stub");
  unknown3_ = value;
  unknown4_ = value;
  unknown5_ = value;
}
