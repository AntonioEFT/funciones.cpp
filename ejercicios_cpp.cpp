#include <iostream>

using namespace std;

// Prototipos de funciones
void comprar_helados(int dinero, const int PRECIO_HELADO);
void chequear_palindromo(int num);

// Función principal
int main() {
    comprar_helados(50, 5);
    chequear_palindromo(12321);
    return 0;
}

// Definiciones de funciones
void comprar_helados(int dinero, const int PRECIO_HELADO) {
    cout << "Dinero disponible: $" << dinero << endl;
    cout << "Precio del helado: $" << PRECIO_HELADO << endl;

    while (dinero >= PRECIO_HELADO) {
        dinero -= PRECIO_HELADO;
        cout << "Se compró un helado" << endl;
        cout << "Te quedan $" << dinero << " para comprar helados" << endl;
    }

    cout << "Ya no te queda dinero para comprar más helados" << endl;
}

void chequear_palindromo(int num) {
    int temp, digito, invertido = 0;

    temp = num;

    // Invertir el número
    while (temp > 0) {
        digito = temp % 10;
        invertido = invertido * 10 + digito;
        temp /= 10;
    }

    if (num == invertido) {
        cout << num << " es un palíndromo" << endl;
    } else {
        cout << num << " no es un palíndromo" << endl;
    }
}


