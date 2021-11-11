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
#include "consultar_coordenada.h"
#include "construir_edificio.h"
#include "inicio.h"
#include "guardar.h"
#include "demoler_edificio.h"
#include "recolectar_recursos.h"
#include "lluvia_recursos.h"
#include "listar_edificios_construidos.h"
#include "listar_edificios.h"
#include "listar_materiales.h"
#include "material.h"
#include "casillero.h"
#include "casilleroc.h"
#include "casillerot.h"
#include "opciones.h"
#include "vector.h"
#include "constantes.h"
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <iomanip>

#ifdef __linux__
#define CLR_SCREEN "clear"
#endif // __linux__

#ifdef __MINGW32__
#define CLR_SCREEN "CLS"
#endif // __MINGW32__

struct Coordenada{
    int fila;
    int columna;
};




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
   
   /*
   *PRE:
   *POST:
   */
    void demoler_edificio();


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
    bool casilla_disponible(Coordenada coordenada);
    
    /*
    *PRE:
    *POST:
    */
    void asignar_coordenada(Coordenada& coordenada);
    
    /*
    *PRE:
    *POST:
    */
    void cambiar_contenido(Coordenada coordenada);

    /*
    *PRE:
    *POST:
    */
    void colocar_material(int cantidad_material, char tipo);
    
    /*
    *PRE:
    *POST:
    */
    bool hay_edificio (int fila, int columna);
    
    /*
    *PRE:
    *POST:
    */
    void obtener_datos(int& piedra, int& madera, int& metal, int fila, int columna);
    /*
    *PRE:
    *POST:
    */
    void regresar_material(string tipo, int cant_material);



};





#endif //H_P_JUEGOS_H