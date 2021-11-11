#ifndef H_P_EDIFICIOS_H
#define H_P_EDIFICIOS_H
#include <iostream>
#include "constantes.h"
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
    /*
    *PRE:las cantidades que representan los materiales y elementos construidos deben ser >= 0
    *POST:Establece la clase con los datos proporcionados.
    */
    Edificios(string nombre ,int piedra,int madera,int metal,int cant_max_construidos);
    
    /*
    *PRE:
    *POST: Aumenta la cantidad de construidos del ediificio en una unidad
    */
    void aumentar_construidos();

/*
    *PRE:
    *POST: disminuye la cantidad de construidos del ediificio en una unidad
    */
    void disminuir_construidos();

    
    /*
    *PRE:
    *POST:Devuelve la cantidad de edificios construidos de ese tipo.
    */
    int devolver_construidos();
    
    /*
    *PRE:
    *POST:Devuelve que tipo de edificio es (Escuela, mina, aserradero, etc)
    */
    string devolver_nombre();
    
    /*
    *PRE:
    *POST: Devuelve el caracter representativo del tipo de edificio
    */
    char devolver_simbolo();
    
    /*
    *PRE:
    *POST: Devuelve la cantidad de piedras necesarias para la construcción de ese edificio
    */
    int devolver_cantidad_piedra();
    
    /*
    *PRE:
    *POST: Devuelve la cantidad de madera necesaria para la construcción de ese edificio
    */
    int devolver_cantidad_madera();
    
    /*
    *PRE:
    *POST: Devuelve la cantidad de metal necesario para la construcción de ese edificio
    */
    int devolver_cantidad_metal();
    
    /*
    *PRE:
    *POST:Devuelve la cantidad maxima permitida de edificios de ese tipo que pueden ser 
    *construidos en Andypolis
    */
    int devolver_max_construccion();
    
    /*
    *PRE:
    *POST:Devuelve la cantidad de materiales que produce el edificio, en el caso de no
    *producir ninguno devuelve 0
    */
    int cuanto_produce();
    
    /*
    *PRE:
    *POST:Muestra al usuario el tipo de edificio que es
    */
    virtual void imprimir_mensaje() = 0;

    
    /*
    *PRE:
    *POST:Devuelve el tipo de material que produce el edificio, en caso de no producir ninguno 
    *devuelve " "
    */
    virtual const string tipo_produccion() = 0;

    virtual~Edificios();
    
};

//Prueba

#endif //H_P_EDIFICIOS_H