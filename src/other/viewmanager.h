#include "viewroi.h"

class ViewManager {
public:
    __declspec(dllexport) ViewManager();

    __declspec(dllexport) void RemoveAll(ViewROI*);
};
