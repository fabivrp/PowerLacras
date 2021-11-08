#ifndef H_P_MATERIAL_H
#define H_P_MATERIAL_H

#include "vector.h"
#include <iostream>


using namespace std;

class Material{

private:
    string tipo;
    int stock;
public:
    
    /*
    *PRE:
    *POST:
    */
    Material(string tipo,int stock);
    
    
    /*
    *PRE:
    *POST:
    */
    void mostrar();
  
    /*
    *PRE:
    *POST:
    */
    void disminuir_stock(int decremento);
  
    /*
    *PRE:
    *POST:
    */
    void agregar_al_stock(int incremento);
  
    /*
    *PRE:
    *POST:
    */
    string devolver_nombre();
  
    /*
    *PRE:
    *POST:
    */
    int devolver_stock();
};

//Prueba

#endif //H_P_MATERIAL_H