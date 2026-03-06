#include <iostream>
using namespace std;

int main() {
    int notas[5] = {4, 5, 3, 4, 2};
    int* ptr = notas;

    cout << "Ejecutando hackeo de notas...\n";
    
    // Bucle para modificar las notas directamente en la memoria
    for(int i = 0; i < 5; i++) {
        // A lo que hay en esa direccion, le sumamos 5 y lo volvemos a guardar ahi
        *(ptr + i) = *(ptr + i) + 5; 
    }

    // Bucle para comprobar el resultado (tambien usando punteros)
    cout << "\n--- Notas Modificadas (Aprobatorias) ---\n";
    for(int i = 0; i < 5; i++) {
        cout << "Nueva nota " << (i + 1) << ": " << *(ptr + i) << endl;
    }

    return 0;
}