#ifndef VIEWMANAGER_H
#define VIEWMANAGER_H

#include "viewroi.h"

class ViewManager {
public:
    __declspec(dllexport) ViewManager();

    __declspec(dllexport) void RemoveAll(ViewROI*);
};

#endif // VIEWMANAGER_H
