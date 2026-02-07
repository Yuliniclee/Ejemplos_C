// ! (NOT) operador lógico de negación
// Invierte el valor de verdad de una expresión booleana: convierte true en false y false en true.

#include <iostream>
using namespace std;

int main() {
    bool esSoleado = true;
    // Si no está soleado, salir a caminar
    if (!esSoleado) {
        cout << "Sal a caminar" << endl;
    } else {
        cout << "Quédate en casa" << endl; // Esto se ejecutará
    }
    return 0;
}
