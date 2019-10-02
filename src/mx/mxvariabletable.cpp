#include "mxvariabletable.h"

#include "custom/debug.h"
#include "mxstring.h"

MxVariableTable::MxVariableTable()
{
    ALERT("Stub");
}

void MxVariableTable::SetVariable(const char* key, const char* value)
{
    ALERT("Stub (const char*, const char*)\n\nKey: \"%s\"\nValue: \"%s\"", key, value);

    MxString key_str = key;
    MxString val_str = value;
}

void MxVariableTable::SetVariable(MxVariable*)
{
    ALERT("Stub (MxVariable*)");
}

const char* MxVariableTable::GetVariable(const char* key)
{
    ALERT("Stub\n\nRequested key: %s", key);

    return nullptr;
}
