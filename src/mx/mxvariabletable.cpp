#include "mxvariabletable.h"

#include "mxstring.h"

MxVariableTable::~MxVariableTable()
{
  ALERT("MxVariableTable::~MxVariableTable()", "Stub");
  delete [] table_;
}

void MxVariableTable::SetVariable(const char* key, const char* value)
{
  ALERT("void MxVariableTable::SetVariable(const char* key, const char* value)", "Stub (const char*, const char*)\n\nKey: \"%s\"\nValue: \"%s\"", key, value);

  MxString key_str = key;
  MxString val_str = value;
}

void MxVariableTable::SetVariable(MxVariable* variable)
{
  ALERT("void MxVariableTable::SetVariable(MxVariable* variable)", "Partial stub (MxVariable*)\n\nKey: %s", static_cast<const char*>(variable->key()));

  unsigned int letter_code = AddLetterCodesInKey(variable);

  unsigned int table_index = letter_code%table_size_;

  if (table_[table_index] == NULL) {
    if (unk1C_ == 0) {
      TableRef* ref = new TableRef();

      ref->variable_ = variable;
      ref->code_ = letter_code;
      ref->unk8_ = 0;
      ref->parent_ = table_;

      entry_count_++;

      // call 0x100B78E7
    } else {
      ALERT("void MxVariableTable::SetVariable(MxVariable* variable)", "Unhandled behavior (unk1C != 0");
    }
  } else {
    ALERT("void MxVariableTable::SetVariable(MxVariable* variable)", "Unhandled behavior (table_[table_index] != NULL");
  }
}

unsigned int MxVariableTable::AddLetterCodesInKey(MxVariable* v)
{
  ALERT("unsigned int MxVariableTable::AddLetterCodesInKey(MxVariable* v)", "Stub");
  unsigned int counter = 0;

  const MxString& variable_key = v->key();

  for (int i=0;variable_key[i]!=0;i++) {
    counter += static_cast<unsigned char>(variable_key[i]);
  }

  return counter;
}

const char* MxVariableTable::GetVariable(const char* key)
{
  ALERT("const char* MxVariableTable::GetVariable(const char* key)", "Stub\n\nRequested key: %s", key);

  return NULL;
}
