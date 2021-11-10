#ifndef H_P_ASERRADERO_H
#define H_P_ASERRADERO_H
#include "edificios.h"

class Aserradero : public Edificios {


public:
    Aserradero(string nombre ,int pidra,int madera, int metal, int cant_max_construidos);


    /*
    *PRE: -
    *POST:Devuleve el nombre del material que produce el edificio, en este caso "Madera"
    */
    const string tipo_produccion();

    /*
    *PRE: -
    *POST:Devuleve la cantidad de materiales que produce el edificio.
    */
    int cuanto_produce();
    //~mina();
    
};

#endif //H_P_ASERRADERO_H