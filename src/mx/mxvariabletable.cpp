#include "mxvariabletable.h"

#include "custom/debug.h"
#include "mxstring.h"

MxVariableTable::MxVariableTable()
{
    FIXME("Stub");
}

void MxVariableTable::SetVariable(const char* key, const char* value)
{
    char buffer[100];
    sprintf_s(buffer, "Stub (const char*, const char*)\n\nKey: \"%s\"\nValue: \"%s\"", key, value);
    FIXME(buffer);

    MxString key_str = key;
    MxString val_str = value;


}

void MxVariableTable::SetVariable(MxVariable*)
{
    FIXME("Stub (MxVariable*)");
}

const char* MxVariableTable::GetVariable(const char*)
{
    FIXME("Stub");

    return nullptr;
}
