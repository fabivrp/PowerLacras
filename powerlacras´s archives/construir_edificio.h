#ifndef CONSTRUIR_EDIFICIO_H
#define CONSTRUIR_EDIFICIO_H
#include "opciones.h"
//#include "vector.h"


class Construir_edificio : public Opciones
{
private:
int pos_vector_edificio,pos_piedra,pos_madera,pos_metal,coordenada_fil,coordenada_col;
string edificio_a_construir;
    bool hay_materiales_suficiente();
    bool hay_espacio();
    bool hay_material(string nombre_material,int *pos_vector_material);
    int cant_material_requerido(string material,Edificios *edificio);
    void agregar_edificacion();
    void restar_materiales();
    void restar_material(int pos_vector_material,int cant_restar);
    //int evaluar_requisitos();
public:
    void accion();
    Construir_edificio(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa);
    //~Construir_edificio();
    void costruir_edificio();
};



#endif //CONSTRUIR_EDIFICIO_H