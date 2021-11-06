#include "casillerot.h"

const char PLANTA_ELECTRICA = 'P';
const char DISPONIBLE = 'T';
const char ASERRADERO = 'A';
const char OBELISCO = 'O';
const char FABRICA = 'F';
const char ESCUELA = 'E';
const char MINA = 'M';





Casillerot::Casillerot(char tipo_casilla) : Casillero(tipo_casilla) {
}

void Casillerot :: mostrar(){

    switch(this -> tipo_casilla){
        case DISPONIBLE:
            cout << BGND_GREEN_34 << " " << END_COLOR;

            break;
        case PLANTA_ELECTRICA:
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
}
