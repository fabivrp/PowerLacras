#include "demoler_edificio.h"






Demoler_edificio::Demoler_edificio(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa) : Opciones(vector_edificio,vector_ubicaciones,vector_materiales,mapa){
}





/*
*/
void Demoler_edificio :: accion(){
        
    this->coordenada_es_valida(&this->fil,&this->col);
    Casillero *casilla = mapa->devolver_casilla(this->fil,this->col); 

    if (casilla->esta_ocupado()){
        obtener_datos(casilla->devolver_tipo());
        Casilleroc* casillero = new Casilleroc(TERRENO);
        mapa->actualizar_mapa(casillero, this->fil,this->col);

        regresar_material(TIPO_PIEDRA, this->cant_piedra/2);
        regresar_material(TIPO_MADERA, this->cant_madera/2);
        regresar_material(TIPO_METAL, this->cant_metal/2);
       
    }
}


bool Demoler_edificio :: hay_edificio(int fila, int columna){
    return false ; 
}

/*
*/
void Demoler_edificio :: obtener_datos(char tipo_casilla){


    int pos_vector_edificio = 0;
    Edificios* aux = this->vector_edificio->devolver_info(pos_vector_edificio); 
    
    while ((aux->devolver_simbolo() != tipo_casilla)){
        pos_vector_edificio++;
        aux = this->vector_edificio->devolver_info(pos_vector_edificio);
    }
    
    this->cant_piedra = aux->devolver_cantidad_piedra();
    this->cant_madera = aux->devolver_cantidad_madera();
    this->cant_metal = aux->devolver_cantidad_metal();

}

void Demoler_edificio :: regresar_material(string tipo, int cant_material){
/*
    int contador = 0;
    Material* aux = this->vector_materiales->devolver_info(contador); 
    
    while ((aux->devolver_nombre() != tipo)){
        contador++;
        aux = this->vector_materiales->devolver_info(contador);
    }

    aux->agregar_al_stock(cant_material);
*/

}
