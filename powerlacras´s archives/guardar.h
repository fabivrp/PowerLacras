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

     /*
    *PRE:
    *POST:Guarda el mapa actualizado en un nuevo archivo.
    */
    void guardar_mapa();
     /*
    *PRE:
    *POST:Guarda el  en vector de elementos ya actualizado un nuevo archivo.
    */
    void guardar_edificios();
     /*
    *PRE:
    *POST:Guarda el  en vector de elementos ya actualizado un nuevo archivo.
    */
    void guardar_ubicaciones();
     /*
    *PRE:
    *POST:Guarda el  en vector de elementos ya actualizado un nuevo archivo.
    */
    void guardar_materiales();

    
public:

    Guardar(Vector <Ubicaciones> vector_ubicaciones,Vector <Edificios> vector_edificios,Vector <Material> vector_materiales, Mapa *mapa);
    
     /*
    *PRE:
    *POST: guarda todos los cambios realixados durante la ejecucion en sus archivos corespondientes
    */
    void guardar_todo();

    
};



















#endif //H_P_GUARDAR_SALIR_H