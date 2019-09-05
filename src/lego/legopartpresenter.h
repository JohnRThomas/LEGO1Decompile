#ifndef LEGOPARTPRESENTER_H
#define LEGOPARTPRESENTER_H

class LegoPartPresenter {
public:
    __declspec(dllexport) LegoPartPresenter();

    __declspec(dllexport) static void configureLegoPartPresenter(int, int);
};

#endif // LEGOPARTPRESENTER_H
