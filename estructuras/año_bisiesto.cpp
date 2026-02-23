// Determina si un año es bisiesto.
// Un año es bisiesto si:
//   - Es divisible entre 4 Y no divisible entre 100, O
//   - Es divisible entre 400.
// Ejemplo de condicionales con operadores lógicos combinados (&&, ||).

#include <iostream>
using namespace std;

int main() {
    int anio;

    cout << "Ingrese un año: ";
    cin >> anio;

    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        cout << anio << " es un año bisiesto." << endl;
    } else {
        cout << anio << " NO es un año bisiesto." << endl;
    }

    return 0;
}
