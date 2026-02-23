// Menú interactivo que combina switch + do-while.
// El menú se repite hasta que el usuario elija salir.
// Muestra cómo combinar condicionales con ciclos para
// crear programas con flujo de control más complejo.

#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {
        cout << "\n===== MENU PRINCIPAL =====" << endl;
        cout << "1. Saludar" << endl;
        cout << "2. Mostrar fecha" << endl;
        cout << "3. Contar del 1 al 10" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "¡Hola! Bienvenido al curso de C++." << endl;
                break;
            case 2:
                cout << "Hoy es 23 de febrero de 2026." << endl;
                break;
            case 3:
                for (int i = 1; i <= 10; i++) {
                    cout << i << " ";
                }
                cout << endl;
                break;
            case 4:
                cout << "¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
        }
    } while (opcion != 4);

    return 0;
}
