#ifndef H_P_EDIFICIOS_H
#define H_P_EDIFICIOS_H
#include <iostream>
using namespace std;


//CREO QUE LA CLASE TENDRIA QUE SER EN SINGULAR  LIKE ---> -EDIFICIO. 


class Edificios{

protected:
    string nomrbe_edificio;
    int cant_max_construidos;
    int piedra;
    int madera;
    int metal;
    int cant_construidos;
    int produccion;
    char simbolo;
public:
    Edificios(string nombre ,int piedra,int madera,int metal,int cant_max_construidos);
    void aumentar_construidos();
    int devolver_construidos();
    string devolver_nombre();
    virtual int cuanto_produce() = 0;

    //~edificios();
};

//Prueba

#endif //H_P_EDIFICIOS_H