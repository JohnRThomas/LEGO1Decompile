#ifndef MXSTREAMER_H
#define MXSTREAMER_H

#include "mxcore.h"
#include "mxstreamcontroller.h"

/**
 * @brief The MxStreamerUnknown class
 *
 * 0xC bytes in size
 */
class MxStreamerUnknown {
public:
    int unk0_;
    int unk4_;
    int unk8_;
};

/**
 * @brief The MxStreamer class
 *
 * 0x2C bytes in size
 */
class MxStreamer : public MxCore {
public:
    MxStreamer();

    MxStreamController* Open(const char*, unsigned short);
    long Close(const char*);

private:
    unsigned char unk8_;
    MxStreamerUnknown* unkC_;
    int unk10_;
    int unk14_;
    int unk18_;
    int unk1C_;
    int unk20_;
    int unk24_;
    int unk28_;
};

MxStreamer* Streamer();

#endif // MXSTREAMER_H
