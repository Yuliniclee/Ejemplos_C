// Punteros y arreglos
// Un puntero puede apuntar al primer elemento de un arreglo
// y recorrerlo usando aritmética de punteros.
// Ejemplo: Recorrer un arreglo con punteros, modificar valores
// y mostrar direcciones de memoria.

#include <iostream>
using namespace std;

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};
    int *ptr = numeros; // ptr apunta al primer elemento del arreglo

    // === Recorrer el arreglo usando el puntero ===
    cout << "=== Recorrido con puntero ===" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "*(ptr + " << i << ") = " << *(ptr + i)
             << "  |  Direccion: " << (ptr + i) << endl;
    }

    // === Comparar notación de arreglo vs puntero ===
    cout << "\n=== Arreglo vs Puntero ===" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "numeros[" << i << "] = " << numeros[i]
             << "  |  *(ptr + " << i << ") = " << *(ptr + i) << endl;
    }

    // === Modificar valores del arreglo a través del puntero ===
    cout << "\n=== Modificando valores con puntero ===" << endl;
    for (int i = 0; i < 5; i++) {
        *(ptr + i) = *(ptr + i) * 2; // duplicar cada elemento
    }

    cout << "Valores despues de duplicar:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "numeros[" << i << "] = " << numeros[i] << endl;
    }

    // === Recorrer con incremento de puntero ===
    cout << "\n=== Recorrido incrementando el puntero ===" << endl;
    int *p = numeros;
    for (int i = 0; i < 5; i++) {
        cout << "Valor: " << *p << "  |  Direccion: " << p << endl;
        p++; // avanzar al siguiente elemento
    }

    return 0;
}
