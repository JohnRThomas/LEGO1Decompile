#ifndef MXSOUNDMANAGER_H
#define MXSOUNDMANAGER_H

#include "mxcore.h"
#include "mxresult.h"
#include "unknown/mxunknownmanager5.h"

/**
 * @brief Game engine sound manager
 *
 * FIXME: Seems to have a much more complicated derivation tree than just MxCore.
 *
 * 0x3C bytes in size
 */
class MxSoundManager : public MxUnknownManager5 {
public:
  // 100AE740
  MxSoundManager();

  // 100AE830
  void Init();

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
  virtual MxResult vtable30(int punk1, int punk2){return SUCCESS;}
  virtual void vtable34(){}
  virtual void vtable38(){}
  virtual void vtable3C(){}

private:
  int unk30_;
  int unk34_;
  int unk38_;
};

#endif // MXSOUNDMANAGER_H
