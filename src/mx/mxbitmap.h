class MxBitmap {
public:
    MxBitmap();
    virtual ~MxBitmap();

    long Read(const char *);
    MxPalette* CreatePalette();
};
