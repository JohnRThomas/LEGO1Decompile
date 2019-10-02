#include "legoomni.h"

#include "custom/debug.h"

LegoOmni::LegoOmni()
{
    unknown68_ = 0;
    unknown6C_ = 0;
    input_manager_ = 0;
    unknown74_ = 0;
    unknown78_ = 0;
    unknown7C_ = 0;
    unknown80_ = 0;
    unknown84_ = 0;
    unknown88_ = 0;
    unknown8C_ = 0;
    unknown90_ = 0;
    unknown94_ = 0;
    unknown98_ = 0;
    game_state_ = 0;
    background_audio_manager_ = 0;
    unknown138_ = 1;
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

LegoInputManager *LegoOmni::GetInputManager()
{
    return input_manager_;
}

LegoOmni* Lego()
{
    return LegoOmni::GetInstance();
}

void LegoOmni::Init(){
    FIXME("Stub");
}

void LegoOmni::unk_func03()
{
    FIXME("Stub");
}

void LegoOmni::unk_func04()
{
    FIXME("Stub");
}

void LegoOmni::Destroy()
{
    FIXME("Stub");
}

int LegoOmni::Create()
{
    FIXME("Stub");

    return 0;
}

LegoInputManager* InputManager()
{
    return LegoOmni::GetInstance()->GetInputManager();
}
