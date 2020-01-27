#include "mxcore.h"

#include "custom/debug.h"

int MxCore::core_count_ = 0;

MxCore::MxCore()
{
  id_ = core_count_;
  core_count_++;
}

MxCore::~MxCore()
{
}

long MxCore::Notify(MxParam&)
{
  ALERT("Stub");

  return 0;
}
