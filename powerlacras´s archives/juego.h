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
#include "material.h"
#include "casillero.h"
#include "casilleroc.h"
#include "opciones.h"
#include "vector.h"
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <iomanip>

const int ESPACIO_TIPO_EDIFICIO = 24;
const int ESPACIO_TIPO_MATERIAL = 24;
const int ESPACIO_MATERIALES = 16;
const int ESPACIO_UNIDADES_CONSTRUIDAS = 16;
const int ESPACIO_UNIDADES_DISPONIBLES = 16;
const int ESPACIO_COORDENADAS = 30;

class Juego
{
private:
    Vector <Edificios> vector_edificios;
    Vector <Ubicaciones> vector_ubicaciones;
    Vector <Material> vector_materiales;
    Mapa *mapa;

public:
    //Juego(/* args */);
    bool cargar_archivos();
    void agregar_ubicaciones();
    void mostrar_edificios();
    void mostrar_materiales();
    void mostrar_edificios_construidos();
    void menu();
    ~Juego();
    
private:    
    int devolver_pos_vector(string nombre_a_buscar);
    int devolver_pos_vector2(string nombre);
    int procesar_opcion();
    string extraer_coordenadas (string nombre);
};





#endif //H_P_JUEGOS_H