#ifndef H_P_EDIFICIOS_H
#define H_P_EDIFICIOS_H
#include "casilleroc.h"




class Edificios : public Casilleroc
{
protected:
    int cant_max_construidos;
    int piedra;
    int madera;
    int metal;
    int cant_construidos;
    int produccion;
    char simbolo;
public:
    Edificios(int piedra,int madera,int metal,int cant_max_construidos);
    void aumentar_construidos();
    int devolver_construidos();

    //~edificios();
};

//Prueba

#endif //H_P_EDIFICIOS_H