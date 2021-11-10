#ifndef LISTAR_MATERIALES_H
#define LISTAR_MATERIALES_H
#include "opciones.h"
#include "material.h"
#include "vector.h"
#include "constantes.h"
#include "colors.h"
#include <iomanip>
//#include "opciones.h"



class Listar_materiales : public Opciones{

public:
    Listar_materiales(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa);
    void accion();
};



#endif //LISTAR_MATERIALES_H