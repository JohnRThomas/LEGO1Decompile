#include "mxstring.h"

#include <STRING.H>

#include "custom/debug.h"

MxString::MxString()
{
  string_ = new char[1];
  string_[0] = 0;
  length_ = 0;
}

MxString::MxString(const char *s)
{
  ALERT("MxString::MxString(const char *s)", "Stub");
  length_ = static_cast<unsigned short>(strlen(s));

  unsigned int array_length = length_+1;
  string_ = new char[array_length];
  strcpy(string_, s);
}

MxString::MxString(const MxString& other)
{
  ALERT("MxString::MxString(const MxString& other)", "Stub");
  delete [] string_;

  length_ = other.length_;

  unsigned int array_length = length_+1;
  string_ = new char[array_length];
  strcpy(string_, other.string_);
}

MxString::~MxString()
{
  ALERT("MxString::~MxString()", "Stub");
  delete [] string_;
}

const MxString &MxString::operator=(const MxString &s)
{
  ALERT("const MxString &MxString::operator=(const MxString &s)", "Stub");
  delete [] string_;

  length_ = s.length_;

  unsigned int array_length = length_+1;
  string_ = new char[array_length];
  strcpy(string_, s.string_);

  return *this;
}

const MxString& MxString::operator=(const char* s)
{
  ALERT("const MxString& MxString::operator=(const char* s)", "Stub");
  delete [] string_;

  length_ = static_cast<unsigned short>(strlen(s));

  unsigned int array_length = length_+1;
  string_ = new char[array_length];
  strcpy(string_, s);

  return *this;
}

BOOL MxString::operator==(const MxString &other) const
{
  ALERT("BOOL MxString::operator==(const MxString &other) const", "Stub");
  return (!strcmp(string_, other.string_));
}

const char &MxString::operator[](int i) const
{
  ALERT("const char &MxString::operator[](int i) const", "Stub");
  return string_[i];
}

MxString::operator const char *() const
{
  ALERT("MxString::operator const char *() const", "Stub");
  return string_;
}


