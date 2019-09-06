#include "legoomni.h"

#include "custom/debug.h"

LegoOmni::LegoOmni()
{
    unknown1_ = 0;
    unknown2_ = 0;
    unknown3_ = 0;
    unknown4_ = 0;
    unknown5_ = 0;
    unknown6_ = 0;
    unknown7_ = 0;
    unknown9_ = 0;
    unknown10_ = 0;
    unknown11_ = 0;
    unknown12_ = 0;
    unknown13_ = 0;
    unknown14_ = 0;
    unknown15_ = 0;
    unknown16_ = 0;
    unknown17_ = 1;
}

LegoOmni::~LegoOmni()
{
    FIXME("Stub");
}

void LegoOmni::CreateInstance()
{
    DestroyInstance();
    SetInstance(new LegoOmni());
}

LegoOmni* LegoOmni::GetInstance()
{
    return static_cast<LegoOmni*>(MxOmni::GetInstance());
}

void LegoOmni::RemoveWorld(const MxAtomId &, long)
{
    FIXME("Stub");
}

int LegoOmni::GetCurrPathInfo(LegoPathBoundary**, int&)
{
    FIXME("Stub");

    return 0;
}

void LegoOmni::CreateBackgroundAudio()
{
    FIXME("Stub");
}

LegoOmni* Lego()
{
    return LegoOmni::GetInstance();
}

void LegoOmni::unk_func01(){
    FIXME("Stub");
}

void LegoOmni::unk_func02(){
    FIXME("Stub");
}

void LegoOmni::unk_func03(){
    FIXME("Stub");
}

void LegoOmni::unk_func04(){
    FIXME("Stub");
}

int LegoOmni::unk_func05(){
    FIXME("Stub");

    return 0;
}
