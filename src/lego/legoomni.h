#include "mx/mxatomid.h"

#include "legopathboundary.h"
#include "mx/mxomni.h"

class LegoOmni : public MxOmni {
public:
    __declspec(dllexport) LegoOmni();
    __declspec(dllexport) ~LegoOmni();

    __declspec(dllexport) static void CreateInstance();
    __declspec(dllexport) static LegoOmni* GetInstance();

    __declspec(dllexport) void RemoveWorld(const MxAtomId&, long);

    __declspec(dllexport) static int GetCurrPathInfo(LegoPathBoundary**, int&);

    __declspec(dllexport) void CreateBackgroundAudio();

private:
};

__declspec(dllexport) LegoOmni* Lego();
