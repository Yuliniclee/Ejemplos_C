// Suma de dígitos de un número con validación usando do-while.
// El programa solicita un número positivo y repite la petición
// si el usuario ingresa un valor negativo.
// Luego calcula la suma de sus dígitos.
// Ejemplo: 1234 -> 1+2+3+4 = 10

#include <iostream>
using namespace std;

int main() {
    int numero;

    // Validar entrada: pedir hasta que sea positivo
    do {
        cout << "Ingrese un numero entero positivo: ";
        cin >> numero;

        if (numero < 0) {
            cout << "Error: el numero debe ser positivo. Intente de nuevo." << endl;
        }
    } while (numero < 0);

    int suma = 0;
    int temp = numero;

    while (temp > 0) {
        suma += temp % 10;  // Sumar último dígito
        temp /= 10;          // Eliminar último dígito
    }

    cout << "La suma de los digitos de " << numero << " es: " << suma << endl;

    return 0;
}
