#ifndef MXATOMID_H
#define MXATOMID_H

#include "custom/debug.h"
#include "mxatomtable.h"

/**
 * @brief The MxAtomId class
 *
 * 0x4 bytes in size
 */
class MxAtomId {
public:
  inline MxAtomId() {
    IMPERFECT;

    str_ = NULL;
  }
  MxAtomId(const char* str, LookupMode mode);
  ~MxAtomId();

  MxAtomId& operator=(const MxAtomId &);

private:
  MxAtom* sub_100AD210(const char* str, LookupMode mode);

  void sub_100ACFE0();

  const char* str_;
};

#endif // MXATOMID_H
