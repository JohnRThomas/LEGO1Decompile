#ifndef MXDSACTION_H
#define MXDSACTION_H

#include "mxcore.h"

class MxDSActionBase : public MxCore {
public:
  MxDSActionBase();

  int unk8_;

  short unkC_;

  int unk10_;

  int unk14_;

  int unk18_;

  unsigned int unk1C_;

  int unk20_;

  unsigned short unk24_;

  int unk28_;

};

class MxDSActionSubclass
{
public:
  virtual ~MxDSActionSubclass(){}

  virtual void vtable4(){}
  virtual void vtable8(){}
  virtual void vtableC(){}
  virtual void vtable10(){}
  virtual void vtable14(){}
  virtual void vtable18(){}
  virtual void vtable1C(){}
  virtual void vtable20(){}
  virtual void vtable24(){}
  virtual void vtable28(){}
  virtual void vtable2C(){}
  virtual void vtable30(){}
  virtual void vtable34(){}
  virtual void vtable38(){}
  virtual void vtable3C(){}
  virtual void vtable40(){}
  virtual void vtable44(){}
  virtual void vtable48(){}
  virtual void vtable4C(){}
  virtual void vtable50(){}
  virtual void vtable54(){}
  virtual void vtable58(){}
  virtual void vtable5C(){}
  virtual void vtable60(){}
  virtual void vtable64(){}
  virtual void vtable68(){}
  virtual void vtable6C(){}
  virtual void vtable70(){}
  virtual void vtable74(){}
  virtual void vtable78(){}
  virtual void vtable7C(){}
  virtual void vtable80(){}

  // vtable 84
  virtual void sub_10003BF0(int* esp_8);

  int* unk4_;
  int unk8_[3];
};

class MxDSActionSubclass2 : public MxDSActionSubclass
{
public:
};

class MxDSAction : public MxDSActionBase {
public:
  MxDSAction();
  virtual ~MxDSAction();

private:
  int unk2C_;
  int unk30_;
  unsigned int unk34_;
  unsigned int unk38_;
  unsigned int unk3C_;
  MxDSActionSubclass unk40_;
  MxDSActionSubclass unk54_;
  MxDSActionSubclass unk68_;
  int unk7C_;
  short unk80_;
  int unk84_;
  int unk88_;
  int unk8C_;
  unsigned int unk90_;


};

long Start(class MxDSAction*);

#endif // MXDSACTION_H
