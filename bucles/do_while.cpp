// Es una estructura de control de bucle que permite
// repetir un bloque de código al menos una vez,
// y luego continuar repitiéndolo mientras una condición
// sea verdadera.
// Ejemplo: Menú que se repite hasta que el usuario elija salir.

#include <iostream>
using namespace std;

int main() {
    int opcion;
    int numero, resultado;

    do {
        cout << "\n=== MENU ==="  << endl;
        cout << "1. Calcular cuadrado de un numero" << endl;
        cout << "2. Verificar si es par o impar" << endl;
        cout << "3. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Ingrese un numero: ";
            cin >> numero;
            cout << numero << " al cuadrado = " << numero * numero << endl;
        } else if (opcion == 2) {
            cout << "Ingrese un numero: ";
            cin >> numero;
            if (numero % 2 == 0) {
                cout << numero << " es par." << endl;
            } else {
                cout << numero << " es impar." << endl;
            }
        } else if (opcion != 3) {
            cout << "Opcion no valida." << endl;
        }

    } while (opcion != 3);

    cout << "Programa finalizado." << endl;

    return 0;
}
