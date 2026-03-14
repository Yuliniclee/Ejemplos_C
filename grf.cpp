#include <iostream>
using namespace std;

int main() {
    int numeros[4] = {10, 20, 30, 40};
    int* ptr = numeros; // ptr apunta al '10'

    cout << "Valor original: " << numeros[2] << endl; // Imprime: 30

    // Magia de punteros: 
    // 1. (ptr + 2) nos mueve a la direccion del tercer elemento.
    // 2. El '*' abre esa direccion.
    // 3. El '=' guarda el nuevo valor adentro.
    
    *(ptr + 2) = 99; 

    cout << "Nuevo valor modificado: " << numeros[2] << endl; // Imprime: 99

    return 0;
}
