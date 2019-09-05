#include "mxdirectdraw.h"

#include <ddraw.h>

#include "custom/debug.h"

MxDirectDraw::MxDirectDraw()
{
    FIXME("Stub");
}

int MxDirectDraw::GetPrimaryBitDepth()
{
    /*const int bit_depth = 8;

    IDirectDraw* direct_draw;
    DDSURFACEDESC   ddsd;

    if (!DirectDrawCreate(NULL, &direct_draw, NULL))
    {
        memset(&ddsd, 0, sizeof(ddsd));
        ddsd.dwSize = sizeof(ddsd);

        direct_draw->GetDisplayMode(&ddsd);
        direct_draw->Release();
    }

    return 0;*/
    FIXME("Partial stub (always returns 32)");

    return 32;
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
