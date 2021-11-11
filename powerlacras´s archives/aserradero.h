#ifndef H_P_ASERRADERO_H
#define H_P_ASERRADERO_H
#include "edificios.h"

class Aserradero : public Edificios {


public:
    Aserradero(string nombre ,int pidra,int madera, int metal, int cant_max_construidos);


   
    /*
    *PRE: -
    *POST:Devuleve el nombre del material que produce el edificio
    */
    const string tipo_produccion();

    /*
    *PRE: -
    *POST:Muestra por pantalla al usuario el tipo de edificio
    */
    void imprimir_mensaje();
    //~mina();
    
};

#endif //H_P_ASERRADERO_H