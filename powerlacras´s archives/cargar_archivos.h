#ifndef H_P_CARGAR_ARCHIVOS_H
#define H_P_CARGAR_ARCHIVOS_H
#include "casillero.h"
#include "edificios.h"
#include "material.h"
#include "leer_archivos.h"
#include "mapa.h"
#include "parser.h"
#include "parsere.h"
#include "ubicaciones.h"
#include "vector.h"
#include <fstream>

class Cargar_archivos{

private:
    /* data */
public:
    Cargar_archivos();
    /*
    *PRE: -
    *POST:Devuleve la cantidad de materiales que produce el edificio.
    */
    Cargar_archivos();
    
    /*
    *PRE: -
    *POST:  Carga las  casillas del tipo correspondiente según los datos contenidos en el 
    *archivo, si se lee exitosamente se suma uno al contador de archivos.
    */
    Mapa* cargar_mapa(int *contador_archivos);
    
    /*
    *PRE: -
    *POST:  Carga los edificios que están contenidos en el archivo dentro del vector, si 
    *se lee exitosamente se suma uno al contador de archivos.
    */
    Vector <Edificios> cargar_edificios(int *contador_archivos);
    
    /*
    *PRE: -
    *POST:  Carga las ubicaciones de los edificios construidos dentro del vector, si 
    *se lee exitosamente se suma uno al contador de archivos.
    */
    Vector <Ubicaciones> cargar_ubicaciones(int *contador_archivos);
    
    /*
    *PRE: -
    *POST:  Carga los materiales contenidos en el archivo dentro del vector, si 
    *se lee exitosamente se suma uno al contador de archivos.
    */
    Vector <Material> cargar_materiales(int *contador_archivos);
    
    ~Cargar_archivos();
};




#endif //H_P_CARGAR_ARCHIVOS_H