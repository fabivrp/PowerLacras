#include "inicio.h"


void imprimir_salida(const string color_1, const string color_2){

cout << color_1 << "\t\t\t    " "                                 .''.                     " << endl <<    
               "\t\t\t    "  "       .''.             *''*    :_" << color_2 << "\\/" << color_1 << "_:     .              "  << endl << 
               "\t\t\t    "  "      :_" << color_2 << "\\/" << color_1 << "_:   .    .:.*_" << color_2 << "\\/" << color_1 << "_*   : " << color_2 << "/\\" << color_1 << " :  .'.:.'.           " << endl << 
               "\t\t\t    "  "  .''.: " << color_2 << "/\\" << color_1 << " : _" << color_2 << "\\(/" << color_1 << "_  ':'* " << color_2 << "/\\" << color_1 << " *  : '..'.  -=" << color_2 << ":o:" << color_1 << "=-           "<< endl << 
               "\t\t\t    "  " :_" << color_2 << "\\/" << color_1 << "_:'.:::. " << color_2 << "/)\\" << color_1 << "*''*  " <<TXT_LIGHT_BLUE_39 << ".|."<< color_1<< "* '.\\'/.'_" << color_2 << "\\(/" << color_1 << "_'.':'.'           "<<endl << 
               "\t\t\t    "  " : " << color_2 << "/\\" << color_1 << " : :" << color_2 << ":::" << color_1 << ":  '*_" << color_2 << "\\/" << color_1 << "_* " <<TXT_LIGHT_BLUE_39 << "| |"<< color_1<< "  -= " << color_2 << "o" << color_1 << " =- " << color_2 << "/)\\" << color_1 << "    '  *           "<<endl << 
               "\t\t\t    "  "  '..'  ':::'   * " << color_2 << "/\\" << color_1 << " * " <<TXT_LIGHT_BLUE_39 << "|'|"<< color_1<< "  .'/.\\'.  '." <<TXT_LIGHT_BLUE_39<< "_____              "<<endl << 
               "\t\t\t    "  "      " << color_1 << "*        " <<TXT_LIGHT_BLUE_39<< "__" << color_1 << "*..*" <<TXT_LIGHT_BLUE_39<< " |  |     :      |.   |' .---'|     "  << endl << 
               "\t\t\t    "  "       _" << color_1 << "*" <<TXT_LIGHT_BLUE_39<< "   .-'   '-. |  |     .--'|  ||   | _|    |     "<< endl << 
               "\t\t\t    "  "    .-'|  _.|  |    ||   '-__  |   |  |    ||      |     "<< endl << 
               "\t\t\t    "  "    |' | |.    |    ||       | |   |  |    ||      |     "<< endl << 
               "\t\t\t    "  " ___|  '-'     '    ''       '-'   '-.'    '`      |____ "<< END_COLOR << endl; 



}
void mostrar_salida_parpadeante(){

    bool estado = true;
    int contar = 0;

    do
    {
        if (contar == 0){
            system("clear");
            imprimir_salida(END_COLOR,TXT_LIGHT_RED_9);
            sleep_for(seconds(1));
        }
        if (contar == 1){
            system("clear");
            imprimir_salida(TXT_LIGHT_RED_9,TXT_LIGHT_YELLOW_155 );
            sleep_for(seconds(1));
        }
        if (contar == 2){
            system("clear");
            imprimir_salida(TXT_LIGHT_YELLOW_155,TXT_LIGHT_PURPLE_135 );
            sleep_for(seconds(1));
        }
        if (contar == 3){
            system("clear");
            imprimir_salida(TXT_LIGHT_PURPLE_135,TXT_LIGHT_GREEN_119 );
            sleep_for(seconds(1));
        }
        if (contar == 4){
            system("clear");
            imprimir_salida(TXT_LIGHT_GREEN_119, TXT_LIGHT_PINK_204 );
            sleep_for(seconds(1));
        }
        if (contar == 5){
            system("clear");
            imprimir_salida(TXT_LIGHT_PINK_204,END_COLOR );
            sleep_for(seconds(1));
        }
        if (contar == 6){
            system("clear");
            imprimir_salida(END_COLOR,END_COLOR );
            estado=false;
            sleep_for(seconds(1));
        }

        contar ++;
    } while (estado ==true);
    
}

