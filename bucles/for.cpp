// Es una estructura de control de bucle que permite
// repetir un bloque de código un número determinado
// de veces, utilizando una variable de control.
// Ejemplo: Calcular el factorial de un número ingresado por el usuario.

#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;

    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    if (n < 0) {
        cout << "No existe factorial de numeros negativos." << endl;
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << "El factorial de " << n << " es: " << factorial << endl;

    return 0;
}
