#include "mxcore.h"

class MxDSActionUnknownStruct1 : public MxCore {
public:
    MxDSActionUnknownStruct1();

private:
    int unknown2_;

    short unknown3_;

    int unknown4_;
    
    int unknown5_;
    
    int unknown6_;
    
    int unknown7_;

    int unknown8_;

    short unknown9_;

    int unknown10_;
};

class MxDSAction : public MxDSActionUnknownStruct1 {
public:
    __declspec(dllexport) MxDSAction();
    __declspec(dllexport) virtual ~MxDSAction();

private:
    MxDSActionUnknownStruct1 unknown11_;


};

__declspec(dllexport) long Start(class MxDSAction*);
