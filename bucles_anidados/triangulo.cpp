#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
// Este programa imprime un triángulo de números utilizando bucles anidados.
// El bucle externo itera sobre las filas del triángulo, mientras que el bucle interno itera desde 1 hasta el número de la fila actual.
// En cada iteración del bucle interno, se imprime el valor de j, que representa el número en esa posición del triángulo.
// Al finalizar el bucle interno, se imprime un salto de línea para comenzar una nueva fila.