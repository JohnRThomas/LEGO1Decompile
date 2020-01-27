#ifndef MXPALETTE_H
#define MXPALETTE_H

class MxPalette {
public:
  MxPalette();

  void Detach();

  unsigned char operator==(MxPalette&);
};

#endif // MXPALETTE_H
