#ifndef MXCORE_H
#define MXCORE_H

#include "mxparam.h"

/**
 * @brief The MxCore class
 *
 * A base class for several objects in LEGO Island. I have a theory this allows for signal/slot mechanism like a QObject
 * and/or has virtual functions useful for overriding.
 *
 * 0x8 bytes in size.
 */
class MxCore {
public:
    MxCore();
    virtual ~MxCore();

    virtual long Notify(MxParam&);

private:
    static int core_count_;

    int id_;

};

#endif // MXCORE_H
