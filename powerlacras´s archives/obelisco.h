#ifndef H_P_OBELISCO_H
#define H_P_OBELISCO_H
#include "edificios.h"

class Obelisco : public Edificios {


public:
  
    /*
    *PRE:los valores numericos denem ser >=0
    *POST:crea un obelisco con los parametros iniciales dados
    */  
    Obelisco(string nombre ,int pidra,int madera, int metal, int cant_max_construidos);
    
    /*
    *PRE:
    *POST:devuelve el nombre del tipo de material que produce, en caso de no tener produccion devuelve " "
    */
    const string tipo_produccion();
    
    /*
    *PRE:
    *POST:imprime por pantalla el timo de edificio que es
    */
    void imprimir_mensaje();

    //~mina();
};

#endif //H_P_OBELISCO_H