#ifndef H_P_CONSTANTES_H
#define H_P_CONSTANTES_H

#include <iostream>

using namespace std;

const string PATH_ENTRADA_EDIFICIOS = "edificios.txt";
const string PATH_ENTRADA_MATERIALES = "materiales.txt";
const string PATH_ENTRADA_MAPA = "mapa.txt";
const string PATH_ENTRADA_UBICACIONES = "ubicaciones.txt";


const int PRODUCCION_MINIMA = 0;
const int ESPACIO_MATERIALES = 16;
const int ESPACIO_COORDENADAS = 30;
const int ESPACIO_TIPO_EDIFICIO = 24;
const int ESPACIO_TIPO_MATERIAL = 24;
const int ESPACIO_UNIDADES_STOCK = 16;
const int ESPACIO_BRIDA_MATERIALES = 16;
const int ESPACIO_UNIDADES_CONSTRUIDAS = 16;
const int ESPACIO_UNIDADES_DISPONIBLES = 16;

const int MAX_PIEDRA = 2;
const int MIN_PIEDRA = 1;
const int MAX_MADERA = 1;
const int MIN_MADERA = 0;
const int MAX_METAL = 4;
const int MIN_METAL = 2;

const int MIN_FILAS = 0;
const int MIN_COLUMNAS = 0;

const char PLANTA_ELECTRICA = 'P';
const char ESCUELA = 'E';
const char OBELISCO = 'O';
const char ASERRADERO = 'A';
const char MINA = 'M';
const char FABRICA = 'F';
const char TERRENO = 'T';
const char LAGO = 'L';
const char CAMINO = 'C';
const char METAL = 'I';
const char MADERA = 'W';
const char PIEDRA = 'S';

const string TIPO_METAL = "metal";
const string TIPO_MADERA = "madera";
const string TIPO_PIEDRA = "piedra";

const string BRINDA_MATERIALES = "SI";
const string NO_BRINDA_MATERIALES = "NO";


#endif //H_P_CONSTANTES_H