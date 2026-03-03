// Declaración e inicialización de arreglos
// Un arreglo es una colección de elementos del mismo tipo
// almacenados en posiciones consecutivas de memoria.
// Ejemplo: Declarar un arreglo, asignar valores y mostrarlos.

#include <iostream>
using namespace std;

int main() {
    // Forma 1: Declarar e inicializar al mismo tiempo
    int numeros[5] = {10, 20, 30, 40, 50};

    // Forma 2: Declarar y luego asignar valores
    int edades[3];
    edades[0] = 18;
    edades[1] = 25;
    edades[2] = 30;

    // Forma 3: Inicialización parcial (los demás se llenan con 0)
    int datos[5] = {1, 2};

    cout << "=== Arreglo numeros ===" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "numeros[" << i << "] = " << numeros[i] << endl;
    }

    cout << "\n=== Arreglo edades ===" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "edades[" << i << "] = " << edades[i] << endl;
    }

    cout << "\n=== Arreglo datos (inicializacion parcial) ===" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "datos[" << i << "] = " << datos[i] << endl;
    }

    return 0;
}
