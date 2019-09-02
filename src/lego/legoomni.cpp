#include "legoomni.h"

#include "custom/debug.h"

LegoOmni::LegoOmni()
{
    FIXME("Stub");
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
