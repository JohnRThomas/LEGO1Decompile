#include "mxstring.h"

#include <string>

#include "custom/debug.h"

MxString::MxString()
{
    string_ = new char[1];
    string_[0] = 0;
    length_ = 0;
}

MxString::MxString(const char *s)
{
    length_ = static_cast<unsigned short>(strlen(s));

    unsigned int array_length = length_+1;
    string_ = new char[array_length];
    strcpy_s(string_, array_length, s);
}

MxString::MxString(const MxString& other)
{
    delete [] string_;

    length_ = other.length_;

    unsigned int array_length = length_+1;
    string_ = new char[array_length];
    strcpy_s(string_, array_length, other.string_);
}

MxString::~MxString()
{
    delete [] string_;
}

const MxString& MxString::operator=(const char* s)
{
    delete [] string_;

    length_ = static_cast<unsigned short>(strlen(s));

    unsigned int array_length = length_+1;
    string_ = new char[array_length];
    strcpy_s(string_, array_length, s);

    return *this;
}

bool MxString::operator==(const MxString &other) const
{
    return (!strcmp(string_, other.string_));
}

const char &MxString::operator[](int i) const
{
    return string_[i];
}

MxString::operator const char *() const
{
    return string_;
}


