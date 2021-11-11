#include "parsere.h"
#include "leer_archivos.h"
#include "mina.h"
#include "aserradero.h"
#include "obelisco.h"
#include "planta_electrica.h"
#include "escuela.h"
#include "fabrica.h"


Parsere::Parsere(string nombre_edificio){
    this->entrada = nombre_edificio;
}

Edificios* Parsere :: procesar_entrada(ifstream & archivow){
    Edificios* edificios;
    Leer_archivos archivoe = Leer_archivos("edificios.txt");

    if(this->entrada == NOMBRE_MINA){
        edificios = new Mina(this->entrada,stoi(archivoe.leer_hasta_espacio(archivow,' ')),stoi(archivoe.leer_hasta_espacio(archivow,' ')),stoi(archivoe.leer_hasta_espacio(archivow,' ')),stoi(archivoe.leer_hasta_espacio(archivow,'\n')));
    }
    else if (this->entrada == NOMBRE_FABRICA){
        edificios = new Fabrica(this->entrada,stoi(archivoe.leer_hasta_espacio(archivow,' ')),stoi(archivoe.leer_hasta_espacio(archivow,' ')),stoi(archivoe.leer_hasta_espacio(archivow,' ')),stoi(archivoe.leer_hasta_espacio(archivow,'\n')));
    }
    else if (this->entrada == NOMBRE_ASERRADERO){
        edificios = new Aserradero(this->entrada,stoi(archivoe.leer_hasta_espacio(archivow,' ')),stoi(archivoe.leer_hasta_espacio(archivow,' ')),stoi(archivoe.leer_hasta_espacio(archivow,' ')),stoi(archivoe.leer_hasta_espacio(archivow,'\n')));
    }
    else if (this->entrada == NOMBRE_OBELISCO){
        edificios = new Obelisco(this->entrada,stoi(archivoe.leer_hasta_espacio(archivow,' ')),stoi(archivoe.leer_hasta_espacio(archivow,' ')),stoi(archivoe.leer_hasta_espacio(archivow,' ')),stoi(archivoe.leer_hasta_espacio(archivow,'\n')));
    }
    else if (this->entrada == NOMBRE_ESCUELA){
        edificios = new Escuela(this->entrada,stoi(archivoe.leer_hasta_espacio(archivow,' ')),stoi(archivoe.leer_hasta_espacio(archivow,' ')),stoi(archivoe.leer_hasta_espacio(archivow,' ')),stoi(archivoe.leer_hasta_espacio(archivow,'\n')));
    }
    else if (this->entrada == CASO_PLANTA){
        archivoe.leer_hasta_espacio(archivow,' ');
        edificios = new Planta_electrica(this->entrada,stoi(archivoe.leer_hasta_espacio(archivow,' ')),stoi(archivoe.leer_hasta_espacio(archivow,' ')),stoi(archivoe.leer_hasta_espacio(archivow,' ')),stoi(archivoe.leer_hasta_espacio(archivow,'\n')));
    }
    else{
        cout << "no esta" << endl;
    }
    return edificios;

}