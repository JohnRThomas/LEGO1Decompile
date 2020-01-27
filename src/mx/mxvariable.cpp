#include "mxvariable.h"

#include "custom/debug.h"

MxVariable::MxVariable(const char *key, const char *value) :
  key_(key),
  value_(value)
{
  ALERT("MxVariable::MxVariable(const char *key, const char *value)", "Stub");
}

MxVariable::~MxVariable()
{
  ALERT("MxVariable::~MxVariable()", "Stub");
}

const MxString &MxVariable::key()
{
  ALERT("const MxString &MxVariable::key()", "Stub");
  return key_;
}

const MxString &MxVariable::value()
{
  ALERT("const MxString &MxVariable::value()", "Stub");
  return value_;
}
