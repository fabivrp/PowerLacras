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
    Mapa* cargar_mapa(bool *si_hay_archivo);
    Vector <Edificios> cargar_edificios(bool *si_hay_archivo);
    Vector <Ubicaciones> cargar_ubicaciones(bool *si_hay_archivo);
    Vector <Material> cargar_materiales(bool *si_hay_archivo);
    ~Cargar_archivos();
};




#endif //H_P_CARGAR_ARCHIVOS_H