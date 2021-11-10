#include "casillerot.h"



const char DISPONIBLE = 'C';
const char MADERA = 'W';
const char PIEDRA = 'S';
const char METAL = 'I';




Casillerot::Casillerot(char tipo_casilla) : Casillero(tipo_casilla) {
}

void Casillerot :: mostrar(){

            

    if (this -> tipo_casilla == DISPONIBLE)
        cout << BGND_LIGHT_GRAY_246 << " "<< this -> tipo_casilla <<" " << END_COLOR;
        
    if (this -> tipo_casilla == MADERA)
        cout << BGND_BROWN_94  << " " << MADERA << " " << END_COLOR;
        
    if (this -> tipo_casilla == METAL)
        cout << BGND_ORANGE_214 << " " << METAL << " " << END_COLOR;
         
    if (this -> tipo_casilla == PIEDRA)
        cout << BGND_LIGHT_AQUA_43<< " " << PIEDRA << " " << END_COLOR;
}      

void Casillerot :: cambiar_contenido(char tipo_nuevo){
    this->tipo_casilla = tipo_nuevo;
}
/*
            
DISPONIBLE:
            cout << BGND_GREEN_34 << "   " << END_COLOR;

            PLANTA_ELECTRICA:
            cout << BGND_YELLOW_220 << this -> tipo_casilla << END_COLOR;

            break;
        case ASERRADERO:
            cout << BGND_ORANGE_208 << this -> tipo_casilla << END_COLOR;

            break;
        case ESCUELA:
            cout << BGND_PINK_199 << this -> tipo_casilla << END_COLOR;

            break;
        case MINA:
            cout << BGND_BLACK_16 << this -> tipo_casilla << END_COLOR;

            break;
        case FABRICA:
            cout << BGND_RED_160 << this -> tipo_casilla << END_COLOR;

            break;
        case OBELISCO:
            cout << BGND_LIGHT_PURPLE_177 << this -> tipo_casilla << END_COLOR;

            break;
    }
    cout << BGND_LIGHT_BLUE_33 << this -> tipo_casilla << END_COLOR;
    */

