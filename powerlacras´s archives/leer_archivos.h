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
    bool hay_archivo();


    string leer_hasta_espacio(ifstream & archivo);
    
    
    
    
    
    ~Leer_archivos();
};







#endif //H_P_LEER_ARCHIVOS_H