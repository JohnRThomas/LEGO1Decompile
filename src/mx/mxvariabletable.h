#ifndef MXVARIABLETABLE_H
#define MXVARIABLETABLE_H

#include "mxvariable.h"

class MxVariableTable {
public:
    __declspec(dllexport) MxVariableTable();

    __declspec(dllexport) void SetVariable(const char* key, const char* value);
    __declspec(dllexport) void SetVariable(MxVariable*);

    __declspec(dllexport) const char* GetVariable(const char*);
};

#endif // MXVARIABLETABLE_H
