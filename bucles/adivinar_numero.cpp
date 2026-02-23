// Adivinar un número: el programa genera un número "secreto"
// y el usuario tiene intentos limitados para adivinarlo.
// Usa while con contador de intentos y condicionales para
// dar pistas (mayor/menor).

#include <iostream>
using namespace std;

int main() {
    int secreto = 42;  // Número a adivinar
    int intento;
    int intentos_max = 5;
    int contador = 0;
    bool adivinado = false;

    cout << "=== Adivina el numero (entre 1 y 100) ===" << endl;
    cout << "Tienes " << intentos_max << " intentos." << endl;

    while (contador < intentos_max && !adivinado) {
        contador++;
        cout << "\nIntento " << contador << "/" << intentos_max << ": ";
        cin >> intento;

        if (intento == secreto) {
            adivinado = true;
            cout << "¡Felicidades! Adivinaste en " << contador << " intentos." << endl;
        } else if (intento < secreto) {
            cout << "El numero es MAYOR." << endl;
        } else {
            cout << "El numero es MENOR." << endl;
        }
    }

    if (!adivinado) {
        cout << "\nSe acabaron los intentos. El numero era: " << secreto << endl;
    }

    return 0;
}
