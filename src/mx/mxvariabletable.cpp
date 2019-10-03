#include "mxvariabletable.h"

#include "custom/debug.h"
#include "mxstring.h"

MxVariableTable::MxVariableTable()
{
    entry_count_ = 0;
    // unkC_ = vtable something?
    table_size_ = 80;
    table_ = new TableRef*[table_size_];
    unk1C_ = 0;

    for (unsigned int i=0;i<table_size_;i++) {
        table_[i] = nullptr;
    }
}

MxVariableTable::~MxVariableTable()
{
    delete [] table_;
}

void MxVariableTable::SetVariable(const char* key, const char* value)
{
    ALERT("Stub (const char*, const char*)\n\nKey: \"%s\"\nValue: \"%s\"", key, value)

    MxString key_str = key;
    MxString val_str = value;
}

void MxVariableTable::SetVariable(MxVariable* variable)
{
    ALERT("Partial stub (MxVariable*)\n\nKey: %s", static_cast<const char*>(variable->key()))

    unsigned int letter_code = AddLetterCodesInKey(variable);

    unsigned int table_index = letter_code%table_size_;

    if (table_[table_index] == nullptr) {
        if (unk1C_ == 0) {
            TableRef* ref = new TableRef();

            ref->variable_ = variable;
            ref->code_ = letter_code;
            ref->unk8_ = 0;
            ref->parent_ = table_;

            entry_count_++;

            // call 0x100B78E7
        } else {
            ALERT("Unhandled behavior (unk1C != 0")
        }
    } else {
        ALERT("Unhandled behavior (table_[table_index] != nullptr")
    }
}

unsigned int MxVariableTable::AddLetterCodesInKey(MxVariable* v)
{
    unsigned int counter = 0;

    const MxString& variable_key = v->key();

    for (int i=0;variable_key[i]!=0;i++) {
        counter += static_cast<unsigned char>(variable_key[i]);
    }

    return counter;
}

const char* MxVariableTable::GetVariable(const char* key)
{
    ALERT("Stub\n\nRequested key: %s", key)

    return nullptr;
}
