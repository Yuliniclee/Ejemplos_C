#include <iostream>
using namespace std;

int main() {
    int pinCorrecto = 2024;
    int pinIngresado;
    bool accesoConcedido = false;

    for (int intento = 1; intento <= 3; intento++) {
        cout << "Ingrese su PIN (Intento " << intento << " de 3): ";
        cin >> pinIngresado;

        if (pinIngresado == pinCorrecto) {
            cout << "\nAcceso Concedido." << endl;
            accesoConcedido = true;
            break; // Rompe el bucle porque ya adivino el PIN
        } else {
            cout << "PIN incorrecto.\n";
        }
    }

    // Si el bucle termino y el acceso sigue siendo falso
    if (accesoConcedido == false) {
        cout << "\nTelefono Bloqueado." << endl;
    }

    return 0;
}