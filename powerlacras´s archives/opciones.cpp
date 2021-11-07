#include "opciones.h"

Opciones::Opciones(Vector <Edificios> vector_edificio,Vector <Ubicaciones> vector_ubicaciones,Vector <Material> vector_materiales ,Mapa *mapa){
    this->vector_edificio = vector_edificio;
    this->vector_ubicaciones = vector_ubicaciones;
    this->vector_materiales = vector_materiales;
    this->mapa = mapa;
}

template <typename Tipo>
int Opciones :: devolver_pos_vector(string nombre_a_buscar,Vector <Tipo> vectorr) {
    int pos_vector_edificio;
    for (int i = 0 ; i < vectorr.tamanio();i++){
        Tipo *vector = vectorr.devolver_info(i);
        if (is_same <Edificios,Tipo> :: value){
            Edificios* edificio = vector;
            if (edificio->devolver_nombre() == nombre_a_buscar ) pos_vector_edificio = i;
        }
         
    }
    return pos_vector_edificio;
}

void Opciones :: costruir_edificio(){
    string edificio_a_construir;
    cout << "Que edificio desea construir" << endl;
    getline(cin,edificio_a_construir);
    
    //getline(cin,edificio_a_construir);

   


    
    if (edificio_a_construir == "planta electrica") edificio_a_construir = "planta";
    cout << devolver_pos_vector(edificio_a_construir,this->vector_edificio) << endl;


}