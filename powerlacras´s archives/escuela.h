#ifndef H_P_ESCUELA_H
#define H_P_ESCUELA_H
#include "edificios.h"

class Escuela : public Edificios {


public:
    Escuela(string nombre ,int pidra,int madera, int metal, int cant_max_construidos);

    /*
    *PRE:
    *POST:
    */
    int cuanto_produce();

    /*
    *PRE:
    *POST:
    */
    const string tipo_produccion();
    //~mina();
};



#endif //H_P_ESCUELA_H