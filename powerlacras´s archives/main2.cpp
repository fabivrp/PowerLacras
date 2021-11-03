#include <iostream>
#include <fstream>
#include <string>
#include "casillero.h"

using namespace std;

const int ERROR = -1;
const int MAX_NOMBRE = 50;
const int MAX_EDIFICIOS = 100;
const int MAX_MATERIALES = 100;
const int CANTTIDAD_MINIMA_DEMOLICION = 1;
const char* TRANSITABLE = "T";


const string PATH_ARCHIVO_EDIFICIOS = "edificios.txt";
const string PATH_ARCHIVO_MATERIALES = "materiales.txt";
const string PATH_MAPA = "mapa.txt";
const string PATH_UBICACIONES = "ubicaciones.txt";

const string METAL = "Metal";
const string PIEDRA = "Piedra";
const string MADERA = "Madera";

struct Material{
    string tipo;
    int cantidad;
};

struct Edificio{
    string nombre;
    int piedra;
    int madera;
    int metal;
    int cantidad_permitida;
};


int main()
{

    
    int numero_fil = 3, numero_col = 3;
    Casillero**  mapa = new Casillero* [numero_fil];

    for (int i = 0; i < numero_fil; i++){
        mapa[i] = new Casillero(*TRANSITABLE) [numero_col];
    }

    mapa[0][0].tipo_casilla = *TRANSITABLE;

    cout << "tipo casilla: " << mapa[0][0].tipo_casilla << endl;

/* MATRIZ DINÁMICA 
*/
    return 0;
}



/*
void llenar_matriz(Edificio edificios[MAX_EDIFICIOS], int &tope){
    Edificio edificio;
    string cantidad_construida;
    string cantidad_permitida;
    int contador = 0;

    ifstream elementos(PATH_ARCHIVO_EDIFICIOS);

    if (!elementos.is_open()){
        perror("NO SE ENCONTRO EL ARCHIVO SOLICITADO");
        tope = ERROR;
    }
    else{
        while (elementos >> edificio.nombre){
            elementos >> edificio.piedra;
            elementos >> edificio.madera;
            elementos >> edificio.metal;
            elementos >> cantidad_construida;
            elementos >> cantidad_permitida;

            edificio.cantidad_construida = stoi(cantidad_construida);
            edificio.cantidad_permitida = stoi(cantidad_permitida);

            edificios[contador] = edificio;

            contador++;
        }

        tope = contador;  
    }

    elementos.close();
}


*/