// Es una estructura de control condicional que permite ejecutar
// un bloque de código si una expresión booleana es verdadera (true)
// y otro bloque de código diferente si la expresión es falsa (false).

#include <iostream>
using namespace std;

int main() {
    int numero = -3;

    if (numero >= 0) {
        cout << "El numero es positivo" << endl;
    } else {
        cout << "El numero es negativo" << endl;
    }

    return 0;
}
