class MxRect32 {
public:
    MxRect32();

    const int& x();
    const int& y();
    const int& width();
    const int& height();

private:
    int x_;
    int y_;
    int width_;
    int height_;
};
