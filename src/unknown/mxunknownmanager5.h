#ifndef MXUNKNOWNMANAGER5_H
#define MXUNKNOWNMANAGER5_H

#include "mxunknownmanager6.h"

/**
 * @brief The MxUnknownManager5 class
 *
 * SEEMS to be 0x30 bytes in size
 */
class MxUnknownManager5 : public MxUnknownManager6
{
public:
  // 100B8D00
  MxUnknownManager5();

  // 100B8DF0
  void Init();

private:
  int unk2C_;
};

#endif // MXUNKNOWNMANAGER5_H
