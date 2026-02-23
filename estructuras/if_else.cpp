// Es una estructura de control condicional que permite ejecutar
// un bloque de código si una expresión booleana es verdadera (true)
// y otro bloque de código diferente si la expresión es falsa (false).
// Ejemplo: Verificar si un usuario puede votar según su edad.

#include <iostream>
using namespace std;

int main() {
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18 && edad <= 120) {
        cout << "Usted puede votar." << endl;
        cout << "Le faltan " << (65 - edad) << " años para jubilarse." << endl;
    } else if (edad > 0 && edad < 18) {
        cout << "Aun no puede votar." << endl;
        cout << "Le faltan " << (18 - edad) << " años para poder hacerlo." << endl;
    } else {
        cout << "Edad no valida." << endl;
    }

    return 0;
}
