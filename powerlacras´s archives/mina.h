#ifndef H_P_MINA_H
#define H_P_MINA_H
#include "edificios.h"

class Mina : public Edificios {


public:
    
    /*
    *PRE:
    *POST:
    */
    Mina(string nombre ,int piedra,int madera, int metal, int cant_max_construidos);
    
    /*
    *PRE:
    *POST:
    */
    const string tipo_produccion();
    
    /*
    *PRE:
    *POST:
    */
    int cuanto_produce();
    //~mina();
};



#endif //H_P_MINA_H