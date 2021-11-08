#ifndef H_P_OBELISCO_H
#define H_P_OBELISCO_H
#include "edificios.h"

class Obelisco : public Edificios {


public:
  
    /*
    *PRE:
    *POST:
    */  
    Obelisco(string nombre ,int pidra,int madera, int metal, int cant_max_construidos);
    
    /*
    *PRE:
    *POST:
    */
    int cuanto_produce();
    //~mina();
};



#endif //H_P_OBELISCO_H