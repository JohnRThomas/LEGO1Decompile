#ifndef LEGOINPUTMANAGER_H
#define LEGOINPUTMANAGER_H

#include "mx/mxcore.h"
#include "mx/mxpresenter.h"

enum NotificationId
{

};

/**
 * @brief The LegoInputManager class
 *
 * 0x338 bytes in size.
 */
class LegoInputManager : public MxPresenter {
public:
    __declspec(dllexport) LegoInputManager();

    __declspec(dllexport) void Register(MxCore*);
    __declspec(dllexport) void UnRegister(MxCore*);

    __declspec(dllexport) void QueueEvent(NotificationId, unsigned char, long, long, unsigned char);

private:
    // +40
    MxCriticalSection input_cs_;

    int unk5C_;
    int unk60_;
    int unk64_;
    int unk68_;
    int unk6C_;
    int unk70_;
    int unk74_;
    int unk78_;
    int unk7C_;
    unsigned char unk80_;
    unsigned char unk81_;
    int unk84_;
    unsigned char unk88_;
    int unk8C_;
    int unk90_;
    unsigned char unk94_;
    int unk98_;
    int unk9C_;

    unsigned char unkA0_[0xF4];

    int unk194_;
    int unk198_;
    int unk19C_;

    unsigned char unk1A0_[0x194];

    int unk334_;
};

#endif // LEGOINPUTMANAGER_H
