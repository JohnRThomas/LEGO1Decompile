#include "mxvariable.h"

#include "custom/debug.h"

MxVariable::MxVariable(const char *key, const char *value) :
    key_(key),
    value_(value)
{
}

MxVariable::~MxVariable()
{
    ALERT("Stub")
}

const MxString &MxVariable::key()
{
    return key_;
}

const MxString &MxVariable::value()
{
    return value_;
}
