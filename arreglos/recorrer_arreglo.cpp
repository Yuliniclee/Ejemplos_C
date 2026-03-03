// Recorrer un arreglo e ingresar datos por teclado
// Se utiliza un bucle for para pedir al usuario que ingrese
// los elementos del arreglo y luego se muestran.
// Ejemplo: Leer N calificaciones y calcular el promedio.

#include <iostream>
using namespace std;

int main() {
    const int TAM = 5;
    float calificaciones[TAM];
    float suma = 0;

    cout << "Ingrese " << TAM << " calificaciones:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "Calificacion " << (i + 1) << ": ";
        cin >> calificaciones[i];
        suma += calificaciones[i];
    }

    float promedio = suma / TAM;

    cout << "\n=== Calificaciones ingresadas ===" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "Calificacion " << (i + 1) << ": " << calificaciones[i] << endl;
    }

    cout << "\nPromedio: " << promedio << endl;

    if (promedio >= 7.0) {
        cout << "Estado: Aprobado" << endl;
    } else {
        cout << "Estado: Reprobado" << endl;
    }

    return 0;
}
