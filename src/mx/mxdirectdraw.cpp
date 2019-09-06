#include "mxdirectdraw.h"

#include <ddraw.h>

#include "custom/debug.h"

MxDirectDraw::MxDirectDraw()
{
    FIXME("Stub");
}

int MxDirectDraw::GetPrimaryBitDepth()
{
    IDirectDraw* direct_draw;
    DDSURFACEDESC ddsd;

    if (!DirectDrawCreate(NULL, &direct_draw, NULL))
    {
        memset(&ddsd, 0, sizeof(ddsd));
        ddsd.dwSize = sizeof(ddsd);

        direct_draw->GetDisplayMode(&ddsd);

        direct_draw->Release();

        return ddsd.ddpfPixelFormat.dwRGBBitCount;
    }

    return 0;
}

int MxDirectDraw::Pause(int)
{
    FIXME("Stub");

    return 0;
}

int MxDirectDraw::FlipToGDISurface()
{
    FIXME("Stub");

    return 0;
}
