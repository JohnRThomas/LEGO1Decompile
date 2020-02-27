#ifndef MXUNKNOWNMANAGER4_H
#define MXUNKNOWNMANAGER4_H

#include "mx/mxresult.h"
#include "mxunknownmanager6.h"

/**
 * @brief The MxUnknownManager4 class
 *
 * MIGHT be MxFlcPresenter or MxLoopingFlcPresenter?
 *
 * 0x2C bytes in size, alloc at ****0BB8
 */
class MxUnknownManager4 : public MxUnknownManager6
{
public:
  // 100C0360
  MxUnknownManager4();

  virtual void vtable08(){}
  virtual void vtable0C(){}
  virtual void vtable10(){}
  virtual void vtable14(){}
  virtual void vtable18(){}
  virtual void vtable1C(){}
  virtual void vtable20(){}
  virtual void vtable24(){}
  virtual MxResult sub_100C04A0(int punk1, int punk2);

};

#endif // MXUNKNOWNMANAGER4_H
