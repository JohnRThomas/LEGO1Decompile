#include "mxvariable.h"

class MxVariableTable {
public:
    __declspec(dllexport) MxVariableTable();

    __declspec(dllexport) void SetVariable(const char*, const char*);
    __declspec(dllexport) void SetVariable(MxVariable*);

    __declspec(dllexport) const char* GetVariable(const char*);
};

__declspec(dllexport) MxVariableTable* VariableTable();
