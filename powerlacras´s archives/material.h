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
    Material(string tipo,int stock);
    void mostrar();
    void disminuir_stock(int decremento);
    void agregar_al_stock(int incremento);
    string devolver_nombre();
    int devolver_stock();
};

//Prueba

#endif //H_P_MATERIAL_H