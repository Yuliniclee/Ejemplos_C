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

    // === Actualizar un elemento específico del arreglo con punteros ===
    cout << "\n=== Actualizar un elemento con puntero ===" << endl;
    int indice;
    int nuevoValor;

    cout << "Ingrese el indice del elemento a actualizar (0-4): ";
    cin >> indice;

    if (indice >= 0 && indice < 5) {
        cout << "Valor actual en numeros[" << indice << "] = " << *(ptr + indice) << endl;

        cout << "Ingrese el nuevo valor: ";
        cin >> nuevoValor;

        *(ptr + indice) = nuevoValor; // actualizar el elemento usando el puntero

        cout << "Valor actualizado en numeros[" << indice << "] = " << *(ptr + indice) << endl;

        // Mostrar el arreglo completo después de la actualización
        cout << "\nArreglo despues de la actualizacion:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "numeros[" << i << "] = " << *(ptr + i) << endl;
        }
    } else {
        cout << "Indice fuera de rango." << endl;
    }

    return 0;
}
