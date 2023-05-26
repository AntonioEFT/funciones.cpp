//PORFAVOR ESTO EN https://www.programiz.com/cpp-programming/online-compiler/
#include <iostream>
#include <string>

using namespace std;

void snippet1() {
    // Snippet 1: Obtener la parte entera de la suma de dos números
    double num1, num2;
    cout << "Ingrese dos números double: ";
    cin >> num1 >> num2;
    int sum = static_cast<int>(num1 + num2); // Convertir la suma a entero
    cout << "La parte entera de la suma es: " << sum << endl;
}

void snippet2() {
    // Snippet 2: Mostrar la cantidad de documentos encontrados
    int doc;
    string respuesta;

    cout << "Ingrese el número de documentos: ";
    cin >> doc;

    respuesta = to_string(doc) + " documentos encontrados";

    cout << respuesta << endl;
}

void snippet3() {
    // Snippet 3: Verificar si un código ingresado coincide con un código predefinido
    string codigo = "12345678"; // Código del collar de Fibo
    string codigo_ingresado;

    cout << "Ingrese el código del collar: ";
    cin >> codigo_ingresado;

    if (codigo == codigo_ingresado) {
        cout << "El código ingresado pertenece a Fibo." << endl;
    } else {
        cout << "El código ingresado NO pertenece a Fibo." << endl;
    }
}

void snippet4() {
    // Snippet 4: Calcular el costo de un producto con descuento basado en su costo inicial y valores de descuento
    double n, a, b, x, y, descuento;
    cout << "Ingrese el costo inicial del producto: ";
    cin >> n;
    cout << "Ingrese el valor de A: ";
    cin >> a;
    cout << "Ingrese el valor de B: ";
    cin >> b;
    cout << "Ingrese el valor de X: ";
    cin >> x;
    cout << "Ingrese el valor de Y: ";
    cin >> y;

    if (n > b) {
        descuento = y;
    } else if (n > a) {
        descuento = x;
    } else {
        descuento = 0;
    }

    double costo_descuento = n * (1 - descuento / 100);
    cout << "El costo del smartphone con descuento es de: " << costo_descuento << " bolivianos" << endl;
}

void snippet5() {
    // Snippet 5: Mostrar la cantidad de documentos encontrados
    int num_documentos;
    cout << "Ingrese el número de documentos encontrados: ";
    cin >> num_documentos;

    if (num_documentos == 0) {
        cout << "No se encontraron documentos" << endl;
    } else if (num_documentos == 1) {
        cout << "Se encontró un documento" << endl;
    } else {
        cout << num_documentos << " documentos encontrados" << endl;
    }
}

void snippet6() {
    // Snippet 6: Determinar en qué casa está Marqués basado en el color y el número de pisos de la casa
    string color;
    int pisos;
    cout << "¿De qué color es la casa que vio el transeúnte? ";
    cin >> color;
    cout << "¿Cuántos pisos tiene la casa que vio el transeúnte? ";
    cin >> pisos;

    bool casa_1 = (color == "blanca" && pisos == 2);
    bool casa_2 = (color == "amarilla" && pisos == 1);
    bool casa_3 = (color == "gris" && pisos == 3);

    if (casa_1) {
        cout << "Marqués está en la casa #1." << endl;
    } else if (casa_2) {
        cout << "Marqués está en la casa #2." << endl;
    } else if (casa_3) {
        cout << "Marqués está en la casa #3." << endl;
    } else {
        cout << "Lo siento, no puedo determinar en qué casa está Marqués." << endl;
    }
}

void snippet7() {
    // Snippet 7: Verificar si un caracter ingresado está en mayúsculas o minúsculas
    char c;

    cout << "Ingrese un caracter: ";
    cin >> c;

    if (c >= 'A' && c <= 'Z') {
        cout << "El caracter está en mayúsculas" << endl;
    } else if (c >= 'a' && c <= 'z') {
        cout << "El caracter está en minúsculas" << endl;
    } else {
        cout << "No es un caracter" << endl;
    }
}

void snippet8() {
    // Snippet 8: Determinar el puesto de mayor jerarquía al que un candidato puede postularse
    int edad, experiencia;
    string puesto;

    cout << "Ingrese la edad del candidato: ";
    cin >> edad;

    if (edad < 18) {
        cout << "El candidato es demasiado joven." << endl;
        return;
    }

    cout << "Ingrese los años de experiencia del candidato: ";
    cin >> experiencia;

    if (experiencia >= 5) {
        puesto = "Director de proyecto senior";
    } else if (experiencia >= 3) {
        puesto = "Director de proyecto";
    } else {
        puesto = "Coordinador de proyecto";
    }

    cout << "El puesto de mayor jerarquía al que puede postularse es: " << puesto << endl;
}

int main() {
    // Llamar a cada función de código snippet
    snippet1();
    snippet2();
    snippet3();
    snippet4();
    snippet5();
    snippet6();
    snippet7();
    snippet8();

    return 0;
}

