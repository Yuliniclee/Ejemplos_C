#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            cout << i << " es par" << endl;
        } else {
            cout << i << " es impar" << endl;
        }
    }

    return 0;
}
// Este programa determina si los números del 1 al 10 son pares o impares utilizando un bucle for.
// En cada iteración del bucle, se verifica si el número actual (i) es divisible por 2.
// Si lo es, se imprime que el número es par; de lo contrario, se imprime que es impar.