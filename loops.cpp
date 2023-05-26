#include <iostream>
#include <string>

using namespace std;

// Prototipos de funciones
void buscar_fluffy(string color);
void comprobar_suma(int x, int y, int suma);
void dividir_naranja(double tamano1, double tamano2);
void adivinar_numero(int a);
void imprimir_rango(int primer_num, int segundo_num);
void separar_palabras(string entrada);

// Función principal
int main() {
    buscar_fluffy("verde");
    comprobar_suma(5, 7, 12);
    dividir_naranja(5.5, 5.5);
    adivinar_numero(5);
    imprimir_rango(1, 5);
    separar_palabras("Hola como estas");
    return 0;
}

// Definiciones de funciones
void buscar_fluffy(string color) {
    int casa;

    if (color == "rojo") {
        casa = 1;
    } else if (color == "verde") {
        casa = 2;
    } else if (color == "azul") {
        casa = 3;
    } else {
        cout << "Color no válido. Ingrese uno de los siguientes colores: rojo, verde, azul." << endl;
        return;
    }

    cout << "Necesita hablar con la casa número " << casa << " sobre su mascota, Fluffy." << endl;
}

void comprobar_suma(int x, int y, int suma) {
    int z = x + y;

    if (suma != z) {
        cout << "Error. La suma de " << x << " y " << y << " es " << z << endl;
    }
}

void dividir_naranja(double tamano1, double tamano2) {
    if (tamano1 == tamano2) {
        cout << "La naranja se divide en dos partes iguales." << endl;
    } else if (tamano1 > tamano2) {
        double diferencia = tamano1 - tamano2;
        cout << "Cortar " << diferencia << " de la primera parte." << endl;
    } else {
        double diferencia = tamano2 - tamano1;
        cout << "Cortar " << diferencia << " de la segunda parte." << endl;
    }
}

void adivinar_numero(int a) {
    int b;
    do {
        cout << "Adivina el número: " << endl;
        cin >> b;
    } while (a != b);
    cout << "¡Correcto!" << endl;
}

void imprimir_rango(int primer_num, int segundo_num) {
    for (int i = primer_num; i <= segundo_num; i++) {
        cout << i << endl;
    }
}

void separar_palabras(string entrada) {
    string palabra;
    for (int i = 0; i < entrada.length(); i++) {
        if (entrada[i] == ' ') {
            cout << "[" << palabra << "]" << endl;
            palabra = "";
        } else {
            palabra += entrada[i];
        }
    }
    cout << "[" << palabra << "]" << endl;
}


