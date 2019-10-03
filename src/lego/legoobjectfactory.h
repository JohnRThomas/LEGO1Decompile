#ifndef LEGOUNKNOWNMANAGER9_H
#define LEGOUNKNOWNMANAGER9_H

#include "mx/mxobjectfactory.h"

/**
 * @brief One of many unknown managers
 *
 * 0x1C8 bytes in size (0x190 + 0x38 from MxUnknownManager1)
 * Stored in MxOmni+1C
 * Allocated at ****3CE0
 */
class LegoObjectFactory : public MxObjectFactory
{
public:
    //
    LegoObjectFactory();

private:
    char unk_[0x190];
};

#endif // LEGOUNKNOWNMANAGER9_H
