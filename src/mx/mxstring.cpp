#include "mxstring.h"

#include <STRING.H>

#include "custom/debug.h"

MxString::MxString()
{
  PERFECT;

  string_ = new char[1];
  string_[0] = 0;
  length_ = 0;
}

MxString::MxString(const char *s)
{
  PARTIAL;

  length_ = static_cast<unsigned short>(strlen(s));

  unsigned int array_length = length_+1;
  string_ = new char[array_length];
  strcpy(string_, s);
}

MxString::MxString(const MxString& other)
{
  PARTIAL;

  delete [] string_;

  length_ = other.length_;

  unsigned int array_length = length_+1;
  string_ = new char[array_length];
  strcpy(string_, other.string_);
}

MxString::~MxString()
{
  PERFECT;

  delete [] string_;
}

const MxString &MxString::operator=(const MxString &s)
{
  PERFECT;

  if (s.string_ != string_) {
    delete [] string_;

    length_ = s.length_;

    unsigned int array_length = length_+1;
    string_ = new char[array_length];
    strcpy(string_, s.string_);
  }

  return *this;
}

const MxString& MxString::operator=(const char* s)
{
  NEARPERFECT;

  if (string_ != s) {
    delete [] string_;

    length_ = static_cast<unsigned short>(strlen(s));

    string_ = new char[length_+1];
    strcpy(string_, s);
  }

  return *this;
}

BOOL MxString::operator==(const MxString &other) const
{
  PARTIAL;
  return (!strcmp(string_, other.string_));
}

const char &MxString::operator[](int i) const
{
  PARTIAL;
  return string_[i];
}

MxString::operator const char *() const
{
  PARTIAL;
  return string_;
}


