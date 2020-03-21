#ifndef MXSTRING_H
#define MXSTRING_H

#include "mxcore.h"

#include <WINDOWS.H>

/**
 * @brief String type abstract
 *
 * A wrapper around char* that handles memory de/allocation.
 *
 * This class is 0x10 bytes in size.
 */
class MxString : public MxCore {
public:
  MxString();

  MxString(const char* s);

  MxString(const MxString&);

  virtual ~MxString();

  const MxString& operator=(const char* s);

  const MxString& operator=(const MxString& s);

  BOOL operator==(const MxString& other) const;

  const char& operator[](int i) const;

  operator const char*() const;

private:
  char* string_;

  unsigned short length_;
};

#endif // MXSTRING_H
