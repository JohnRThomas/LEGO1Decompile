#ifndef MXTICKLEMANAGER_H
#define MXTICKLEMANAGER_H

#include "mxcore.h"
#include "mxnotificationmanager.h"

/**
 * @brief Unknown class that's a subclass of MxTickleManager
 *
 * This class is 0xC bytes in size. Usually allocated at ****0A40. First two DWORDs appear to be vtable-related.
 */
class MxTickleUnknownSubclass1 {
public:
    MxTickleUnknownSubclass1();
    virtual ~MxTickleUnknownSubclass1();

private:
    int unk2_;
    int unk3_;
};

/**
 * @brief A very important class in LEGO Island that raises one very important question...
 *
 * ...what the fuck is a tickle?
 *
 * This class is 0x14 bytes in size. Usually allocated at ****0A28.
 */
class MxTickleManager : public MxCore {
public:
    __declspec(dllexport) MxTickleManager(unsigned char u);
    virtual ~MxTickleManager() override;

    virtual void unk_func1();

    virtual void unk_func2();

    virtual void unk_func3();

    virtual void unk_func4();

    virtual void unk_func5();

    virtual void unk_func6();

    void sub_100BDE80(MxNotificationManager*, int);

private:
    unsigned char unknown08_; // +8
    MxTickleUnknownSubclass1* unknown0C_; // +C
    int unknown10_; // +10
};

#endif // MXTICKLEMANAGER_H
