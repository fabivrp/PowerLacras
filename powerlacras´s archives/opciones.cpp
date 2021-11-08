#include "opciones.h"

Opciones::Opciones(Vector <Edificios> vector_edificio,Vector <Ubicaciones> vector_ubicaciones,Vector <Material> vector_materiales ,Mapa *mapa){
    this->vector_edificio = vector_edificio;
    this->vector_ubicaciones = vector_ubicaciones;
    this->vector_materiales = vector_materiales;
    this->mapa = mapa;
}

template <typename Tipo>
bool Opciones :: hay_objeto(string nombre_a_buscar,Vector <Tipo> vectorr,int *pos_vector) {
    bool encontrado = false;
    int i = 0;
    while (i < vectorr.tamanio() && encontrado == false){
        Tipo *vector = vectorr.devolver_info(i);
        if (is_same <Edificios,Tipo> :: value){
            Edificios* edificio = vector;
            if (edificio->devolver_nombre() == nombre_a_buscar ){
                *pos_vector = i;
                encontrado = true;
            }
        }
        cout << i << endl;
        i++;
    }
    return encontrado;
}
bool Opciones :: hay_materiales_suficiente(int pos_vector_edificio){
    
    return true;
}

void Opciones :: costruir_edificio(){
    cout << this->vector_edificio.tamanio() << endl;
    string edificio_a_construir;
    cout << "Que edificio desea construir" << endl;
    getline(cin,edificio_a_construir);
    if (edificio_a_construir == "planta electrica") edificio_a_construir = "planta";
    int pos_vector_edificio;
    if (hay_objeto(edificio_a_construir,this->vector_edificio,&pos_vector_edificio)){
        if(hay_materiales_suficiente(pos_vector_edificio)){

        }
        else{
            cout << "falta de material" << endl;
        }
    }
    else{
        cout << "el edificio ingresado no es existe" << endl;

    }

}