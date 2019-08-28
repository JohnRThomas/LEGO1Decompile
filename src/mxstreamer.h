class MxStreamer {
public:
    MxStreamer();

    MxStreamController* Open(const char*, unsigned short);
    long Close(const char*);
};

MxStreamer* Streamer();
