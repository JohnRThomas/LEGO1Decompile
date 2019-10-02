#ifndef MXVARIABLETABLE_H
#define MXVARIABLETABLE_H

#include "mxvariable.h"

/**
 * @brief The MxVariableTable class
 *
 * 0x28 bytes in size
 */
class MxVariableTable : public MxCore {
public:
    MxVariableTable();
    virtual ~MxVariableTable() override;

    __declspec(dllexport) void SetVariable(const char* key, const char* value);
    __declspec(dllexport) void SetVariable(MxVariable*);

    __declspec(dllexport) const char* GetVariable(const char*);

private:
    /**
     * @brief The MxVariableTableUnknownSubclass1 class
     *
     * 0x10 bytes in size
     */
    class TableRef {
    public:
        MxVariable* unk0_;
        unsigned int unk4_;
        int unk8_;
        TableRef** parent_;
    };

    unsigned int AddLetterCodesInKey(MxVariable* v);

    int unk8_;

    int unkC_;

    TableRef** table_;

    unsigned int table_size_;

    int unk18_;

    int unk1C_;

    int unk20_;

    int unk24_;
};

#endif // MXVARIABLETABLE_H
