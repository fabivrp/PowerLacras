#ifndef H_P_PLANTA_ELECTRICA_H
#define H_P_PLANTA_ELECTRICA_H
#include "edificios.h"

class Planta_electrica : public Edificios {


public:
    Planta_electrica(int pidra,int madera, int metal, int cant_max_construidos);
    int cuanto_produce();
    //~mina();
};



#endif //H_P_PLANTA_ELECTRICA_H