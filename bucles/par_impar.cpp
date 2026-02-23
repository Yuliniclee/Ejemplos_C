#include <iostream>
using namespace std;

int main() {
    int n;
    int pares = 0, impares = 0;
    int suma_pares = 0, suma_impares = 0;

    cout << "Hasta que numero desea analizar? ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            pares++;
            suma_pares += i;
        } else {
            impares++;
            suma_impares += i;
        }
    }

    cout << "\nResultados del 1 al " << n << ":" << endl;
    cout << "Cantidad de pares: " << pares << " (suma: " << suma_pares << ")" << endl;
    cout << "Cantidad de impares: " << impares << " (suma: " << suma_impares << ")" << endl;
    cout << "Suma total: " << suma_pares + suma_impares << endl;

    return 0;
}
// Este programa pide un numero N al usuario y analiza los numeros del 1 al N.
// Cuenta cuantos son pares e impares, calcula la suma de cada grupo
// y muestra un resumen completo.