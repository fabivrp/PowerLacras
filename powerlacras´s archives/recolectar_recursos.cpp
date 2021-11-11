#include "recolectar_recursos.h"

Recolectar_recursos::Recolectar_recursos(Vector <Edificios> vector_edificio,Vector <Material> *vector_materiales){
    
    this->vector_edificios_aux = vector_edificio;
    this->vector_materiales_aux = vector_materiales;
}


void Recolectar_recursos :: accion(){
    
    cout << "Comenzando recoleccion.... " << endl;
    for (int i = 0; i < vector_edificios_aux.tamanio(); i++){
        Edificios* aux = vector_edificios_aux.devolver_info(i);
        if (aux->cuanto_produce() > PRODUCCION_MINIMA){ 
            for (int j = 0; j < vector_materiales_aux->tamanio(); j++){
                Material* aux_material = vector_materiales_aux->devolver_info(j);
                if (aux->tipo_produccion() == aux_material->devolver_nombre()){
                    int produccion = aux->cuanto_produce() * aux->devolver_construidos();
                    aux_material->agregar_al_stock(produccion);
                    cout << "Recolectado: " << produccion << " " << aux->devolver_nombre() << endl;    
                }
            }
        }
    } 
    cout << "Lista la recoleccion :) " << endl;  
}
