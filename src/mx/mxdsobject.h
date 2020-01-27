#ifndef MXDSOBJECT_H
#define MXDSOBJECT_H

#include "mxdsfile.h"

class MxDSObject {
public:
  MxDSObject();

  void SetObjectName(const char*);

};

MxDSObject* CreateStreamObject(MxDSFile*, short);

#endif // MXDSOBJECT_H
