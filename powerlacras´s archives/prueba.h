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
    bool hay_materiales_suficiente();
    bool hay_espacio();
    bool hay_material(string nombre_material,int *pos_vector_material);
    int cant_material_requerido(string material,Edificios *edificio);
    void agregar_edificacion();
    void restar_materiales();
    void restar_material(int pos_vector_material,int cant_restar);
    
public:

    prueba(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa);
    //~prueba();
    void accion();
    void modificar();
    //void costruir_edificio();
};


#endif //H_P_PRUEBA
