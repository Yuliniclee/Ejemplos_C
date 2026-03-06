#include <iostream>
using namespace std;

int main() {
    int cantidades[5];

    // 1. Bucle para llenar el arreglo
    cout << "--- Registro de Inventario ---\n";
    for(int i = 0; i < 5; i++) {
        // Usamos (i + 1) para que el usuario vea "Producto 1" en vez de "Producto 0"
        cout << "Ingrese la cantidad del producto " << (i + 1) << ": ";
        cin >> cantidades[i];
    }

    // 2. Bucle para mostrar el arreglo
    cout << "\n--- Resumen de Inventario ---\n";
    for(int i = 0; i < 5; i++) {
        cout << "Producto [" << (i + 1) << "]: " << cantidades[i] << " unidades\n";
    }

    return 0;
}