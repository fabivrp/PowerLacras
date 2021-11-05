#ifndef H_P_MATERIAL_H
#define H_P_MATERIAL_H

#include "vector.h"
#include <string>


using namespace std;

class Material{

protected:
    char tipo;
    int stock;
public:
    Material(char tipo,int stock);
    void mostrar();
    void disminuir_stock(int decremento);
    void agregar_al_stock(int incremento);
};

//Prueba

#endif //H_P_MATERIAL_H