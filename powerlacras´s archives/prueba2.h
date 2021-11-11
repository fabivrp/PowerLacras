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

    bool hay_coordenada_disponible(int *fil , int *col,Mapa *mapa);
    bool hay_objeto(string nombre_a_buscar,Vector <Edificios> vector,int *pos_vector);
    bool hay_objeto2(string nombre_a_buscar,Vector <Material> vector,int *pos_vector);
    bool coordenada_es_valida(int *fil,int *col,Mapa *mapa);
    void pedir_coordenada(int *fila, int *columna);
    bool confirmo_accion(string accion,string objeto);
    int calcular_espacio_delantero(int espacio, int  largo_palabra);
    void imprimir_centrado(int espacio, string palabra);



#endif //H_P_PRUEBA2_H