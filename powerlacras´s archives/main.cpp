#include <iostream>
#include "casillero.h"
#include "casilleroc.h"
#include "edificios.h"
#include "mina.h"




using namespace std;

int main()
{
    Mina* q = new Mina(50,20,30,100);
    cout << q->devolver_construidos() << endl;
    q->aumentar_construidos();
    cout << q->devolver_construidos() << endl;
    cout << q->cuanto_produce() << endl;

    Casillero*** mapa = new Casillero**[10];
    for (int i = 0; i<10;i++){
        mapa[i] = new Casillero*[10]; 
    }
    char casiilla = 'M';
    if(casiilla == 'M'){
        Casilleroc* casilla = new Casilleroc('M');
         mapa[0][0] = casilla;
    }
/* MATRIZ DINÁMICA 
    int numero_fil = 3, numero_col = 3;
    Casillero**  mapa_ = new Casillero* [numero_fil];

    for (int i = 0; i < numero_fil; i++){
        mapa[i] = new Casillero [numero_col];
    }

*/
    return 0;
}


