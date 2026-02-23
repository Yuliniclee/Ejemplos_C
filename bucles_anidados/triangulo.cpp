#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese la altura del triangulo: ";
    cin >> n;

    // Triángulo centrado con números
    for (int i = 1; i <= n; i++) {
        // Espacios para centrar
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        // Números ascendentes
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        // Números descendentes (espejo)
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
// Este programa dibuja un triángulo centrado con números en forma de pirámide.
// Cada fila muestra números que suben hasta el número de fila y luego bajan.
// Ejemplo con n=4:
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1