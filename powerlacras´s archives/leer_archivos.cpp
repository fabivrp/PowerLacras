#include "leer_archivos.h"
#include <string>
#include <fstream>
using namespace std;



Leer_archivos::Leer_archivos(string archivo_leer){
    this->archivo_leer = archivo_leer;
}

bool Leer_archivos::hay_archivo(){
    ifstream archivo(this->archivo_leer);
    if(!archivo.is_open()){
        cout << "No existe el archivo: " << this->archivo_leer << endl;
        return false;
    }
    archivo.close();
    return true;
}

/*string Leer_archivos :: leer_hasta_espacio(ifstream & archivo,bool *si_leyo){
    string leido;
    if (!(archivo >> leido)) *si_leyo = false;
    return leido;
}*/

string Leer_archivos :: leer_hasta_espacio(ifstream & archivo){
    string leido;
    archivo >> leido;
    return leido;
}




Leer_archivos::~Leer_archivos(){
}