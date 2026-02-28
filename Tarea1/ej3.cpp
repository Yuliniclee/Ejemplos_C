#include <iostream>
using namespace std;

int main() {
    int opcion;
    float valor, resultado;

    cout << "--- CONVERSOR DE UNIDADES ---\n";
    cout << "1. Kilometros a Millas\n";
    cout << "2. Celsius a Fahrenheit\n";
    cout << "3. Kilos a Libras\n";
    cout << "4. Salir\n";
    cout << "Elija una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingrese los kilometros: ";
            cin >> valor;
            resultado = valor * 0.621371;
            cout << valor << " km equivalen a " << resultado << " millas.\n";
            break;
        case 2:
            cout << "Ingrese los grados Celsius: ";
            cin >> valor;
            resultado = (valor * 9.0/5.0) + 32;
            cout << valor << " C equivalen a " << resultado << " F.\n";
            break;
        case 3:
            cout << "Ingrese los kilos: ";
            cin >> valor;
            resultado = valor * 2.20462;
            cout << valor << " kg equivalen a " << resultado << " libras.\n";
            break;
        case 4:
            cout << "Saliendo del programa...\n";
            break;
        default:
            cout << "Opcion no valida.\n";
            break;
    }

    return 0;
}