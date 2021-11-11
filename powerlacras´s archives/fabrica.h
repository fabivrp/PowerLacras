#ifndef H_P_FABRICA_H
#define H_P_FABRICA_H
#include "edificios.h"

class Fabrica : public Edificios {


public:
    Fabrica(string nombre ,int pidra,int madera, int metal, int cant_max_construidos);

    /*
    *PRE:
    *POST:Devuelve la cantidad de elementos que produce la fábrica
    */
    int cuanto_produce();

    /*
    *PRE:
    *POST: Devuelve el tipo de elemento que produce la fábrica
    */
    const string tipo_produccion();
    //~mina();
};



#endif //H_P_FABRICA_H