#include "guardar.h"
#include <fstream>


Guardar :: Guardar(Vector <Ubicaciones> vector_ubicaciones,Vector <Edificios> vector_edificios,Vector <Material> vector_materiales, Mapa *mapa){
   this->vector_edificios_aux = vector_edificios; 
   this->vector_ubicaciones_aux = vector_ubicaciones; 
   this->vector_materiales_aux = vector_materiales;
   this->mapa_aux = *mapa;     
}

void Guardar ::guardar_edificios(){
    int cantidad_edificios = objetos -> tope_edificios ;
    for(int i = 0; i < cantidad_edificios; i++){
        archivo_e << objetos -> edificios_v[i] -> nombre << ' ';
        for (int j = 0; j < objetos -> edificios_v[i] -> tope_requerimientos;j++){
            archivo_e << objetos -> edificios_v[i] -> requerimientos[j].cant_material << ' ';
        }
        archivo_e << objetos -> edificios_v[i] -> cant_contruidos << ' '; 
        archivo_e << objetos -> edificios_v[i] -> cant_max_permitidos << endl; 
        delete objetos -> edificios_v[i];
        objetos -> tope_edificios --;
    }
    delete[] objetos -> edificios_v;
    objetos -> edificios_v = NULL;

   ofstream archivo_e("edificios2.txt");
   for(int i = 0 ; i < vector_edificios_aux.tamanio() ; i++){
      Edificios edificii
      archivo_e << 

   }

}
void Guardar ::guardar_ubicaciones(){}
void Guardar ::guardar_mapa(){}
void Guardar ::guardar_materiales(){}