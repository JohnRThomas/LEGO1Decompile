#ifndef MXSTREAMER_H
#define MXSTREAMER_H

#include "mxstreamcontroller.h"

class MxStreamer {
public:
    __declspec(dllexport) MxStreamer();

    __declspec(dllexport) MxStreamController* Open(const char*, unsigned short);
    __declspec(dllexport) long Close(const char*);
};

__declspec(dllexport) MxStreamer* Streamer();

#endif // MXSTREAMER_H
