// Secuencia de Fibonacci: genera los primeros N términos.
// Cada número es la suma de los dos anteriores: 0, 1, 1, 2, 3, 5, 8, 13...
// Demuestra el uso de variables auxiliares dentro de un ciclo for.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "¿Cuantos terminos de Fibonacci desea ver? ";
    cin >> n;

    if (n <= 0) {
        cout << "Debe ingresar un numero positivo." << endl;
        return 0;
    }

    long long a = 0, b = 1;

    cout << "\nSecuencia de Fibonacci (" << n << " terminos):" << endl;

    for (int i = 1; i <= n; i++) {
        cout << a;

        if (i < n) cout << ", ";

        long long siguiente = a + b;
        a = b;
        b = siguiente;
    }
    cout << endl;

    return 0;
}
