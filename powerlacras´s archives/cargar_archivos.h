#ifndef H_P_CARGAR_ARCHIVOS_H
#define H_P_CARGAR_ARCHIVOS_H
#include "casillero.h"
#include "edificios.h"
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
    Mapa* cargar_mapa();
    Vector <Edificios> cargar_edificios();
    Vector <Ubicaciones> cargar_ubicaciones();
    ~Cargar_archivos();
};




#endif //H_P_CARGAR_ARCHIVOS_H