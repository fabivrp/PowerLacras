#ifndef H_P_MATERIAL_H
#define H_P_MATERIAL_H

#include "vector.h"
#include <iostream>


using namespace std;
#include "constantes.h"

class Material{

private:
    string nombre;
    char tipo;
    int stock;
public:
    
    /*
    *PRE:
    *POST:
    */
    Material(string nombre,int stock);
    
    
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
    char devolver_simbolo();
    void imprimir_mensaje();

};

//Prueba

#endif //H_P_MATERIAL_H