#ifndef H_P_EDIFICIOS_H
#define H_P_EDIFICIOS_H
#include <iostream>
using namespace std;

const string TIPO_PRODUCCION_OBELISCO = " ";
const string TIPO_PRODUCCION_PLANTA = " ";
const string TIPO_PRODUCCION_ESCUELA = " ";
const string TIPO_PRODUCCION_MINA = "Piedra";
const string TIPO_PRODUCCION_FABRICA = "Metal";
const string TIPO_PRODUCCION_ASERRADERO = "Madera";

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
    /*
    *PRE:
    *POST:
    */
    Edificios(string nombre ,int piedra,int madera,int metal,int cant_max_construidos);
    
    /*
    *PRE:
    *POST:
    */
    void aumentar_construidos();
    
    /*
    *PRE:
    *POST:
    */
    int devolver_construidos();
    
    /*
    *PRE:
    *POST:
    */
    string devolver_nombre();
    
    /*
    *PRE:
    *POST:
    */
    char devolver_simbolo();
    
    /*
    *PRE:
    *POST:
    */
    int devolver_cantidad_piedra();
    
    /*
    *PRE:
    *POST:
    */
    int devolver_cantidad_madera();
    
    /*
    *PRE:
    *POST:
    */
    int devolver_cantidad_metal();
    
    /*
    *PRE:
    *POST:
    */
    int devolver_max_construccion();
    
    /*
    *PRE:
    *POST:
    */
    virtual int cuanto_produce() = 0;
    
    /*
    *PRE:
    *POST:
    */
    virtual const string tipo_produccion() = 0;

    //~edificios();
};

//Prueba

#endif //H_P_EDIFICIOS_H