#include "mx/mxatomid.h"

#include "legopathboundary.h"

class LegoOmni {
public:
    __declspec(dllexport) LegoOmni();
    __declspec(dllexport) ~LegoOmni();

    __declspec(dllexport) static void CreateInstance();
    __declspec(dllexport) static LegoOmni* GetInstance();

    __declspec(dllexport) void RemoveWorld(MxAtomId const &, long);

    __declspec(dllexport) static int GetCurrPathInfo(LegoPathBoundary**, int&);

    __declspec(dllexport) void CreateBackgroundAudio();
};

__declspec(dllexport) LegoOmni* Lego();
