#ifndef H_P_PRUEBA
#define H_P_PRUEBA
#include "vector.h"
#include "ubicaciones.h"
#include "mapa.h"
#include "material.h"
#include "edificios.h"
#include "casilleroc.h"
#include "prueba2.h"



class prueba
{
private:
Vector <Ubicaciones> *vector_ubicaciones_aux;
Vector <Edificios> *vector_edificios_aux;
Vector <Material> *vector_materiales_aux;
Mapa *mapa_aux;
int pos_vector_edificio,pos_piedra,pos_madera,pos_metal,coordenada_fil,coordenada_col;
string edificio_a_construir;
/*
    *PRE:
    *POST:devuelve true si hay suficientes materiales para construir, en caso contrario devuelve false
    */
    bool hay_materiales_suficiente();
    /*
    *PRE:
    *POST:devuelve true si hay suficiente espacio para construir en el mapa, en caso contrario devuelve false
    */
    bool hay_espacio();
    /*
    *PRE:
    *POST:devuelve true si hay suficiente para construir del material que se est;a consultando, en caso contrario devuelve false
    */
    bool hay_material(string nombre_material,int *pos_vector_material);
    /*
    *PRE:
    *POST:devuelve la cantidad de material necesario para construir
    */
    int cant_material_requerido(string material,Edificios *edificio);
    /*
    *PRE:
    *POST:devuelve true si el objeto buscado esta en el vector, en caso contrario devuelve false
    */
    void agregar_edificacion();
    /*
    *PRE:
    *POST:resta del stock los materiales correspondientes luego de construir
    */
    void restar_materiales();
    /*
    *PRE:
    *POST:Resta al stock del material proporcionado la cantidad indicada
    */
    void restar_material(int pos_vector_material,int cant_restar);
    
public:

    prueba(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa);
    //~prueba();
    /*
    *PRE:
    *POST:devuelve true si el objeto buscado esta en el vector, en caso contrario devuelve false
    */
    void accion();
    /*
    *PRE:
    *POST:devuelve true si el objeto buscado esta en el vector, en caso contrario devuelve false
    */
    void modificar();
    //void costruir_edificio();
};


#endif //H_P_PRUEBA
