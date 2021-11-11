#ifndef H_P_LEER_ARCHIVOS_H
#define H_P_LEER_ARCHIVOS_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Leer_archivos
{

private:
string archivo_leer;

public:

    Leer_archivos(string archivo_leer);
    
    /*
    *PRE:
    *POST:Verifica qu el archivo que se quiere leer existe y si se pudo abrir
    */
    bool hay_archivo();

   /* string leer_hasta_espacio(ifstream & archivo,bool *si_leyo);*/
  
    /*
    *PRE:
    *POST:Lee el texto hasta un delimitador y lo almacena en una variable
    */
    string leer_hasta_espacio(ifstream & archivo,char delimitador);
    
};

#endif //H_P_LEER_ARCHIVOS_H