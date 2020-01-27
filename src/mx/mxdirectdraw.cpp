#include "mxdirectdraw.h"

#include <DDRAW.H>

#include "custom/debug.h"

DWORD MxDirectDraw::dd_surface_flags_;

MxDirectDraw::MxDirectDraw()
{
  ALERT("MxDirectDraw::MxDirectDraw()", "Stub");
}

int MxDirectDraw::GetPrimaryBitDepth()
{
  IDirectDraw* direct_draw;
  DDSURFACEDESC ddsd;

  int bit_depth = 8;

  if (!DirectDrawCreate(NULL, &direct_draw, NULL))
  {
    memset(&ddsd, 0, sizeof(ddsd));
    ddsd.dwSize = sizeof(ddsd);

    direct_draw->GetDisplayMode(&ddsd);

    bit_depth = ddsd.ddpfPixelFormat.dwRGBBitCount;

    dd_surface_flags_ = (ddsd.ddpfPixelFormat.dwFlags & 0x20) >> 5;

    direct_draw->Release();

  }

  return bit_depth;
}

int MxDirectDraw::Pause(int)
{
  ALERT("int MxDirectDraw::Pause(int)", "Stub");

  return 0;
}

int MxDirectDraw::FlipToGDISurface()
{
  ALERT("int MxDirectDraw::FlipToGDISurface()", "Stub");

  return 0;
}
