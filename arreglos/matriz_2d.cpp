// Arreglos bidimensionales (Matrices)
// Una matriz es un arreglo de dos dimensiones, organizado
// en filas y columnas, como una tabla.
// Ejemplo: Sumar dos matrices de 3x3 ingresadas por el usuario.

#include <iostream>
using namespace std;

int main() {
    const int FILAS = 3;
    const int COLS = 3;
    int matrizA[FILAS][COLS], matrizB[FILAS][COLS], resultado[FILAS][COLS];

    // Leer Matriz A
    cout << "=== Ingrese la Matriz A (3x3) ===" << endl;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> matrizA[i][j];
        }
    }

    // Leer Matriz B
    cout << "\n=== Ingrese la Matriz B (3x3) ===" << endl;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "B[" << i << "][" << j << "] = ";
            cin >> matrizB[i][j];
        }
    }

    // Sumar matrices
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            resultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    // Mostrar resultados
    cout << "\n=== Matriz A ===" << endl;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrizA[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\n=== Matriz B ===" << endl;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrizB[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\n=== Matriz Resultado (A + B) ===" << endl;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << resultado[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
