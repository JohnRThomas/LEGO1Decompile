class MxVideoManager {
public:
    MxVideoManager();

    void InvalidateRect(MxRect32&);

    virtual long RealizePalette(MxPalette*);
};
