#ifndef LEGOOMNI_H
#define LEGOOMNI_H

#include "mx/mxatomid.h"

#include "legogamestate.h"
#include "legoinputmanager.h"
#include "legopathboundary.h"
#include "mx/mxbackgroundaudiomanager.h"
#include "mx/mxdsaction.h"
#include "mx/mxomni.h"

class LegoOmni : public MxOmni {
protected:
    int unknown68_;
    int unknown6C_;
    LegoInputManager* input_manager_;
    int unknown74_; // [esi+74]
    int unknown78_; // [esi+78]
    int unknown7C_; // [esi+7C]
    unsigned char unknown80_; // [esi+80]
    int unknown84_; // [esi+84]
    int unknown88_; // [esi+88]
    int unknown8C_; // [esi+8C]
    int unknown90_; // [esi+90]
    int unknown94_; // [esi+94]
    int unknown98_; // [esi+98]
    LegoGameState* game_state_; // [esi+9C]

    MxDSAction action_;

    MxBackgroundAudioManager* background_audio_manager_; // [esi+134]
    int unknown138_; // [esi+138]
    unsigned char unknown13C_; // [esi+13C]

    __declspec(dllexport) LegoOmni();
    __declspec(dllexport) virtual ~LegoOmni();
    virtual void Init();

public:
    virtual void unk_func03();
    virtual void unk_func04();

    virtual void Destroy();
    virtual int Create();

    __declspec(dllexport) static void CreateInstance();
    __declspec(dllexport) static LegoOmni* GetInstance();

    __declspec(dllexport) void RemoveWorld(const MxAtomId&, long);

    __declspec(dllexport) static int GetCurrPathInfo(LegoPathBoundary**, int&);

    __declspec(dllexport) void CreateBackgroundAudio();

    LegoInputManager* GetInputManager();

private:

};

__declspec(dllexport) LegoOmni* Lego();

__declspec(dllexport) LegoInputManager* InputManager();

#endif // LEGOOMNI_H
