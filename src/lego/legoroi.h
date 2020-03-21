#ifndef LEGOROI_H
#define LEGOROI_H

class LegoROI {
public:
  LegoROI();

  static void configureLegoROI(int);

  void SetDisplayBB(int);
};

LegoROI* PickROI(long, long);

#endif // LEGOROI_H
