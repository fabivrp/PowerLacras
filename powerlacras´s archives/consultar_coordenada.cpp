#include "consultar_coordenada.h"

Consultar_coordenada::Consultar_coordenada(Vector <Edificios> vector_edificio,Vector <Ubicaciones> vector_ubicaciones,Vector <Material> vector_materiales ,Mapa *mapa){
    
    this->vector_edificios_aux = vector_edificio;
    this->vector_ubicaciones_aux = vector_ubicaciones;
    this->vector_materiales_aux = vector_materiales;
    this->mapa_aux = mapa;
}


int Consultar_coordenada :: buscar_edificio(char simobolo_a_buscar) {
    
    bool encontrado = false;
    int pos_vector;
    int i = 0;
    while (i < vector_edificios_aux.tamanio() && encontrado == false){
        Edificios *edificio = vector_edificios_aux.devolver_info(i);
            if (edificio->devolver_simbolo() == simobolo_a_buscar ){
                pos_vector = i;
                encontrado = true;
            }
        i++;
    }
    return pos_vector;
}

int Consultar_coordenada :: buscar_material(char simobolo_a_buscar) {
   
    bool encontrado = false;
    int pos_vector;
    int i = 0;
    while (i < vector_materiales_aux.tamanio() && encontrado == false){
        Material *material = vector_materiales_aux.devolver_info(i);
            if (material->devolver_simbolo() == simobolo_a_buscar ){
                pos_vector = i;
                encontrado = true;
            }
        i++;
    }
    return pos_vector;
}


void Consultar_coordenada :: consultar_ubicacion(){

    cout << "Ingrese las coordenadas a consultar " << endl;
    cout << endl;
    coordenada_es_valida(&this->fil,&this->col,mapa_aux);
    Casillero *casilla = this->mapa_aux->devolver_casilla(fil,col);
    casilla->dar_mensaje();
    char simbolo_a_buscar = casilla->devolver_tipo();
    if (casilla->esta_ocupado() && simbolo_a_buscar != PIEDRA && simbolo_a_buscar != MADERA && simbolo_a_buscar != METAL ){
        Edificios *edificio = vector_edificios_aux.devolver_info(buscar_edificio(simbolo_a_buscar));
        edificio->imprimir_mensaje();
    }
    else if (casilla->esta_ocupado()){
        Material *material = vector_materiales_aux.devolver_info(buscar_material(simbolo_a_buscar));
        material->imprimir_mensaje();
    }
}
