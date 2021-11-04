#include "casilleroc.h"



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
    cout << this->tipo_casilla;
}

