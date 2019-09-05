#ifndef LEGOANIMATIONMANAGER_H
#define LEGOANIMATIONMANAGER_H

class LegoAnimationManager {
public:
    __declspec(dllexport) LegoAnimationManager();

    __declspec(dllexport) static void configureLegoAnimationManager(int);
    __declspec(dllexport) static void configureLegoWorldPresenter(int);


};

#endif // LEGOANIMATIONMANAGER_H
