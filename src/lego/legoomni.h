#ifndef LEGOOMNI_H
#define LEGOOMNI_H

#include "mx/mxatomid.h"

#include "legopathboundary.h"
#include "mx/mxdsaction.h"
#include "mx/mxomni.h"

class LegoOmni : public MxOmni {
public:
    __declspec(dllexport) LegoOmni();
    __declspec(dllexport) ~LegoOmni();

    __declspec(dllexport) static void CreateInstance();
    __declspec(dllexport) static LegoOmni* GetInstance();

    __declspec(dllexport) void RemoveWorld(const MxAtomId&, long);

    __declspec(dllexport) static int GetCurrPathInfo(LegoPathBoundary**, int&);

    __declspec(dllexport) void CreateBackgroundAudio();

private:
    int unknown1_; // [esi+68]
    int unknown2_; // [esi+6C]
    int unknown3_; // [esi+70]
    int unknown4_; // [esi+74]
    int unknown5_; // [esi+78]
    int unknown6_; // [esi+7C]
    unsigned char unknown7_; // [esi+80]
    int unknown8_; // [esi+84]
    int unknown9_; // [esi+88]
    int unknown10_; // [esi+8C]
    int unknown11_; // [esi+90]
    int unknown12_; // [esi+94]
    int unknown13_; // [esi+98]
    int unknown14_; // [esi+9C]

    MxDSAction action_;

    int unknown15_; // [esi+134]
    int unknown16_; // [esi+138]
    unsigned char unknown17_; // [esi+13C]
};

__declspec(dllexport) LegoOmni* Lego();

#endif // LEGOOMNI_H
