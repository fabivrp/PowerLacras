#include "casilleroc.h"


const char PLANTA_ELECTRICA = 'P';
const char DISPONIBLE = 'T';
const char ASERRADERO = 'A';
const char OBELISCO = 'O';
const char FABRICA = 'F';
const char ESCUELA = 'E';
const char MINA = 'M';

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
      
        if (this -> tipo_casilla == DISPONIBLE)
                cout << BGND_GREEN_34 << " "<< this ->tipo_casilla <<" " << END_COLOR;

            if (this -> tipo_casilla == PLANTA_ELECTRICA)
                cout << BGND_YELLOW_220 << this -> tipo_casilla << END_COLOR;

            if (this -> tipo_casilla == ASERRADERO)
                cout << BGND_ORANGE_208 << this -> tipo_casilla << END_COLOR;

            if (this -> tipo_casilla == ESCUELA)
                cout << BGND_PINK_199 << this -> tipo_casilla << END_COLOR;

            if (this -> tipo_casilla == MINA)
                cout << BGND_BLACK_16 << this -> tipo_casilla << END_COLOR;

            if (this -> tipo_casilla == FABRICA)
                cout << BGND_RED_160 << this -> tipo_casilla << END_COLOR;

            if (this -> tipo_casilla == OBELISCO)
                cout << BGND_LIGHT_PURPLE_177 << this -> tipo_casilla << END_COLOR;

          

      /*
      
    cout << BGND_LIGHT_AQUA_43<<" " << this -> tipo_casilla << " "<<  END_COLOR;
    cout << BGND_LIGHT_BLUE_33 << this -> tipo_casilla << END_COLOR;
    */
}

