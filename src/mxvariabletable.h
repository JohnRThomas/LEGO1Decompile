class MxVariableTable {
public:
    MxVariableTable();

    void SetVariable(const char*, const char*);
    void SetVariable(MxVariable*);

    const char* GetVariable(const char*);
};

MxVariableTable* VariableTable();
