#include"cargar_archivos.h"



Cargar_archivos::Cargar_archivos(/* args */)
{
}

Cargar_archivos::~Cargar_archivos()
{
}

Mapa* Cargar_archivos :: cargar_mapa(){
    Leer_archivos archivo = Leer_archivos("mapa_vacio.txt");
    Mapa* mapa = nullptr;
    if (archivo.hay_archivo()){
        ifstream archivo_mapa("mapa_vacio.txt");
        int fil = stoi(archivo.leer_hasta_espacio(archivo_mapa,' '));
        int col = stoi( archivo.leer_hasta_espacio(archivo_mapa,' '));
        mapa = new Mapa(fil,col);
        for(int i = 0 ; i < fil ; i++ ){
            //char deli =' ';
            for (int j = 0 ; j < col ; j++){
                if(j+1 == col){
                    //deli = '\n';
                }
                string letra = archivo.leer_hasta_espacio(archivo_mapa,' ');
                Casillero *casilla;
                Parser parser = Parser(letra[0]);
                casilla = parser.procesar_entrada();
                mapa->llenar_mapa(casilla,i,j);
            }
        }
        archivo_mapa.close();
    }
    return mapa;
}

/*Edificios* Cargar_archivos :: cargar_edificios(){
    Leer_archivos archivo = Leer_archivos("edificios.txt");
    Edificios* edificios;
    if (archivo.hay_archivo()){
        ifstream archivo_edificios("edificios.txt");
        for(int i = 0 ; !archivo_edificios.eof ; i++){
            Parsere parsere = Parsere(archivo.leer_hasta_espacio(archivo_edificios,' '));
            edificios[i] = parsere.procesar_entrada(archivo_edificios);
        } 
        archivo_edificios.close();  
    }
    return edificios;
}*/

Vector <Edificios> Cargar_archivos :: cargar_edificios(){
    Leer_archivos archivo = Leer_archivos("edificios.txt");
    Edificios* edificio;
    Vector <Edificios> vector;
    if (archivo.hay_archivo()){
        ifstream archivo_edificios("edificios.txt");
        for(int i = 0 ; !archivo_edificios.eof() ; i++){
            Parsere parsere = Parsere(archivo.leer_hasta_espacio(archivo_edificios,' '));
            edificio = parsere.procesar_entrada(archivo_edificios);
            vector.anadir_elemento(edificio);
        } 
        archivo_edificios.close();  
    }
    return vector;
}

/*Vector <Ubicaciones> Cargar_archivos :: cargar_ubicaciones(){
    Leer_archivos archivo = Leer_archivos("ubicaciones.txt");
    Ubicaciones* ubicaciones;
    if(archivo.hay_archivo()){
        ifstream archivo_ubicaciones("ubicaciones.txt");
        for(int i = 0 ;!archivo_ubicaciones.eof();i++ ){
            string nombre = archivo.leer_hasta_espacio(archivo_ubicaciones,' ');
            archivo.leer_hasta_espacio(archivo_ubicaciones,'(');
            int fil = stoi(archivo.leer_hasta_espacio(archivo_ubicaciones,','));
            int col = stoi(archivo.leer_hasta_espacio(archivo_ubicaciones,')'));
            archivo.leer_hasta_espacio(archivo_ubicaciones,'\n');
            //ubicaciones[i] = new Ubicaciones(nombre,fil,col); 
        }
        archivo_ubicaciones.close();
    }
    return ubicaciones;
}*/

