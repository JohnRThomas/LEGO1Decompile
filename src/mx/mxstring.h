#ifndef MXSTRING_H
#define MXSTRING_H

class MxString {
public:
    MxString();

    __declspec(dllexport) MxString(const MxString&);

    __declspec(dllexport) virtual ~MxString();

    __declspec(dllexport) const MxString& operator=(const char* s);

private:
    char* string_;
};

#endif // MXSTRING_H
