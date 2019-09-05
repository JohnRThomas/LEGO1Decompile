#ifndef LEGONAVCONTROLLER_H
#define LEGONAVCONTROLLER_H

class LegoNavController {
public:
    LegoNavController();

    static void GetDefaults(int*, float*, float*, float*, float*, float*, float*, float*, float*, float*, unsigned char*);
    static void SetDefaults(int, float, float, float, float, float, float, float, float, float, unsigned char);

};

#endif // LEGONAVCONTROLLER_H
