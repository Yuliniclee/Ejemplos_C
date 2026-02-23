// Es una estructura de control de bucle que permite
// repetir un bloque de código mientras una condición
// sea verdadera. 
// Usa while cuando la repetición dependa de una condición dinámica 
// y no sepas cuántas veces se ejecutará.
// Ejemplo: Sumar números ingresados por el usuario hasta que escriba 0.

#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0;
    int cantidad = 0;

    cout << "Ingrese numeros enteros (0 para terminar):" << endl;
    cin >> numero;

    while (numero != 0) {
        suma += numero;
        cantidad++;
        cin >> numero;
    }

    if (cantidad > 0) {
        cout << "Se ingresaron " << cantidad << " numeros." << endl;
        cout << "Suma total: " << suma << endl;
        cout << "Promedio: " << (float)suma / cantidad << endl;
    } else {
        cout << "No se ingresaron numeros." << endl;
    }

    return 0;
}
