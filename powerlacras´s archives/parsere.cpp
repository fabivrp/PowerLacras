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

    if(this->entrada == "mina"){
        edificios = new Mina(this->entrada,stoi(archivoe.leer_hasta_espacio(archivow)),stoi(archivoe.leer_hasta_espacio(archivow)),stoi(archivoe.leer_hasta_espacio(archivow)),stoi(archivoe.leer_hasta_espacio(archivow)));
    }
    else if (this->entrada == "fabrica"){
        edificios = new Fabrica(this->entrada,stoi(archivoe.leer_hasta_espacio(archivow)),stoi(archivoe.leer_hasta_espacio(archivow)),stoi(archivoe.leer_hasta_espacio(archivow)),stoi(archivoe.leer_hasta_espacio(archivow)));
    }
    else if (this->entrada == "aserradero"){
        edificios = new Aserradero(this->entrada,stoi(archivoe.leer_hasta_espacio(archivow)),stoi(archivoe.leer_hasta_espacio(archivow)),stoi(archivoe.leer_hasta_espacio(archivow)),stoi(archivoe.leer_hasta_espacio(archivow)));
    }
    else if (this->entrada == "obelisco"){
        edificios = new Obelisco(this->entrada,stoi(archivoe.leer_hasta_espacio(archivow)),stoi(archivoe.leer_hasta_espacio(archivow)),stoi(archivoe.leer_hasta_espacio(archivow)),stoi(archivoe.leer_hasta_espacio(archivow)));
    }
    else if (this->entrada == "escuela"){
        edificios = new Escuela(this->entrada,stoi(archivoe.leer_hasta_espacio(archivow)),stoi(archivoe.leer_hasta_espacio(archivow)),stoi(archivoe.leer_hasta_espacio(archivow)),stoi(archivoe.leer_hasta_espacio(archivow)));
    }
    else if (this->entrada =="planta"){
        archivoe.leer_hasta_espacio(archivow);
        edificios = new Planta_electrica(this->entrada,stoi(archivoe.leer_hasta_espacio(archivow)),stoi(archivoe.leer_hasta_espacio(archivow)),stoi(archivoe.leer_hasta_espacio(archivow)),stoi(archivoe.leer_hasta_espacio(archivow)));
    }
    else{
        cout << "no esta" << endl;
    }
    
    return edificios;

}

//string Parser ::tipo_casilla(){
//
//}