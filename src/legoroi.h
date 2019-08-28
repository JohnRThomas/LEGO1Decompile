class LegoROI {
public:
    LegoROI();

    static void configureLegoROI(int);

    void SetDisplayBB(int);
};

LegoROI* PickROI(long, long);
