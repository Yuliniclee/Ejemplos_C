#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;

    cout << "Tabla de multiplicar del 1 al ? ";
    cin >> n;

    // Encabezado
    cout << "\n    |";
    for (int j = 1; j <= n; j++) {
        cout << setw(4) << j;
    }
    cout << endl;

    // Línea separadora
    cout << "----+";
    for (int j = 1; j <= n; j++) {
        cout << "----";
    }
    cout << endl;

    // Cuerpo de la tabla
    for (int i = 1; i <= n; i++) {
        cout << setw(3) << i << " |";
        for (int j = 1; j <= n; j++) {
            cout << setw(4) << i * j;
        }
        cout << endl;
    }

    return 0;
}
// Este programa genera una tabla de multiplicar formateada del tamaño que el usuario desee.
// Usa setw() de <iomanip> para alinear los números en columnas.
// Incluye encabezado con los factores y una línea separadora para mejor lectura.
// Ejemplo de salida con n=5:
//     |   1   2   3   4   5
// ----+--------------------
//   1 |   1   2   3   4   5
//   2 |   2   4   6   8  10
//   ...            