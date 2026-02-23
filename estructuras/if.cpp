// Es una estructura de control condicional que ejecuta un bloque de código 
// solo si una expresión booleana específica es verdadera (true).
// Ejemplo: Verificar si un año es bisiesto usando condiciones combinadas.

#include <iostream>
using namespace std;

int main() {
    int anio;

    cout << "Ingrese un año: ";
    cin >> anio;

    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        cout << anio << " es un año bisiesto." << endl;
    }

    return 0;
}