void imprimir_edificio(){
    cout << TXT_LIGHT_BLUE_39 << "                                                                                                " << TXT_LIGHT_YELLOW_185 << "☺/" << END_COLOR << TXT_LIGHT_BLUE_39 << endl <<
            "                                                         " << TXT_LIGHT_YELLOW_185 << "\\☺/" << TXT_LIGHT_BLUE_39 << "                             ╦  ╦╦ " << TXT_LIGHT_YELLOW_185 << "/|" << TXT_LIGHT_BLUE_39 << " ╦ " << endl <<
            "                                                       ╦╦ " << TXT_LIGHT_YELLOW_185 << "|" << TXT_LIGHT_BLUE_39 << " ╦╦                           ╔╗╔╗╔╗╔╗╔╗" << endl <<
            "                                                       ╔╗╔╗╔╗╔         " <<TXT_LIGHT_YELLOW_185 << "███" <<TXT_LIGHT_BLUE_39 << "║              ╔╗╔╗╔╗╔╗╔╗                 " << endl <<
            "   " << TXT_LIGHT_PINK_167 << "█PL█" << TXT_LIGHT_BLUE_39 << "                                 " <<TXT_LIGHT_GREEN_46 << "█AP█║" <<TXT_LIGHT_BLUE_39 << "          ╔╔╗  ╔╗            ║          ╔╗╔╗╔╗╔╗╔╗╔╗╔╗              " << endl <<
            "      ║                                     ║          ╔╔╗  ╔╗           ╦╦          ╔╗╔╗╔    ╔╗╔╗╔              " << endl <<
            "   ╦╦ ║ ╦╦           " << TXT_LIGHT_YELLOW_185 << "███" << TXT_LIGHT_BLUE_39 << "║            ╦╦    ╦╦    ╦╦    ╔╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗    ╔╗╔╗╔             " << endl <<
            "  ╔╗╔╗╔╗╔╗              ║           ╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗" <<TXT_LIGHT_YELLOW_185 << "/======\\\\\\\\\\\\\\\\" << TXT_LIGHT_BLUE_39 << "╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗                     " << endl <<
            "╦╗╔╗╔╗╔╗╔╗╔╦    ╦╦   ╦╦ ║ ╦╦  ╦╦    ╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╔╗╔╗╔╗" <<TXT_LIGHT_YELLOW_185 << "/========\\\\\\\\\\\\\\\\" << TXT_LIGHT_BLUE_39 << "╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╦╦╔╗╔╗    ╦╦    ╦" << endl <<
            "╔╗╔  ╗╔╗╔╗╔╗╔╗╔╗╔╗╔□╗╔╗╔╗╔□╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗/    \\╔╗╔╗╔╗╔╗╔╗╔╗" <<TXT_LIGHT_YELLOW_185 << "/==========\\\\\\\\\\\\\\\\" << TXT_LIGHT_BLUE_39 << "╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔" << endl <<
            "╔╗╔  ╗╔╗╔----╗╔╗╔╗╔□╗╔╗╔╗╔□╗╔╗╔╗╔╗╔╗╔╗╔╗╔□      ╗╔╗╔╗╔╗╔╗╔╗╔" <<TXT_LIGHT_YELLOW_185 << "║░░░░████░░║░░░░░░║" << TXT_LIGHT_BLUE_39 << "╗╔╗╔╗╔╗╔╗╔╗    ╔╗╔╗╔╗╔╗╔----╔╗╔╗╔╗╔" << endl<<
            "╔╗╔╗╔╗╔╗╔    ╗╔╗╔□╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔      ╗╔╗╔╗╔╗╔╗╔╗╔" <<TXT_LIGHT_YELLOW_185 << "║░░░░███▀░░║░░░░░░║" << TXT_LIGHT_BLUE_39 << "╗╔╗╔╗╔╗╔╗╔╗    ╔╗╔╗╔╗╔╗╔    ╔╗╔╗╔╗╔" << endl <<
            "╔╗╔╗╔╗╔╗╔    ╗╔╗╔╗╔□╗╔╗╔╗╔□╗╔╗╔╗╔╗╔╗╔╗╔╗╔□      ╗╔╗╔╗╔╗╔╗╔╗╔" <<TXT_LIGHT_YELLOW_185 << "║░░░░████░░║░░░░░░║" << TXT_LIGHT_BLUE_39 << "╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔    ╔╗╔╗╔╗╔ " << END_COLOR << endl;


}

void imprimir_bienvenida(){

    cout << "\t\t"" ____  _                           _     _        " << endl <<    
            "\t\t""| __ )(_) ___ _ ____   _____ _ __ (_) __| | ___  ___           __ _  " << endl << 
            "\t\t""|  _ \\| |/ _ \\ '_ \\ \\ / / _ \\ '_ \\| |/ _` |/ _ \\/ __|         / _` |   " << endl << 
            "\t\t""| |_) | |  __/ | | \\ V /  __/ | | | | (_| | (_) \\__ \\        | (_| | " << endl << 
            "\t\t""|____/|_|\\___|_| |_|\\_/ \\___|_| |_|_|\\__,_|\\___/|___/         \\__,_|    " << endl << 
            "\t\t\t""    _              _                   _ _            " << endl <<
            "\t\t\t""   / \\   _ __   __| |_   _ _ __   ___ | (_)___        " << endl <<
            "\t\t\t""  / _ \\ | '_ \\ / _` | | | | '_ \\ / _ \\| | / __|       " << endl <<
            "\t\t\t"" / ___ \\| | | | (_| | |_| | |_) | (_) | | \\__ \\       " << endl <<
            "\t\t\t""/_/   \\_\\_| |_|\\__,_|\\__, | .__/ \\___/|_|_|___/      " << endl << 
            "\t\t\t""                     |___/|_|                         "<< endl;

}

void imprimir_menu(){
     cout <<"╔-------------------------------------------------------╗" << endl << 
            "|          ACTIVIDAD REALIZABLE           |   OPCION    |" << endl <<
            "|--------------------------------------------------------" << endl <<
            "|      Construir edificio por nombre      |      1      |" << endl <<
            "|--------------------------------------------------------" << endl <<
            "|      Listar edificios construidos       |      2      |" << endl <<
            "|--------------------------------------------------------" << endl <<
            "|       Listar todos los edificios        |      3      |" << endl <<
            "|--------------------------------------------------------" << endl <<
            "|     Demoler edificio por coordenada     |      4      |" << endl <<
            "|--------------------------------------------------------" << endl <<
            "|              Mostrar mapa               |      5      |" << endl <<
            "|--------------------------------------------------------" << endl <<
            "|          Consultar coordenada           |      6      |" << endl <<
            "|--------------------------------------------------------" << endl <<
            "|           Mostrar inventario            |      7      |" << endl <<
            "|--------------------------------------------------------" << endl <<
            "|     Recolectar recursos producidos      |      8      |" << endl <<
            "|--------------------------------------------------------" << endl <<
            "|           Lluvia de recursos            |      9      |" << endl <<
            "|--------------------------------------------------------" << endl <<
            "|             Guardar y salir             |     10      |" << endl <<
            "╚-------------------------------------------------------╝" << endl;
}


