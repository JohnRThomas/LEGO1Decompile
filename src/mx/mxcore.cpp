#include "mxcore.h"

#include "custom/debug.h"

unsigned int MxCore::core_count_ = 0;

MxCore::MxCore()
{
  id_ = core_count_;
  core_count_++;
}

MxCore::~MxCore()
{
  ALERT("MxCore::~MxCore()", "Stub");
}

long MxCore::Notify(MxParam&)
{
  ALERT("long MxCore::Notify(MxParam&)", "Stub");

  return 0;
}
