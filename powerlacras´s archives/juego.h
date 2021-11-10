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

const int MAX_PIEDRA = 2;
const int MIN_PIEDRA = 1;
const int MAX_MADERA = 1;
const int MIN_MADERA = 0;
const int MAX_METAL = 4;
const int MIN_METAL = 2;

const char PLANTA_ELECTRICA = 'P';
const char ESCUELA = 'E';
const char OBELISCO = 'O';
const char ASERRADERO = 'A';
const char MINA = 'M';
const char FABRICA = 'F';
const char TERRENO = 'T';
const char LAGO = 'L';
const char CAMINO = 'C';
const char METAL = 'I';
const char MADERA = 'W';
const char PIEDRA = 'S';


class Juego
{
private:
    Vector <Edificios> vector_edificios;
    Vector <Ubicaciones> vector_ubicaciones;
    Vector <Material> vector_materiales;
    Mapa *mapa;

public:
    //Juego(/* args */);
    /*
    *PRE:
    *POST:
    */
    bool cargar_archivos();
    
    /*
    *PRE:
    *POST:
    */
    void agregar_ubicaciones();
    
    /*
    *PRE:
    *POST:
    */
    void mostrar_edificios();

    /*
    *PRE:
    *POST:
    */
    void mostrar_materiales();
    
    /*
    *PRE:
    *POST:
    */
    void mostrar_edificios_construidos();
    
    /*
    *PRE:
    *POST:
    */
    void menu();

    /*
    *PRE:
    *POST:
    */
    void recolectar_materiales();

    /*
    *PRE:
    *POST:
    */
   void consultar_coordenada();

   /*
   *PRE:
   *POST:
   */
    void ejecutar_lluvia_materiales();


    ~Juego();
    
private: 
    /*
    *PRE:
    *POST:
    */
    int devolver_pos_vector(string nombre_a_buscar);
    
    /*
    *PRE:
    *POST:
    */
    int devolver_pos_vector2(string nombre);
    
    /*
    *PRE:
    *POST:
    */
    int procesar_opcion();

    /*
    *PRE:
    *POST:
    */
    string extraer_coordenadas (string nombre);

    /*
    *PRE:
    *POST:
    */
    void describir_contenido(char tipo_casilla);


    /*
    *PRE:
    *POST:
    */
    int casillas_disponibles();
    
    /*
    *PRE:
    *POST:
    */
    int numero_aleatorio(int limite_inferior, int limite_superior);
    
    /*
    *PRE:
    *POST:
    */
    bool casilla_disponible(int fila, int columna);

};





#endif //H_P_JUEGOS_H