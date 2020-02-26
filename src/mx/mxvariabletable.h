#ifndef MXVARIABLETABLE_H
#define MXVARIABLETABLE_H

#include "custom/debug.h"
#include "mxvariable.h"

/**
 * @brief The MxVariableTable class
 *
 * 0x28 bytes in size
 */
class MxVariableTable : public MxCore {
public:
  MxVariableTable() {
    ALERT("MxVariableTable::MxVariableTable()", "Stub");
    entry_count_ = 0;
    // unkC_ = vtable something?
    table_size_ = 80;
    table_ = new TableRef*[table_size_];
    unk1C_ = 0;

    for (unsigned int i=0;i<table_size_;i++) {
      table_[i] = NULL;
    }
  }

  virtual ~MxVariableTable();

  void SetVariable(const char* key, const char* value);
  void SetVariable(MxVariable*);

  const char* GetVariable(const char*);

private:
  /**
     * @brief The MxVariableTableUnknownSubclass1 class
     *
     * 0x10 bytes in size
     */
  class TableRef {
  public:
    MxVariable* variable_;
    unsigned int code_;
    int unk8_;
    TableRef** parent_;
  };

  unsigned int AddLetterCodesInKey(MxVariable* v);

  int entry_count_;

  int unkC_;

  TableRef** table_;

  unsigned int table_size_;

  int unk18_;

  int unk1C_;

  int unk20_;

  int unk24_;
};

#endif // MXVARIABLETABLE_H
