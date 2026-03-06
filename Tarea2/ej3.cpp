#include <iostream>
using namespace std;

int main() {
    int mision = 100;
    int* ptrMision = &mision; // El puntero guarda la direccion de 'mision'

    // 1. Valor normal
    cout << "Valor normal de la variable: " << mision << endl;
    
    // 2. Direccion de memoria (puntero sin asterisco)
    cout << "Direccion de memoria: " << ptrMision << endl;
    
    // 3. Valor desreferenciado (puntero con asterisco)
    cout << "Valor a traves del puntero: " << *ptrMision << endl;

    return 0;
}