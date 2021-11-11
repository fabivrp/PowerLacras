#ifndef H_P_INICIO_H
#define H_P_INICIO_H

#include <iostream>
#include <thread>
#include <chrono>
#include "colors.h"
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;


 /*
    *PRE:
    *POST: Imprime por patalla la ciudad con fuegos artificiales 
    */
void imprimir_salida(const string color_1, const string color_2);
 /*
    *PRE:
    *POST: Imprime por patalla la despedida del programa
    */
void mostrar_salida_parpadeante();
 /*
    *PRE:
    *POST: Imprime por patalla el edificio de bienvenida
    */
void imprimir_edificio();
 /*
    *PRE:
    *POST: Imprime por patalla el cartel de bienvenida
    */
void imprimir_bienvenida();
 /*
    *PRE:
    *POST: Imprime por patalla el menu de opciones
    */
void imprimir_menu();
 






#endif //H_P_INICIO_H