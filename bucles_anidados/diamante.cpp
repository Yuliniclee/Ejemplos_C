// Patrón de diamante con bucles anidados.
// El usuario ingresa la mitad del alto y el programa
// dibuja un diamante con asteriscos.
// Combina for anidados con condicionales para manejar
// espacios y asteriscos.
//
// Ejemplo con n=3:
//     *
//    ***
//   *****
//    ***
//     *

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese el tamaño del diamante (1-10): ";
    cin >> n;

    if (n < 1 || n > 10) {
        cout << "Tamaño invalido." << endl;
        return 0;
    }

    // Parte superior (incluye la fila central)
    for (int i = 1; i <= n; i++) {
        // Imprimir espacios
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Imprimir asteriscos
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Parte inferior
    for (int i = n - 1; i >= 1; i--) {
        // Imprimir espacios
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Imprimir asteriscos
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
