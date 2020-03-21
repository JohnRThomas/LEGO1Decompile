#include "mxvariable.h"

MxVariable::~MxVariable()
{
  STUB;
}

const MxString &MxVariable::key()
{
  PARTIAL;
  return key_;
}

const MxString &MxVariable::value()
{
  PARTIAL;
  return value_;
}
