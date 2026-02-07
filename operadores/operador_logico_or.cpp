// || (OR)
// Devuelve true si al menos una de las condiciones evaluadas es verdadera, 
// y false solo si ambas son falsas.

#include <iostream>
using namespace std;

int main() {
    char letra = 'a';

    if (letra == 'a' || letra == 'e') {
        cout << "Es una vocal" << endl;
    }

    return 0;
}
