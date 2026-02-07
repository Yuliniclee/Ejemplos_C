// && (AND)
// El operador && (AND lógico) en C++ evalúa dos expresiones y devuelve true solo si ambas son 
// verdaderas; de lo contrario, devuelve false.

#include <iostream>
using namespace std;

int main() {
    int edad = 20;

    if (edad >= 18 && edad <= 65) {
        cout << "Edad permitida" << endl;
    }

    return 0;
}
