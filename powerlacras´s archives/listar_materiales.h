#ifndef LISTAR_MATERIALES_H
#define LISTAR_MATERIALES_H
#include "opciones.h"
#include "material.h"
#include "vector.h"
#include "constantes.h"
#include "colors.h"
#include <iomanip>
//#include "opciones.h"



class Listar_materiales{
private :
    Vector <Material> vector_materiales_aux;

public:
    Listar_materiales(Vector <Material> vector_materiales);
     
    /*
    *PRE:
    *POST:Muestra por pantalla todos los materiales del stock así como también su stock
    */
    void accion();
};

#endif //LISTAR_MATERIALES_H