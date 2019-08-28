class LegoVideoManager {
public:
    LegoVideoManager();

    void MoveCursor(int, int);
    void EnableFullScreenMovie(unsigned char, unsigned char);

    int EnableRMDevice();
    int DisableRMDevice();
};

LegoVideoManager* VideoManager();
