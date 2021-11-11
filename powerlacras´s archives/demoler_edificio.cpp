#include "demoler_edificio.h"






Demoler_edificio::Demoler_edificio(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa){
    this->vector_edificios_aux = vector_edificio; 
    this->vector_ubicaciones_aux = vector_ubicaciones; 
    this->vector_materiales_aux = vector_materiales;
    this->mapa_aux = mapa;
}

void Demoler_edificio :: eliminar_del_vector(int pos){
    for(int i = pos ; i < this->vector_ubicaciones_aux->tamanio(); i++){
        this->vector_ubicaciones_aux[i] = this->vector_ubicaciones_aux[i+1];
    }

}
int Demoler_edificio :: buscar_edificicacion_en_ubicaciones(){
    for(int i = 0 ; i < vector_ubicaciones_aux->tamanio();i++){
        Ubicaciones *aux = vector_ubicaciones_aux->devolver_info(i);
        //Edificios *edificio = vector_edificios_aux->devolver_info(this->pos_vector_edificio_aux);
        if (aux->devolver_fil() == this->fil && aux->devolver_col()){
            return i;
        }
    }
}



/*
*/
void Demoler_edificio :: accion(){
        
    cout << "Ingrese las casillas del edificio que quiere demoler " << endl;
    cout << endl;
    coordenada_es_valida(&this->fil,&this->col,mapa_aux);
    Casillero *casilla = mapa_aux->devolver_casilla(this->fil,this->col); 
    if (casilla->esta_ocupado()){
        if(confirmo_accion("demolicion","edificio")){
            obtener_datos(casilla->devolver_tipo());
            Casilleroc* casillero = new Casilleroc(TERRENO);
            mapa_aux->actualizar_mapa(casillero, this->fil,this->col);
            Edificios* edificio = vector_edificios_aux->devolver_info(this->pos_vector_edificio_aux);
            edificio->disminuir_construidos();
            regresar_material(TIPO_PIEDRA, this->cant_piedra/2);
            regresar_material(TIPO_MADERA, this->cant_madera/2);
            regresar_material(TIPO_METAL, this->cant_metal/2);
            eliminar_del_vector(buscar_edificicacion_en_ubicaciones());
            cout << "La demolicion se ha realizado con exito" << endl;
        }
        else cout <<"Ha cancelado la demolicion :( " << endl;
        
    }
    else{
        cout << "La coordenada ingresada no tiene un edificio para demoler" << endl;
    }
}


bool Demoler_edificio :: hay_edificio(int fila, int columna){
    return false ; 
}

/*
*/
void Demoler_edificio :: obtener_datos(char tipo_casilla){


    this->pos_vector_edificio_aux = 0;
    Edificios* edificio_aux = this->vector_edificios_aux->devolver_info(this->pos_vector_edificio_aux); 
    
    while ((edificio_aux->devolver_simbolo() != tipo_casilla)){
        this->pos_vector_edificio_aux++;
        edificio_aux = this->vector_edificios_aux->devolver_info(this->pos_vector_edificio_aux);
    }
    
    this->cant_piedra = edificio_aux->devolver_cantidad_piedra();
    this->cant_madera = edificio_aux->devolver_cantidad_madera();
    this->cant_metal = edificio_aux->devolver_cantidad_metal();

}

void Demoler_edificio :: regresar_material(string tipo, int cant_material){

    int pos_vector_materiales_aux = 0;
    Material* aux = this->vector_materiales_aux->devolver_info(pos_vector_materiales_aux); 
    
    while ((aux->devolver_nombre() != tipo)){
        pos_vector_materiales_aux++;
        aux = this->vector_materiales_aux->devolver_info(pos_vector_materiales_aux);
    }

    aux->agregar_al_stock(cant_material);


}
