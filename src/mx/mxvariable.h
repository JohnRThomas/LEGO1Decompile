#ifndef MXVARIABLE_H
#define MXVARIABLE_H

#include "mxstring.h"

// This class is 0x24 bytes in size
class MxVariable {
public:
  MxVariable(const char* key) {
    key_ = key;
  }

  MxVariable(const char* key, const char* value) {
    key_ = key;
    value_ = value;
  }

  virtual ~MxVariable();

  const MxString& key();

  const MxString& value();

private:
  // +4
  MxString key_;

  // +14
  MxString value_;
};

#endif // MXVARIABLE_H
