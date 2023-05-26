#include <iostream>

using namespace std;

// Prototipos de funciones
void comprar_helados(int dinero, const int PRECIO_HELADO);
void chequear_palindromo(int num);

// Funci�n principal
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
        cout << "Se compr� un helado" << endl;
        cout << "Te quedan $" << dinero << " para comprar helados" << endl;
    }

    cout << "Ya no te queda dinero para comprar m�s helados" << endl;
}

void chequear_palindromo(int num) {
    int temp, digito, invertido = 0;

    temp = num;

    // Invertir el n�mero
    while (temp > 0) {
        digito = temp % 10;
        invertido = invertido * 10 + digito;
        temp /= 10;
    }

    if (num == invertido) {
        cout << num << " es un pal�ndromo" << endl;
    } else {
        cout << num << " no es un pal�ndromo" << endl;
    }
}


