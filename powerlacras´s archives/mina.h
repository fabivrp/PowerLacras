#ifndef H_P_MINA_H
#define H_P_MINA_H
#include "edificios.h"

class Mina : public Edificios {


public:
    
   
    Mina(string nombre ,int piedra,int madera, int metal, int cant_max_construidos);
    
    /*
    *PRE:
    *POST: Devuelve el nobre del elemento producido por el edificio
    */
    const string tipo_produccion();
    
    /*
    *PRE:
    *POST:Indica por pantalla al usuario el tipo de construccion que hay en la casilla
    */

    void imprimir_mensaje();

    //~mina();
};



#endif //H_P_MINA_H