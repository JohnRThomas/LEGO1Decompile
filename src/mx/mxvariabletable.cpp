#include "mxvariabletable.h"

#include "mxstring.h"

MxVariableTable::~MxVariableTable()
{
  PARTIAL;
  delete [] table_;
}

void MxVariableTable::SetVariable(const char* key, const char* value)
{
  PARTIAL;

  MxString key_str = key;
  MxString val_str = value;
}

void MxVariableTable::SetVariable(MxVariable* variable)
{
  PARTIAL;

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
      STUB;
    }
  } else {
    STUB;
  }
}

unsigned int MxVariableTable::AddLetterCodesInKey(MxVariable* v)
{
  PARTIAL;

  unsigned int counter = 0;

  const MxString& variable_key = v->key();

  for (int i=0;variable_key[i]!=0;i++) {
    counter += static_cast<unsigned char>(variable_key[i]);
  }

  return counter;
}

const char* MxVariableTable::GetVariable(const char* key)
{
  STUB;

  return NULL;
}
