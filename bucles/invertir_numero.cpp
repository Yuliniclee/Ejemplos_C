// Invertir un número entero usando while.
// Ejemplo: 12345 -> 54321
// Usa operaciones con módulo (%) y división entera (/)
// para extraer dígitos uno a uno.

#include <iostream>
using namespace std;

int main() {
    int numero, original;
    int invertido = 0;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    original = numero;  // Guardamos el original para mostrarlo después

    // Manejo de números negativos
    if (numero < 0) {
        numero = -numero;
    }

    while (numero > 0) {
        int digito = numero % 10;       // Extraer último dígito
        invertido = invertido * 10 + digito;  // Agregar dígito al resultado
        numero = numero / 10;           // Eliminar último dígito
    }

    if (original < 0) {
        invertido = -invertido;
    }

    cout << "Numero original: " << original << endl;
    cout << "Numero invertido: " << invertido << endl;

    return 0;
}
