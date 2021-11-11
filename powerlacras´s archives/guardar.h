#ifndef H_P_GUARDAR_SALIR_H
#define H_P_GUARDAR_SALIR_H
#include "vector.h"
#include "ubicaciones.h"
#include "mapa.h"
#include "material.h"
#include "edificios.h"


class Guardar{

private:
    Vector <Ubicaciones> vector_ubicaciones_aux;
    Vector <Edificios> vector_edificios_aux;
    Vector <Material> vector_materiales_aux;
    Mapa *mapa_aux;

    
public:

    Guardar(Vector <Ubicaciones> vector_ubicaciones,Vector <Edificios> vector_edificios,Vector <Material> vector_materiales, Mapa *mapa);
    void guardar_mapa();
    void guardar_edificios();
    void guardar_ubicaciones();
    void guardar_materiales();
    void guardar_todo();

    
};



















#endif //H_P_GUARDAR_SALIR_H