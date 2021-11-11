#include "casillerot.h"


Casillerot::Casillerot(char tipo_casilla) : Casillero(tipo_casilla) {}


void Casillerot :: mostrar(){

    if (this -> tipo_casilla == TERRENO)
        cout << BGND_LIGHT_GRAY_246 << " "<< this -> tipo_casilla <<" " << END_COLOR;
        
    else if (this -> tipo_casilla == MADERA){
        cout << BGND_BROWN_94  << " " << MADERA << " " << END_COLOR;
    }    
    else if (this -> tipo_casilla == METAL){
        cout << BGND_ORANGE_214 << " " << METAL << " " << END_COLOR;
    }     
    else if (this -> tipo_casilla == PIEDRA){
        cout << BGND_LIGHT_AQUA_43<< " " << PIEDRA << " " << END_COLOR;
    }
}    

void Casillerot :: cambiar_contenido(char tipo_nuevo){
    
    this->tipo_casilla = tipo_nuevo;
}

void Casillerot :: dar_mensaje(){
    
    if(this->ocupado){
    cout <<"La casilla es de tipo camino y ";
    }
    else cout <<"La casilla es de tipo camino y me ecuentro vacia " << endl;
}
