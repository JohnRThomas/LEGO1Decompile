#include "mxstring.h"

#include <string>

#include "custom/debug.h"

MxString::MxString() :
    string_(nullptr)
{
}

MxString::MxString(const MxString& s)
{
    delete [] string_;

    int str_length = strlen(s.string_)+1;
    string_ = new char[str_length];
    strcpy_s(string_, str_length, s.string_);
}

MxString::~MxString()
{
    delete [] string_;
}

const MxString& MxString::operator=(const char* s)
{
    delete [] string_;

    int str_length = strlen(s)+1;
    string_ = new char[str_length];
    strcpy_s(string_, str_length, s);

    return *this;
}


