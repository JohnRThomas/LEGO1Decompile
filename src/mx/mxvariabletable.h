#ifndef MXVARIABLETABLE_H
#define MXVARIABLETABLE_H

#include "custom/debug.h"
#include "mxvariable.h"

class MxVariableTableBase : public MxCore {
public:
  MxVariableTableBase() {
    // FIXME: Imperfect

    entry_count_ = 0;
  }

protected:
  // +8
  int entry_count_;

};

class MxVariableTableBase2 {
public:
  MxVariableTableBase2() {
    // FIXME: Imperfect

    table_size_ = 0x80;
    table_ = new TableRef*[table_size_];

    memset(table_, 0, table_size_ * sizeof(TableRef*));

    unk1C_ = 0;
  }

  virtual ~MxVariableTableBase2(){}

protected:
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

  TableRef** table_;

  unsigned int table_size_;

  int unk18_;

  int unk1C_;

};

/**
 * @brief The MxVariableTable class
 *
 * 0x28 bytes in size
 */
class MxVariableTable : public MxVariableTableBase, public MxVariableTableBase2 {
public:
  virtual ~MxVariableTable();

  void SetVariable(const char* key, const char* value);
  void SetVariable(MxVariable*);

  const char* GetVariable(const char*);

private:
  unsigned int AddLetterCodesInKey(MxVariable* v);

  int unk20_;

  int unk24_;
};

#endif // MXVARIABLETABLE_H
