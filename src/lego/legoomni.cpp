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

LegoVideoManager *LegoOmni::GetVideoManager()
{
    return static_cast<LegoVideoManager*>(video_manager_);
}

LegoOmni* Lego()
{
    return LegoOmni::GetInstance();
}

void LegoOmni::Init(){
    MxOmni::Init();

    unknown68_ = 0;
    unknown6C_ = nullptr;
    input_manager_ = nullptr;
    unknown74_ = nullptr;
    unknown78_ = nullptr;
    unknown7C_ = 0;
    unknown80_ = 0;
    unknown88_ = 0;
    unknown8C_ = nullptr;
    unknown90_ = nullptr;
    unknown94_ = nullptr;
    unknown98_ = nullptr;
    game_state_ = nullptr;
    background_audio_manager_ = nullptr;
    transition_manager_ = nullptr;
    unknown13C_ = 1;
}

void LegoOmni::Destroy()
{
    ALERT("Stub")
}

int LegoOmni::Create(MxOmniCreateParam& param)
{
    ALERT("Stub\n\n")

    critical_section_.Lock();

    // FIXME: Seems like these flags are used to modify the behavior of MxOmni::Create called later on. This may help
    //        determine their meaning.
    param.flags() |= 0xFE;
    param.flags() |= 0xEF;
    param.flags() |= 0xDF;
    param.flags() |= 0xFB;

    tickle_manager_ = new MxTickleManager();

    MxOmni::Create();

    unknown4_ = new MxUnknownManager1();

    sound_manager_ = new LegoSoundManager();

    video_manager_ = new LegoVideoManager();

    input_manager_ = new LegoInputManager();

    unknown6C_ = new LegoUnknownManager2();

    unknown74_ = new LegoUnknownManager3();

    // FIXME: We skipped a LOT of asm here

    unknown8C_ = new LegoUnknownManager4();

    unknown90_ = new LegoUnknownManager5();

    unknown94_ = new LegoUnknownManager6();

    unknown98_ = new LegoUnknownManager7();

    game_state_ = new LegoGameState();

    unknown78_ = new LegoUnknownManager8();

    variable_table_->SetVariable(new MxVariable("VISIBILITY", ""));
    variable_table_->SetVariable(new MxVariable("CAMERA_LOCATION", ""));
    variable_table_->SetVariable(new MxVariable("CURSOR", ""));
    variable_table_->SetVariable(new MxVariable("WHO_AM_I", ""));

    // Call 100528E0
    // Call 1001A700
    // Call 1005A5F0

    background_audio_manager_ = new MxBackgroundAudioManager();

    transition_manager_ = new MxTransitionManager();

    // Run some kind of virtual function on LegoUnknownManager9

    // Run some function on `notification_manager_`

    // call 0x1003EF40

    // Run function on LegoGameState

    // call 0x100598C0



    critical_section_.Unlock();

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

LegoSoundManager *SoundManager()
{
    return static_cast<LegoSoundManager*>(LegoOmni::GetInstance()->GetSoundManager());
}

LegoVideoManager* VideoManager()
{
    return LegoOmni::GetInstance()->GetVideoManager();
}

LegoUnknownManager2::LegoUnknownManager2()
{
    ALERT("Stub\n\nSize: %x", sizeof(LegoUnknownManager2))
}

LegoUnknownManager8::LegoUnknownManager8()
{
    ALERT("Stub (constructor is in the asm for LegoOmni::Create())\n\nSize: %x", sizeof(LegoUnknownManager8))
}

LegoUnknownManager3::LegoUnknownManager3()
{
    ALERT("Stub\n\nSize: %x", sizeof(LegoUnknownManager3))
}

LegoUnknownManager4::LegoUnknownManager4()
{
    ALERT("Stub\n\nSize: %x", sizeof(LegoUnknownManager4))
}

LegoUnknownManager5::LegoUnknownManager5()
{
    ALERT("Stub\n\nSize: %x", sizeof(LegoUnknownManager5))
}

LegoUnknownManager6::LegoUnknownManager6()
{
    ALERT("Stub\n\nSize: %x", sizeof(LegoUnknownManager6))
}

LegoUnknownManager7::LegoUnknownManager7()
{
    ALERT("Stub\n\nSize: %x", sizeof(LegoUnknownManager7))
}
