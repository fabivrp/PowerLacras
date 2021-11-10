#include "recolectar_recursos.h"






Recolectar_recursos::Recolectar_recursos(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa) : Opciones(vector_edificio,vector_ubicaciones,vector_materiales,mapa){
}


void Recolectar_recursos :: accion(){
    for (int i = 0; i < vector_edificio->tamanio(); i++){
        Edificios* aux = vector_edificio->devolver_info(i);
        if (aux->cuanto_produce() > PRODUCCION_MINIMA){ 
            for (int j = 0; j < vector_materiales->tamanio(); j++){
                Material* aux_material = vector_materiales->devolver_info(j);
                if (aux->tipo_produccion() == aux_material->devolver_nombre()){
                    aux_material->agregar_al_stock(aux->cuanto_produce() * aux->devolver_construidos());    
                }
            }
        }
    }    
}
