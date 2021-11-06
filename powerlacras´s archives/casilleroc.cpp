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
      
        if (this -> tipo_casilla == DISPONIBLE)
            cout << BGND_LIGHT_GRAY_246 << "   " << END_COLOR;
        
        if (this -> tipo_casilla == MADERA)
            cout << BGND_BROWN_94  << " " << MADERA << " " << END_COLOR;
        
        if (this -> tipo_casilla == METAL)
            cout << BGND_ORANGE_214 << " " << METAL << " " << END_COLOR;
         
        if (this -> tipo_casilla == PIEDRA)
            cout << BGND_LIGHT_AQUA_43<< " " << PIEDRA << " " << END_COLOR;
      
            
    
      /*
    cout << BGND_LIGHT_AQUA_43<<" " << this -> tipo_casilla << " "<<  END_COLOR;
    cout << BGND_LIGHT_BLUE_33 << this -> tipo_casilla << END_COLOR;
    */
}

