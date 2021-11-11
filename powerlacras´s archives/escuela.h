#ifndef H_P_ESCUELA_H
#define H_P_ESCUELA_H
#include "edificios.h"

class Escuela : public Edificios {


public:
    Escuela(string nombre ,int pidra,int madera, int metal, int cant_max_construidos);
    /*
    *PRE:
    *POST: Devuelve el tipo de elemento que produce la fábrica
    */
    const string tipo_produccion();

    /*
    *PRE:
    *POST: muestra por pantalla el tipo de edificio que es
    */
    void imprimir_mensaje();
    //~mina();
};



#endif //H_P_ESCUELA_H