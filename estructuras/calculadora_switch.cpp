// Calculadora básica usando switch con entrada del usuario.
// Combina condicionales con operadores y validación de errores
// (como la división entre cero).

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operador;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el operador (+, -, *, /): ";
    cin >> operador;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    switch (operador) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: No se puede dividir entre cero." << endl;
            } else {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Operador no valido." << endl;
    }

    return 0;
}
