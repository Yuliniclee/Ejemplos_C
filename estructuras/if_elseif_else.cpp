// Es una estructura de control condicional que permite ejecutar
// múltiples bloques de código basados en diferentes condiciones booleanas.

#include <iostream>
using namespace std;

int main() {
    int nota = 85;

    if (nota >= 90) {
        cout << "Excelente" << endl;
    } else if (nota >= 70) {
        cout << "Aprobado" << endl;
    } else {
        cout << "Reprobado" << endl;
    }

    return 0;
}
