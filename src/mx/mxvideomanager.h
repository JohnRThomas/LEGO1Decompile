#ifndef MXVIDEOMANAGER_H
#define MXVIDEOMANAGER_H

#include "mxcore.h"
#include "mxpalette.h"
#include "mxrect32.h"
#include "mxvideoparam.h"
#include "unknown/mxunknownmanager6.h"

/**
 * @brief The MxVideoManager class
 *
 * 0x64 bytes in size
 */
class MxVideoManager : public MxUnknownManager6 {
public:
    // 100BE1F0
    MxVideoManager();

    virtual ~MxVideoManager();

    // 100BE320
    void Init();

    void InvalidateRect(MxRect32&);

    virtual long RealizePalette(MxPalette*);

private:
    // +2C
    MxVideoParam video_param_;

    int unk50_;
    int unk54_;
    int unk58_;
    int unk5C_;
    unsigned char unk60_;
};

#endif // MXVIDEOMANAGER_H
