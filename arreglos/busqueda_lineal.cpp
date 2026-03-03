// Búsqueda lineal en un arreglo
// Recorre el arreglo elemento por elemento hasta encontrar
// el valor buscado o llegar al final sin encontrarlo.
// Ejemplo: Buscar un producto por su código en un inventario.

#include <iostream>
using namespace std;

int main() {
    const int TAM = 8;
    int codigos[TAM] = {101, 205, 310, 412, 507, 603, 718, 899};
    string productos[TAM] = {"Lapiz", "Cuaderno", "Borrador", "Regla",
                              "Tijeras", "Pegamento", "Marcador", "Carpeta"};
    float precios[TAM] = {5.50, 25.00, 8.00, 12.50, 15.00, 10.00, 18.00, 30.00};

    int buscar;
    cout << "=== Sistema de Inventario ===" << endl;
    cout << "Codigos disponibles: ";
    for (int i = 0; i < TAM; i++) {
        cout << codigos[i] << " ";
    }
    cout << endl;

    cout << "\nIngrese el codigo del producto a buscar: ";
    cin >> buscar;

    // Búsqueda lineal
    bool encontrado = false;
    for (int i = 0; i < TAM; i++) {
        if (codigos[i] == buscar) {
            cout << "\nProducto encontrado!" << endl;
            cout << "Codigo:   " << codigos[i] << endl;
            cout << "Producto: " << productos[i] << endl;
            cout << "Precio:   $" << precios[i] << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "\nProducto con codigo " << buscar << " no encontrado." << endl;
    }

    return 0;
}
