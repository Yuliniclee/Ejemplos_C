// Es una estructura de control condicional que permite
// ejecutar diferentes bloques de código basados en el valor
// de una expresión entera o de enumeración.

#include <iostream>
using namespace std;

int main() {
    int opcion = 2;

    switch (opcion) {
        case 1:
            cout << "Opcion 1" << endl;
            break;
        case 2:
            cout << "Opcion 2" << endl;
            break;
        case 3:
            cout << "Opcion 3" << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
    }

    return 0;
}
