#include <iostream>
using namespace std;

int main() {
    int filas, cols;

    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> cols;

    // Dibujar rectángulo hueco (solo borde)
    for (int i = 1; i <= filas; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == filas || j == 1 || j == cols) {
                cout << "* ";
            } else {
                cout << "  ";  // Espacio interior
            }
        }
        cout << endl;
    }

    return 0;
}
// Este programa dibuja un rectángulo HUECO de asteriscos.
// Solo imprime asteriscos en los bordes (primera/última fila y primera/última columna).
// El interior queda vacío, usando una condición if dentro de los bucles anidados.