#include "prueba.h"



/*
prueba::prueba(Vector <Ubicaciones> *vector){

    this->ubi = vector;
}*/
void prueba :: modificar(){
    Ubicaciones *ubican = new Ubicaciones("mina",0,0);
    vector_ubicaciones_aux->anadir_elemento(ubican);
}


prueba::prueba(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa){
   this->vector_edificios_aux = vector_edificio; 
   this->vector_ubicaciones_aux = vector_ubicaciones; 
   this->vector_materiales_aux = vector_materiales;
   this->mapa_aux = mapa;  
}

int prueba :: cant_material_requerido(string material ,Edificios *edificio){
    int cantidad;
    if(material == "piedra"){
        cantidad = edificio->devolver_cantidad_piedra(); 
    }
    else if(material == "madera"){
        cantidad = edificio->devolver_cantidad_madera(); 
    }
    else if(material == "metal"){
        cantidad = edificio->devolver_cantidad_metal(); 
    }
    return cantidad;
}
bool prueba :: hay_material(string nombre_material,int *pos_vector_material){
    bool si_hay = true; 
    
    if (hay_objeto2(nombre_material,*this->vector_materiales_aux,&(*pos_vector_material))){
        Edificios *edificio = this->vector_edificios_aux->devolver_info(this->pos_vector_edificio);
        int cantidad_material = cant_material_requerido(nombre_material,edificio);
        Material *material = this->vector_materiales_aux->devolver_info(*pos_vector_material);
        if(cantidad_material > material->devolver_stock()) si_hay = false;  
    }
    else{
        si_hay = false;
    }
    if (!si_hay) cout << "No hay suficiente: " << nombre_material << endl;
    return si_hay;
    
}
bool prueba :: hay_materiales_suficiente(){
    bool si_hay_materiales = false;
    if (hay_material("piedra",&this->pos_piedra) && hay_material("madera",&this->pos_madera) && hay_material("metal",&this->pos_metal)){
        si_hay_materiales = true;
    }
    if (!si_hay_materiales) cout << "No hay suficientes materiales para la construccion" << endl;
    return si_hay_materiales;

}
bool prueba ::hay_espacio(){
    bool no_hay = true;
    Edificios *edificio = this->vector_edificios_aux->devolver_info(this->pos_vector_edificio);
    if(edificio->devolver_construidos() + 1 > edificio->devolver_max_construccion()) no_hay = false;
    if(!no_hay) cout << "No hay espacio para constuir: " << edificio->devolver_nombre() << endl;
    return no_hay;
}
void prueba :: agregar_edificacion(){
    Edificios *edificio = this->vector_edificios_aux->devolver_info(this->pos_vector_edificio);
    edificio->aumentar_construidos();
    Ubicaciones *ubicacion_nueva = new Ubicaciones(this->edificio_a_construir,this->coordenada_fil,this->coordenada_col);
    this->vector_ubicaciones_aux->anadir_elemento(ubicacion_nueva);
    Casilleroc *casilla = new Casilleroc(edificio->devolver_simbolo());
    mapa_aux->actualizar_mapa(casilla,this->coordenada_fil,this->coordenada_col);
}
void prueba :: restar_material(int pos_vector_material,int cant_restar){
    Material *material = vector_materiales_aux->devolver_info(pos_vector_material);
    material->disminuir_stock(cant_restar);

}
void prueba :: restar_materiales(){

    Edificios *edificio = vector_edificios_aux->devolver_info(this->pos_vector_edificio);
    restar_material(this->pos_piedra,edificio->devolver_cantidad_piedra());
    restar_material(this->pos_madera,edificio->devolver_cantidad_madera());
    restar_material(this->pos_metal,edificio->devolver_cantidad_metal());


    
}


void prueba :: accion(){
    cout << "Que edificio desea construir" << endl;
    getline(cin,this->edificio_a_construir);
    if (edificio_a_construir == "planta electrica") edificio_a_construir = "planta";
    if (hay_objeto(edificio_a_construir,*this->vector_edificios_aux,&this->pos_vector_edificio) && hay_espacio()){
        if(hay_materiales_suficiente()){
            cout << "si hay el materiaaaalll" << endl;
            if(hay_coordenada_disponible(&this->coordenada_fil,&this->coordenada_col,mapa_aux)){
                if (confirmo_accion("construir","edificio")) {
                    agregar_edificacion();
                    restar_materiales();
                }
            }
        }
    }
}
