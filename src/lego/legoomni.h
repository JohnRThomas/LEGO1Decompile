#ifndef LEGOOMNI_H
#define LEGOOMNI_H

#include "mx/mxatomid.h"

#include "legogamestate.h"
#include "legoinputmanager.h"
#include "legopathboundary.h"
#include "legosoundmanager.h"
#include "legovideomanager.h"
#include "mx/mxbackgroundaudiomanager.h"
#include "mx/mxdsaction.h"
#include "mx/mxomni.h"
#include "mx/mxomnicreateparam.h"
#include "mx/mxtransitionmanager.h"

/**
 * @brief The LegoUnknownManager2 class
 *
 * 0x14 bytes in size. Some other unknown manager. Accessible at LegoOmni+6C, alloc'd at ****3480
 */
class LegoUnknownManager2 {
public:
    LegoUnknownManager2();

private:
    char unk_[0x14];
};

/**
 * @brief The LegoUnknownManager3 class
 *
 * Some other unknown manager.
 *
 * 0x24 bytes in size.
 * Accessible at LegoOmni+74,
 * alloc'd at ****3B00
 */
class LegoUnknownManager3 {
public:
    LegoUnknownManager3();

private:
    char unk_[0x24];
};

/**
 * @brief The LegoUnknownManager4 class
 *
 * Some other unknown manager.
 *
 * 0x8 bytes in size.
 * Accessible at LegoOmni+8C
 * Alloc'd at ****34D8
 */
class LegoUnknownManager4 {
public:
    LegoUnknownManager4();

private:
    char unk_[0x8];
};

/**
 * @brief The LegoUnknownManager5 class
 *
 * Some other unknown manager.
 *
 * 0x2C bytes in size.
 * Accessible at LegoOmni+90
 * Alloc'd at ****3500
 */
class LegoUnknownManager5 {
public:
    LegoUnknownManager5();

private:
    char unk_[0x2C];
};

/**
 * @brief The LegoUnknownManager6 class
 *
 * Some other unknown manager.
 *
 * 0x500 bytes in size.
 * Accessible at LegoOmni+94
 * Alloc'd at 009F1060
 */
class LegoUnknownManager6 {
public:
    LegoUnknownManager6();

private:
    char unk_[0x500];
};

/**
 * @brief The LegoUnknownManager7 class
 *
 * Some other unknown manager.
 *
 * 0x30 bytes in size.
 * Accessible at LegoOmni+98
 * Alloc'd at ****33E0
 */
class LegoUnknownManager7 {
public:
    LegoUnknownManager7();

private:
    char unk_[0x30];
};

/**
 * @brief The LegoUnknownManager8 class
 *
 * Some other unknown manager.
 *
 * 0x18 bytes in size.
 * Accessible at LegoOmni+78
 * Alloc'd at ****4B58
 */
class LegoUnknownManager8 {
public:
    LegoUnknownManager8();

private:
    char unk_[0x18];
};

/**
 * @brief The LegoOmni class
 *
 * The central game controller. Its members are largely "subcontrollers" handling different aspects of the game.
 *
 * It is 0x140 bytes in size.
 */
class LegoOmni : public MxOmni {
protected:
    int unknown68_; // [esi+68]
    LegoUnknownManager2* unknown6C_; // [esi+6C]
    LegoInputManager* input_manager_; // [esi+70]
    LegoUnknownManager3* unknown74_; // [esi+74]
    LegoUnknownManager8* unknown78_; // [esi+78]
    int unknown7C_; // [esi+7C]
    unsigned char unknown80_; // [esi+80]
    int unknown84_; // [esi+84]
    int unknown88_; // [esi+88]
    LegoUnknownManager4* unknown8C_; // [esi+8C]
    LegoUnknownManager5* unknown90_; // [esi+90]
    LegoUnknownManager6* unknown94_; // [esi+94]
    LegoUnknownManager7* unknown98_; // [esi+98]
    LegoGameState* game_state_; // [esi+9C]

    MxDSAction action_;

    MxBackgroundAudioManager* background_audio_manager_; // [esi+134]
    MxTransitionManager* transition_manager_; // [esi+138]
    unsigned char unknown13C_; // [esi+13C]

    __declspec(dllexport) LegoOmni();
    __declspec(dllexport) virtual ~LegoOmni() override;
    virtual void Init() override;

public:
    virtual void unk_func03();
    virtual void unk_func04();

    virtual void Destroy();
    virtual int Create(MxOmniCreateParam &param);


    __declspec(dllexport) static void CreateInstance();
    __declspec(dllexport) static LegoOmni* GetInstance();

    __declspec(dllexport) void RemoveWorld(const MxAtomId&, long);

    __declspec(dllexport) static int GetCurrPathInfo(LegoPathBoundary**, int&);

    __declspec(dllexport) void CreateBackgroundAudio();

    LegoInputManager* GetInputManager();

    LegoVideoManager* GetVideoManager();

private:

};

__declspec(dllexport) LegoOmni* Lego();

__declspec(dllexport) LegoInputManager* InputManager();

__declspec(dllexport) LegoSoundManager* SoundManager();

__declspec(dllexport) LegoVideoManager* VideoManager();

#endif // LEGOOMNI_H
