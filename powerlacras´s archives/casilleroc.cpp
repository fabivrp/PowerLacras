#include "casilleroc.h"


const char DISPONIBLE = 'C';
const char MADERA = 'W';
const char PIEDRA = 'S';
const char METAL = 'I';

/*CasilleroC :: CasilleroC(char tipo_casilla) : Casillero(tipo_casilla)
{
    this->tipo_casilla = tipo_casilla;
}*/



Casilleroc::Casilleroc(char tipo_casilla) : Casillero(tipo_casilla)
{}
 /*   this->tipo_casilla = tipo_casilla;
}*/
/*void Casilleroc :: mostrar(){
    cout << "hilo" << endl;
    cout << this -> tipo_casilla << endl;
}*/
//CasilleroC::~CasilleroC()
void Casilleroc :: mostrar(){
     switch(this -> tipo_casilla){

        case DISPONIBLE:

            cout << BGND_LIGHT_GRAY_246 << " " << END_COLOR;
            break;

        case MADERA:
            
            cout << BGND_BROWN_94 << this -> tipo_casilla << END_COLOR;
            break;

        case METAL:
            cout << BGND_ORANGE_214 << this -> tipo_casilla << END_COLOR;
            break;

        case PIEDRA:
            cout << BGND_LIGHT_AQUA_43 << this -> tipo_casilla << END_COLOR;
            break;
    }
}

