#include <iostream>
using namespace std;

int main() {
    float precio;
    float total = 0.0; // Es vital inicializar el acumulador en 0
    float pago, cambio;

    cout << "--- MINI CAJA REGISTRADORA ---\n";
    cout << "(Ingrese 0 cuando haya terminado de registrar productos)\n\n";

    // 1. Ciclo para registrar productos
    do {
        cout << "Ingrese precio del producto: $";
        cin >> precio;
        total = total + precio; // Acumulamos el precio al total
    } while (precio != 0); // Se detiene si el usuario ingresa 0

    // 2. Mostrar total a pagar
    cout << "\n-------------------------\n";
    cout << "Total a pagar: $" << total << endl;

    // Solo pedimos el pago si hay algo que cobrar
    if (total > 0) {
        cout << "Con cuanto dinero va a pagar?: $";
        cin >> pago;

        // 3. Evaluar si el dinero alcanza
        if (pago >= total) {
            cambio = pago - total;
            cout << "Compra exitosa. Su cambio es: $" << cambio << endl;
        } else {
            float faltante = total - pago;
            cout << "Fondos insuficientes. Le faltan $" << faltante << endl;
        }
    }

    return 0;
}