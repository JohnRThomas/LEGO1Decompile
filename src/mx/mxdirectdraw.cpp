#include "mxdirectdraw.h"

#include <DDRAW.H>

#include "custom/debug.h"

MxDirectDraw::MxDirectDraw()
{
  ALERT("MxDirectDraw::MxDirectDraw()", "Stub");
}

int MxDirectDraw::GetPrimaryBitDepth()
{
  ALERT("int MxDirectDraw::GetPrimaryBitDepth()", "Stub");
  IDirectDraw* direct_draw;
  DDSURFACEDESC ddsd;

  if (!DirectDrawCreate(NULL, &direct_draw, NULL))
  {
    memset(&ddsd, 0, sizeof(ddsd));
    ddsd.dwSize = sizeof(ddsd);

    direct_draw->GetDisplayMode(&ddsd);

    direct_draw->Release();

    return static_cast<int>(ddsd.ddpfPixelFormat.dwRGBBitCount);
  }

  return 0;
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
