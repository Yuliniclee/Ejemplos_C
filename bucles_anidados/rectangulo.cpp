#include <iostream>
using namespace std;

int main() {
    for (int fila = 1; fila <= 4; fila++) {
        for (int col = 1; col <= 6; col++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
// Este programa imprime un rectángulo de asteriscos de 4 filas y 6 columnas utilizando bucles anidados.
// El bucle externo itera sobre las filas, mientras que el bucle interno itera sobre las columnas.
// En cada iteración del bucle interno, se imprime un asterisco.
// Al finalizar el bucle interno, se imprime un salto de línea para comenzar una nueva fila