#include"cargar_archivos.h"



Cargar_archivos::Cargar_archivos(/* args */)
{
}

Cargar_archivos::~Cargar_archivos()
{
}

Mapa* Cargar_archivos :: cargar_mapa(int *cont_archivos){
    Leer_archivos archivo = Leer_archivos("mapa.txt");
    Mapa* mapa = nullptr;
    if (archivo.hay_archivo()){
        ifstream archivo_mapa("mapa.txt");
        int fil = stoi(archivo.leer_hasta_espacio(archivo_mapa,' '));
        int col = stoi( archivo.leer_hasta_espacio(archivo_mapa,'\n'));
        mapa = new Mapa(fil,col);
        for(int i = 0 ; i < fil ; i++ ){
            char deli =' ';
            for (int j = 0 ; j < col ; j++){
                if(j+1 == col){
                    deli = '\n';
                }
                string letra = archivo.leer_hasta_espacio(archivo_mapa,deli);
                Casillero *casilla;
                Parser parser = Parser(letra[0]);
                casilla = parser.procesar_entrada();
                mapa->llenar_mapa(casilla,i,j);
            }
        }
        archivo_mapa.close();
        *cont_archivos = *cont_archivos + 1 ;
    }
    return mapa;
}

/*Edificios* Cargar_archivos :: cargar_edificios(int *cont_archivos){
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

Vector <Edificios> Cargar_archivos :: cargar_edificios(int *cont_archivos){
    Leer_archivos archivo = Leer_archivos("edificios.txt");
    Edificios* edificio;
    Vector <Edificios> vector;
    if (archivo.hay_archivo()){
        ifstream archivo_edificios("edificios.txt");
        while (!archivo_edificios.eof()){
            Parsere parsere = Parsere(archivo.leer_hasta_espacio(archivo_edificios,' '));
            edificio = parsere.procesar_entrada(archivo_edificios);
            vector.anadir_elemento(edificio);
        } 
        archivo_edificios.close();  
        *cont_archivos = *cont_archivos + 1 ;
    }
    return vector;
}

Vector <Ubicaciones> Cargar_archivos :: cargar_ubicaciones(int *cont_archivos){
    Leer_archivos archivo = Leer_archivos("ubicaciones.txt");
    Ubicaciones* ubicaciones;
    Vector <Ubicaciones> vector;
    if(archivo.hay_archivo()){
        ifstream archivo_ubicaciones("ubicaciones.txt");
        while (!archivo_ubicaciones.eof()){
            string nombre = archivo.leer_hasta_espacio(archivo_ubicaciones,' ');
            if(nombre == "planta") archivo.leer_hasta_espacio(archivo_ubicaciones,' ');
            archivo.leer_hasta_espacio(archivo_ubicaciones,'(');
            int fil = stoi(archivo.leer_hasta_espacio(archivo_ubicaciones,','));
            int col = stoi(archivo.leer_hasta_espacio(archivo_ubicaciones,')'));
            archivo.leer_hasta_espacio(archivo_ubicaciones,'\n');
            ubicaciones = new Ubicaciones(nombre,fil,col);
            vector.anadir_elemento(ubicaciones);
        }
        archivo_ubicaciones.close();
        *cont_archivos = *cont_archivos + 1 ;
    }
    return vector;
}

Vector <Material> Cargar_archivos :: cargar_materiales(int *cont_archivos){
    Leer_archivos archivo = Leer_archivos("materiales.txt");
    Material* material;
    Vector <Material> vector;
    if(archivo.hay_archivo()){
        ifstream archivo_materiales("materiales.txt");
        while (!archivo_materiales.eof()){
            material = new Material(archivo.leer_hasta_espacio(archivo_materiales,' '),stoi(archivo.leer_hasta_espacio(archivo_materiales,'\n')));
            vector.anadir_elemento(material);  

        }
        archivo_materiales.close();
        *cont_archivos = *cont_archivos + 1 ;
    }
    return vector;

}

