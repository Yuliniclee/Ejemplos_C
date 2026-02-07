#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }

    return 0;
}
// Este programa imprime una tabla de multiplicar del 1 al 5 utilizando bucles anidados.
// que consiste en un bucle externo que itera sobre los números del 1 al 5 (representando el primer factor)
// y un bucle interno que también itera del 1 al 5 (representando el segundo factor).
// En cada iteración del bucle interno, se calcula y se imprime el producto de los dos factores, seguido de una tabulación para separar los valores.
// Al finalizar el bucle interno, se imprime un salto de línea para comenzar una nueva fila en la tabla.            