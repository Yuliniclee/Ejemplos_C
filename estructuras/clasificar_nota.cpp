// Clasificador de notas: asigna una letra (A-F) según la nota numérica.
// Usa if-else if encadenados con rangos y validación de entrada.

#include <iostream>
using namespace std;

int main() {
    float nota;

    cout << "Ingrese su nota (0 - 100): ";
    cin >> nota;

    if (nota < 0 || nota > 100) {
        cout << "Error: La nota debe estar entre 0 y 100." << endl;
    } else if (nota >= 90) {
        cout << "Calificacion: A (Excelente)" << endl;
    } else if (nota >= 80) {
        cout << "Calificacion: B (Muy bien)" << endl;
    } else if (nota >= 70) {
        cout << "Calificacion: C (Bien)" << endl;
    } else if (nota >= 60) {
        cout << "Calificacion: D (Suficiente)" << endl;
    } else {
        cout << "Calificacion: F (Reprobado)" << endl;
    }

    return 0;
}
