// Determina si un número es primo usando un ciclo for con break.
// Un número primo solo es divisible entre 1 y sí mismo.
// Combina for + if + break para una búsqueda eficiente.

#include <iostream>
using namespace std;

int main() {
    int numero;
    bool es_primo = true;

    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    if (numero <= 1) {
        es_primo = false;
    } else {
        for (int i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                es_primo = false;
                break;  // No necesitamos seguir buscando
            }
        }
    }

    if (es_primo) {
        cout << numero << " es un numero primo." << endl;
    } else {
        cout << numero << " NO es un numero primo." << endl;
    }

    return 0;
}
