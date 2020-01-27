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

  unknown3_ = 1;

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
  unknown3_ = 0;
  unknown4_ = 0;
  unknown5_ = 0;
  unknown6_ = 0;
  unknown7_ = 0xFFFFFFFF;
  unknown8_ = 0;
  unknown9_ = 0xFFFF;
  unknown10_ = 0;
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
