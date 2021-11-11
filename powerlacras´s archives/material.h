#ifndef H_P_MATERIAL_H
#define H_P_MATERIAL_H

#include "vector.h"
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
    *POST:Muestra por pantalla el tipo de material que hay en casilla
    */
    void mostrar();
  
    /*
    *PRE:
    *POST:Le resta al stock el decremento
    */
    void disminuir_stock(int decremento);
  
    /*
    *PRE:
    *POST:le suma al stock el incremento
    */
    void agregar_al_stock(int incremento);
  
    /*
    *PRE:
    *POST:Devuelve el nombre del elemento
    */
    string devolver_nombre();
  
    /*
    *PRE:
    *POST:Devuelve el stcok del elemento
    */
    int devolver_stock();
     /*
    *PRE:
    *POST:devuelve el simbolo representaticvo del elemento
    */
    char devolver_simbolo();
     /*
    *PRE:
    *POST:Muestra por pantalla el tipo de elemento que hay
    */
    void imprimir_mensaje();

};

#endif //H_P_MATERIAL_H