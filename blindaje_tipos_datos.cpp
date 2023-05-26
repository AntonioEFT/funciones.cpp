#include <iostream>
#include <string> 
using namespace std;

// Prototipos de funciones
void print_robot();
void print_hamlet_quote();
void request_robot(string nombre, string tarea);
void robot_message(string nombre_robot, string estado_robot);

// Función principal
int main() {
    // Llamadas a las funciones con entradas de prueba
    print_robot();
    print_hamlet_quote();
    request_robot("CZ23", "regresar a la base");
    robot_message("RC-21\\M2", "El robot \"RC-21\\M2\" se está incendiando.");
    return 0;
}

// Definiciones de funciones
void print_robot() {
    cout << "  _________  " << endl;
    cout << " /         \\ " << endl;
    cout << "|  (o) (o)  |" << endl;
    cout << "|     ?     |" << endl;
    cout << "|  \\_____/  |" << endl;
    cout << " \\_________/ " << endl;
}

void print_hamlet_quote() {
    cout << "La cita de \"Hamlet\":" << endl;
    cout << "Ser o no ser, esa es la cuestión:" << endl;
    cout << "¿Qué es más noble para el alma," << endl;
    cout << "sufrir los golpes y las flechas de la adversidad," << endl;
    cout << "o tomar las armas contra un mar de tribulaciones," << endl;
    cout << "y, haciendo frente a ellas, acabar con ellas?" << endl;
}

void request_robot(string nombre, string tarea) {
    cout << "Se solicita al robot " << nombre << " " << tarea << endl;
}

void robot_message(string nombre_robot, string estado_robot) {
    cout << "El robot " << nombre_robot << " tiene un mensaje." << endl;
    cout << estado_robot;
}


