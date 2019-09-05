#ifndef MXSTRING_H
#define MXSTRING_H

class MxString {
public:
    __declspec(dllexport) MxString(const MxString&);

    __declspec(dllexport) virtual ~MxString();

    __declspec(dllexport) const MxString& operator=(char const*);
};

#endif // MXSTRING_H
