#ifndef H_P_PRUEBA2_H
#define H_P_PRUEBA2_H

#include "vector.h"
#include "edificios.h"
#include "ubicaciones.h"
//#include "juego.h"
#include "material.h"
#include "mapa.h"
#include "casilleroc.h"
#include <iostream>
#include <iomanip>
//#include "x.h"
using namespace std;
 /*
    *PRE:
    *POST:devuelve true si hay coordenadas disponibles para operar, en caso contrario devuelve false
    */
    bool hay_coordenada_disponible(int *fil , int *col,Mapa *mapa);
     /*
    *PRE:
    *POST:devuelve true si el objeto buscado esta en el vector, en caso contrario devuelve false
    */
    bool hay_objeto(string nombre_a_buscar,Vector <Edificios> vector,int *pos_vector);
    /*
    *PRE:
    *POST:devuelve true si el objeto buscado esta en el vector, en caso contrario devuelve false
    */
    bool hay_objeto2(string nombre_a_buscar,Vector <Material> vector,int *pos_vector);
    /*
    *PRE:
    *POST:devuelve true si la coordenada introducida es valida, en caso contrario devuelve false
    */
    bool coordenada_es_valida(int *fil,int *col,Mapa *mapa);
    /*
    *PRE:
    *POST:pide al usuario una coordenada
    */
    void pedir_coordenada(int *fila, int *columna);
    /*
    *PRE:
    *POST:devuelve true si el objeto buscado esta en el vector, en caso contrario devuelve false
    */
    bool confirmo_accion(string accion,string objeto);
    /*
    *PRE: los valores  numericos deben ser >0
    *POST:calcula el espacio que debe haber frente una palabra para centrr el texto
    */
    int calcular_espacio_delantero(int espacio, int  largo_palabra);
    /*
    *PRE:
    *POST:imprime un texto centrado
    */
    void imprimir_centrado(int espacio, string palabra);



#endif //H_P_PRUEBA2_H
