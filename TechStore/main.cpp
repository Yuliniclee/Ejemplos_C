#include "inventario.h"

#include <iostream>

int main() {
    using namespace std;

    Producto inventario[MAX_PRODUCTOS];
    int cantidadActual = 0;
    int opcion;

    do {
        cout << "\n===== TechStore - Sistema de Gestión =====\n";
        cout << "1. Agregar producto\n";
        cout << "2. Mostrar inventario\n";
        cout << "3. Vender producto\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                agregarProducto(inventario, cantidadActual);
                break;
            case 2:
                mostrarInventario(inventario, cantidadActual);
                break;
            case 3:
                venderProducto(inventario, cantidadActual);
                break;
            case 4:
                cout << "Saliendo del sistema...\n";
                break;
            default:
                cout << "Opción inválida. Intente de nuevo.\n";
                break;
        }
    } while (opcion != 4);

    return 0;
}
