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
    *POST:Carga todos los elementos provistos por los archivos a sus respectivas estructuras
    */
    bool cargar_archivos();
    
    /*
    *PRE:
    *POST:Agrega los edificios que est'an contenidos en el archivo ubicaciones al mapa
    */
    void agregar_ubicaciones();
    
    /*
    *PRE:
    *POST:Verifica que la opción dada por el usuario esté dentro de los valores calidos de las
    *opciones
    */
    void chequear_respuesta();

 

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
    int numero_aleatorio(int limite_inferior, int limite_superior);
    
    
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
   



};





#endif //H_P_JUEGOS_H