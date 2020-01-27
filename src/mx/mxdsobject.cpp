#include "mxdsobject.h"

#include "custom/debug.h"

MxDSObject *CreateStreamObject(MxDSFile *, short)
{
  ALERT("MxDSObject *CreateStreamObject(MxDSFile *, short)", "Stub");
  return 0;
}

void MxDSObject::SetObjectName(const char *)
{
  ALERT("void MxDSObject::SetObjectName(const char *)", "Stub");
}
