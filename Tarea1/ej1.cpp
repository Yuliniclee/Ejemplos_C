#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, nota3;
    float suma, promedio;

    // 1. Pedir datos
    cout << "Ingrese la calificacion 1: ";
    cin >> nota1;
    cout << "Ingrese la calificacion 2: ";
    cin >> nota2;
    cout << "Ingrese la calificacion 3: ";
    cin >> nota3;

    // 2. Operaciones aritmeticas
    suma = nota1 + nota2 + nota3;
    promedio = suma / 3.0; // Usamos 3.0 para asegurar division decimal

    // 3. Mostrar resultados
    cout << "\nLa suma total es: " << suma << endl;
    cout << "El promedio final es: " << promedio << endl;

    return 0;
}