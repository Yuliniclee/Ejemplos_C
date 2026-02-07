// Es una estructura de control de bucle que permite
// repetir un bloque de código mientras una condición
// sea verdadera. 
//Usa while cuando la repetición dependa de una condición dinámica 
// y no sepas cuántas veces se ejecutará. 

#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 5) {
        cout << i << endl;
        i++;
    }

    return 0;
}
