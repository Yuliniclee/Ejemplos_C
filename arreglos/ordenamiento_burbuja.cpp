// Ordenamiento por burbuja (Bubble Sort)
// Algoritmo que compara elementos adyacentes y los intercambia
// si están en el orden incorrecto, repitiendo hasta ordenar todo.
// Ejemplo: Ordenar un arreglo de números ingresados por el usuario.

#include <iostream>
using namespace std;

int main() {
    const int TAM = 6;
    int arreglo[TAM];

    cout << "Ingrese " << TAM << " numeros enteros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> arreglo[i];
    }

    cout << "\nArreglo original: ";
    for (int i = 0; i < TAM; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    // Algoritmo de ordenamiento burbuja
    for (int i = 0; i < TAM - 1; i++) {
        for (int j = 0; j < TAM - 1 - i; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                // Intercambiar elementos
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }

    cout << "Arreglo ordenado:  ";
    for (int i = 0; i < TAM; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}
