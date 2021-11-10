#ifndef CONSTRUIR_EDIFICIO_H
#define CONSTRUIR_EDIFICIO_H
#include "opciones.h"
//#include "vector.h"


class Construir_edificio : public Opciones
{
private:
    int pos_vector_edificio,pos_piedra,pos_madera,pos_metal;
    int coordenada_fil,coordenada_col;
    string edificio_a_construir;

    //int evaluar_requisitos();
public:
    
    Construir_edificio(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa);
    /*
    *PRE: -
    *POST:Ejecuta la construcción del edificio solicitado por el usuario. 
    */
    void accion();
    
    /*
    *PRE: -
    *POST:
    */
    void costruir_edificio();
    //~Construir_edificio();

private:
   
    /*
    *PRE: -
    *POST:Devuelve true en el caso de que hayan suficientes materiales para contruir el edificio 
    *solicitado,en caso contrario devuelve false.
    */
    bool hay_materiales_suficiente();
   
    /*
    *PRE: -
    *POST:Devuelve true en el caso de que haya una casila disponible para construir, en caso contrario devuelve false.
    */
    bool hay_espacio();
   
    /*
    *PRE: -
    *POST:Devuelve true en el caso de que haya suficiente material del tipo que se consulta
    *para construir,en caso contrario devuelve false.
    */
    bool hay_material(string nombre_material,int *pos_vector_material);
    
    /*
    *PRE: -
    *POST:Devuelve la cantidad necesaria del material consultado para la costrucción del edificio
    *requerido. 
    */
    int cant_material_requerido(string material,Edificios *edificio);
    
    /*
    *PRE: -
    *POST:
    */
    void agregar_edificacion();
    
    /*
    *PRE: -
    *POST: Resta los materiales necesarios para construir
    */
    void restar_materiales();
    
    /*
    *PRE: -
    *POST: Resta de cada material la cantidad necesaria para construir.
    */
    void restar_material(int pos_vector_material,int cant_restar);
};



#endif //CONSTRUIR_EDIFICIO_H