class MxVideoParam {
public:
    MxVideoParam();
    MxVideoParam(MxRect32&, MxPalette*, unsigned long, MxVideoParamFlags&);
    MxVideoParam(MxVideoParam&);
    ~MxVideoParam();

    MxVideoParam& operator=(const MxVideoParam&);

    void SetDeviceName(char*);
    
};
