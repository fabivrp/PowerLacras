#ifndef H_P_ASERRADERO_H
#define H_P_ASERRADERO_H
#include "edificios.h"

class Aserradero : public Edificios {


public:
    Aserradero(int pidra,int madera, int metal, int cant_max_construidos);
    int cuanto_produce();
    //~mina();
};

Mira lo que se avecina a la vuelta de la esquina, viene diego rumbeando

#endif //H_P_ASERRADERO_H