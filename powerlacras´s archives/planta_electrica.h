#ifndef H_P_PLANTA_ELECTRICA_H
#define H_P_PLANTA_ELECTRICA_H
#include "edificios.h"

class Planta_electrica : public Edificios {


public:

    /*
    *PRE:
    *POST:crea una planta con los atibutos dados
    */
    Planta_electrica(string nombre ,int pidra,int madera, int metal, int cant_max_construidos);
  
    /*
    *PRE:
    *POST:Devuelve el tipo de produccion del edificio, si no produce nada devielve un espacio
    */
    const string tipo_produccion();
    
    /*
    *PRE:
    *POST:informa al usuario que tipo de edificio es
    */
    void imprimir_mensaje();

};

#endif //H_P_PLANTA_ELECTRICA_H