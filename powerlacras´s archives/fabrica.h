#ifndef H_P_FABRICA_H
#define H_P_FABRICA_H
#include "edificios.h"

class Fabrica : public Edificios {


public:
    Fabrica(string nombre ,int pidra,int madera, int metal, int cant_max_construidos);

    

    /*
    *PRE:
    *POST:
    */
    const string tipo_produccion();
    //~mina();
    void imprimir_mensaje();
};



#endif //H_P_FABRICA_H