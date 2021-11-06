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
    Mapa* cargar_mapa(int *cont_archivos);
    Vector <Edificios> cargar_edificios(int *cont_archivos);
    Vector <Ubicaciones> cargar_ubicaciones(int *cont_archivos);
    Vector <Material> cargar_materiales(int *cont_archivos);
    ~Cargar_archivos();
};




#endif //H_P_CARGAR_ARCHIVOS_H