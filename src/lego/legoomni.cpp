#include "legoomni.h"

#include "custom/debug.h"

LegoOmni::LegoOmni()
{
    Init();
}

LegoOmni::~LegoOmni()
{
    ALERT("Stub")
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
    ALERT("Stub")
}

int LegoOmni::GetCurrPathInfo(LegoPathBoundary**, int&)
{
    ALERT("Stub")

    return 0;
}

void LegoOmni::CreateBackgroundAudio()
{
    ALERT("Stub")
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
    MxOmni::Init();

    unknown68_ = 0;
    unknown6C_ = 0;
    input_manager_ = nullptr;
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
    game_state_ = nullptr;
    background_audio_manager_ = nullptr;
    unknown138_ = 1;
}

void LegoOmni::Destroy()
{
    ALERT("Stub")
}

int LegoOmni::Create(MxOmniCreateParam& param)
{


    ALERT("Stub\n\n")

    critical_section_.Lock();

    param.flags() |= 0xFE;
    param.flags() |= 0xEF;
    param.flags() |= 0xDF;
    param.flags() |= 0xFB;

    // Allocate 14 byte class
    //void* c00470A28 = malloc(0x14);

    // Allocate C byte class (MxCore derivative)
    //void* c00470A40 = malloc(0xC);

    // Place c00470A40 into c00470A28
    //*(&c00470A28 + 0xC) = &c00470A40;




    return 0;
}

void LegoOmni::unk_func03()
{
    ALERT("Stub")
}

void LegoOmni::unk_func04()
{
    ALERT("Stub")
}

LegoInputManager* InputManager()
{
    return LegoOmni::GetInstance()->GetInputManager();
}
