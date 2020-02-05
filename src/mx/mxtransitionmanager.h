#ifndef MXTRANSITIONMANAGER_H
#define MXTRANSITIONMANAGER_H

#include "mxcore.h"
#include "mxresult.h"
#include "mxvideopresenter.h"

/**
 * @brief The MxTransitionManager class
 *
 * 0x900 bytes in size.
 * Accessible at LegoOmni+138
 * Alloc'd at 06552F48
 */
class MxTransitionManager : public MxCore {
public:
  MxTransitionManager();

  void SetWaitIndicator(MxVideoPresenter*);

  virtual void vtable8(){}
  virtual void vtableC(){}
  virtual void vtable10(){}
  virtual MxResult vtable14();

private:
  char unk_[0x8F8];
};

#endif // MXTRANSITIONMANAGER_H
