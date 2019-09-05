#ifndef MXATOMID_H
#define MXATOMID_H

enum LookupMode
{

};

class MxAtomId {
public:
    __declspec(dllexport) MxAtomId(char const*, enum LookupMode);
    __declspec(dllexport) ~MxAtomId();

    __declspec(dllexport) MxAtomId& operator=(const MxAtomId &);
};

#endif // MXATOMID_H
