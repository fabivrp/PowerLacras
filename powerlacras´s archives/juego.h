#ifndef H_P_JUEGOS_H
#define H_P_JUEGOS_H
#include <iostream>
//#include "casillero.h"
#include "edificios.h"
//#include "leer_archivos.h"
#include "mapa.h"
#include "parser.h"
#include "parsere.h"
#include "ubicaciones.h"
#include "cargar_archivos.h"
//#include "vector.h"
#include <fstream>

class Juego
{
private:
    Vector <Edificios> vector_edificios;
    Vector <Ubicaciones> vector_ubicaciones;
    Mapa *mapa;

public:
    //Juego(/* args */);
    bool cargar_archivos();
    void agregar_ubicaciones();
    ~Juego();
};





#endif //H_P_JUEGOS_H