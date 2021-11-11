#include "edificios.h"


Edificios :: Edificios(string nombre ,int piedra,int madera, int metal, int cant_max_construidos ){
    this->nomrbe_edificio = nombre;
    this->piedra = piedra;
    this->madera = madera;
    this->metal = metal;
    this->cant_max_construidos = cant_max_construidos;
    this->cant_construidos = 0;


}
Edificios :: ~Edificios(){}

void Edificios :: aumentar_construidos(){
     
     this->cant_construidos++;
}
void Edificios :: disminuir_construidos(){
     
     this->cant_construidos--;
}

int Edificios :: devolver_construidos(){
    
    return this->cant_construidos;
}
string Edificios :: devolver_nombre(){
    
    return this->nomrbe_edificio;
}

char Edificios :: devolver_simbolo(){
    
    return this->simbolo;
}

int Edificios :: devolver_cantidad_piedra(){
   
   return this->piedra;
}
int Edificios :: devolver_cantidad_madera(){
    
    return this->madera;
}

int Edificios :: devolver_cantidad_metal(){
    
    return this->metal;
}

int Edificios :: devolver_max_construccion(){
    
    return this->cant_max_construidos;
}

int Edificios :: cuanto_produce(){
    
    return this->produccion;
}

