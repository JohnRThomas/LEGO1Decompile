#ifndef MXDIRECTDRAW_H
#define MXDIRECTDRAW_H

#include "mxbool.h"
#include <WINDOWS.H>

class MxDirectDraw {
public:
  MxDirectDraw();

  static int GetPrimaryBitDepth();

  int Pause(int);
  int FlipToGDISurface();

private:
  // 10100C68
  static DWORD dd_surface_flags_;

};

#endif // MXDIRECTDRAW_H
