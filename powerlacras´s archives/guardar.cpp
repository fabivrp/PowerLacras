#include "guardar.h"
#include <fstream>


Guardar :: Guardar(Vector <Ubicaciones> vector_ubicaciones,Vector <Edificios> vector_edificios,Vector <Material> vector_materiales, Mapa *mapa){
   this->vector_edificios_aux = vector_edificios; 
   this->vector_ubicaciones_aux = vector_ubicaciones; 
   this->vector_materiales_aux = vector_materiales;
   this->mapa_aux = mapa;     
}

void Guardar ::guardar_edificios(){
    
   ofstream archivo_e("edificios2.txt");
   for(int i = 0 ; i < this->vector_edificios_aux.tamanio() ; i++){
        Edificios *edificio = this->vector_edificios_aux.devolver_info(i);
        string nombre_imprimir = edificio->devolver_nombre();
        if(nombre_imprimir == "planta") nombre_imprimir = "planta electrica";
        archivo_e << nombre_imprimir << ' ';
        archivo_e << edificio->devolver_cantidad_piedra() << ' ';
        archivo_e << edificio->devolver_cantidad_madera() << ' ';
        archivo_e << edificio->devolver_cantidad_metal() << ' ';
        archivo_e << edificio->devolver_max_construccion() << endl;
   }

}
void Guardar ::guardar_ubicaciones(){
    ofstream archivo_u("ubicaciones2.txt");
    for(int i = 0 ; i < this->vector_ubicaciones_aux.tamanio() ; i++){
        Ubicaciones *ubicacion = this->vector_ubicaciones_aux.devolver_info(i);
        string nombre_imprimir = ubicacion->devolver_nombre();
        if(nombre_imprimir == "planta") nombre_imprimir = "planta electrica";
        archivo_u << nombre_imprimir << ' ' << '(';
        archivo_u << ubicacion->devolver_fil() << ',' << ' ';
        archivo_u << ubicacion->devolver_col() << ')' << endl;
   }

}
void Guardar ::guardar_mapa(){
    ofstream archivo_m("mapa2.txt");
    archivo_m << this->mapa_aux->devolver_filas() << ' ' << this->mapa_aux->devolver_columnas() << endl;
    for(int i = 0; i < this->mapa_aux->devolver_filas(); i++){
        for (int j = 0; j < this->mapa_aux->devolver_columnas(); j++){
            Casillero *casilla = this->mapa_aux->devolver_casilla(i,j);
            archivo_m << casilla->devolver_tipo() << ' ';
        }
        archivo_m << endl;
    }


}
void Guardar ::guardar_materiales(){
    ofstream archivo_m("materiales2.txt");
    for(int i = 0 ; i < this->vector_materiales_aux.tamanio() ; i++){
        Material *material = this->vector_materiales_aux.devolver_info(i);
        archivo_m << material->devolver_nombre() << ' ';
        archivo_m << material->devolver_stock()  << endl;
   }

}
void Guardar ::guardar_todo(){
    guardar_edificios();
    guardar_ubicaciones();
    guardar_mapa();
    guardar_materiales();
}