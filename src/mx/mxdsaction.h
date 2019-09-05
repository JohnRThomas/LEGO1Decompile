#ifndef MXDSACTION_H
#define MXDSACTION_H

#include "mxcore.h"

class MxDSActionBase : public MxCore {
public:
    MxDSActionBase();

protected:
    int unknown2_;

    short unknown3_;

    int unknown4_;
    
    int unknown5_;
    
    int unknown6_;
    
    int unknown7_;

    int unknown8_;

    unsigned short unknown9_;

    int unknown10_;
};

class MxDSSubclass {
public:
    MxDSSubclass();

    void Set(int value);

private:
    int unknown1_;
    int unknown2_;
    int unknown3_;
    int unknown4_;
    int unknown5_;
};

class MxDSAction : public MxDSActionBase {
public:
    __declspec(dllexport) MxDSAction();
    __declspec(dllexport) virtual ~MxDSAction();

private:
    int unknown11_; // esi+2C
    int unknown12_; // esi+30
    int unknown13_; // esi+34
    int unknown14_; // esi+38
    int unknown15_; // esi+3C
    MxDSSubclass unknown16_; // esi+40
    MxDSSubclass unknown21_; // esi+54
    MxDSSubclass unknown26_; // esi+68
    int unknown31_; // esi+7C
    short unknown32_; // esi+80
    int unknown33_; // esi+84
    int unknown34_; // esi+88
    int unknown35_; // esi+8C
    int unknown36_; // esi+90


};

__declspec(dllexport) long Start(class MxDSAction*);

#endif // MXDSACTION_H
