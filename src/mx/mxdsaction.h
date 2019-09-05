class MxDSActionUnknownStruct1 {
public:
    MxDSActionUnknownStruct1();

private:
    MxCore core_;

    DWORD unknown1_;

    short unknown2_;

    DWORD unknown3_;
    
    DWORD unknown4_;
    
    DWORD unknown5_;
    
    DWORD unknown6_;

    DWORD unknown7_;

    short unknown8_;

    DWORD unknown9_;
}

class MxDSAction {
public:
    __declspec(dllexport) MxDSAction();
    __declspec(dllexport) virtual ~MxDSAction();

private:
    MxDSActionUnknownStruct1 unknown1_;
};

__declspec(dllexport) long Start(class MxDSAction*);
