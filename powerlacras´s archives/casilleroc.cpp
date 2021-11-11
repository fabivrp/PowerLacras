#include "casilleroc.h"

Casilleroc::Casilleroc(char tipo_casilla) : Casillero(tipo_casilla){}

void Casilleroc :: mostrar(){
      
        if (this -> tipo_casilla == TERRENO){
                cout << BGND_GREEN_34 << " "<< this ->tipo_casilla <<" " << END_COLOR;
        }
        else if (this -> tipo_casilla == PLANTA_ELECTRICA){
                cout << BGND_YELLOW_220 <<" "<< this ->tipo_casilla <<" " << END_COLOR;
        }
        else if (this -> tipo_casilla == ASERRADERO){
                cout << BGND_ORANGE_208 " "<< this ->tipo_casilla <<" "<< END_COLOR;
        }
        else if (this -> tipo_casilla == ESCUELA){
                cout << BGND_PINK_199 " "<< this ->tipo_casilla <<" "<< END_COLOR;
        }
        else if (this -> tipo_casilla == MINA){
                cout << BGND_BLACK_16 " "<< this ->tipo_casilla <<" "<< END_COLOR;
        }
        else if (this -> tipo_casilla == FABRICA){
                cout << BGND_RED_160 " "<< this ->tipo_casilla <<" "<< END_COLOR;
        }
        else if (this -> tipo_casilla == OBELISCO){
                cout << BGND_LIGHT_PURPLE_177 <<" "<< this ->tipo_casilla <<" "<< END_COLOR;
        }
}

void Casilleroc :: dar_mensaje(){
   
    if(this->ocupado){
        cout << "La casilla es de tipo terreno y ";
    }
    else cout << "La casilla es de tipo terreno y se ecuentra vacia " << endl;
}

