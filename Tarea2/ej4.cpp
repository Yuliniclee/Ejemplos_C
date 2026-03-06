#include <iostream>
using namespace std;

int main() {
    int codigos[5] = {10, 20, 30, 40, 50};
    
    // El puntero apunta al inicio del arreglo (no necesitamos &)
    int* ptr = codigos; 

    cout << "--- Recorrido usando Aritmetica de Punteros ---\n";
    for(int i = 0; i < 5; i++) {
        // *(ptr + i) nos mueve de direccion en direccion y abre la memoria
        cout << "Elemento secreto " << i << ": " << *(ptr + i) << endl;
    }

    return 0;
}