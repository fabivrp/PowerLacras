#ifndef H_P_OPCIONES_H
#define H_P_OPCIONES_H
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






class Opciones{ 

protected:
    Vector <Edificios> *vector_edificio;
    Vector <Ubicaciones> *vector_ubicaciones;
    Vector <Material> *vector_materiales;
    

    //bool Opciones:: t(Edificios* vectorr,string nombre);
    Mapa *mapa;
    //template <typename Tipo>
    ////bool hay_objeto(string nombre_a_buscar,Vector <Tipo> vector,int *pos_vector,bool(*tipoq)(Edificios vec,string nombre_a_buscar));
    //bool hay_objeto(string nombre_a_buscar,Vector <Tipo> vector,int *pos_vector);
    //template <typename Tipo>
    //bool hay_objeto2(string nombre_a_buscar,Vector <Tipo> vector,int *pos_vector);
    /*bool hay_materiales_suficiente(int pos_vector_edificio,int *pos_piedra,int *pos_madera,int *pos_metal);
    bool hay_espacio(int pos_vector_edificio);
    bool hay_material(string nombre_material,int *pos_vector_material,int pos_vector_edificio);
    int cant_material_requerido(string material,Edificios *edificio);*/
    bool hay_coordenada_disponible(int *fil , int *col);
    bool hay_objeto(string nombre_a_buscar,Vector <Edificios> vector,int *pos_vector);
    bool hay_objeto2(string nombre_a_buscar,Vector <Material> vector,int *pos_vector);
    bool coordenada_es_valida(int *fil,int *col);
    void pedir_coordenada(int *fila, int *columna);
    bool confirmo_accion(string accion,string objeto);
    int calcular_espacio_delantero(int espacio, int  largo_palabra);
    void imprimir_centrado(int espacio, string palabra);

    //void agregar_edificacion(int pos_vector_edificio,int pos_piedra,int pos_madera,int pos_metal);

public:

    virtual void accion() = 0;
/*
*PRE:
*POST:
*/
//void costruir_edificio();

/*
*PRE:
*POST:
*/
Opciones (Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa);
    
};



#endif //H_P_OPCIONES_H
