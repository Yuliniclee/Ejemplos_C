// Es una estructura de control de bucle que permite
// repetir un bloque de código al menos una vez,
// y luego continuar repitiéndolo mientras una condición
// sea verdadera.

#include <iostream>
using namespace std;

int main() {
    int i = 1;

    do {
        cout << i << endl; 
        i++;
    } while (i <= 5);

    return 0;
}
