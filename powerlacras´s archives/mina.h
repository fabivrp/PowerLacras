#ifndef H_P_MINA_H
#define H_P_MINA_H
#include "edificios.h"

class Mina : public Edificios {


public:
    Mina(int pidra,int madera, int metal, int cant_max_construidos);
    int cuanto_produce();
    //~mina();
};



#endif //H_P_MINA_H