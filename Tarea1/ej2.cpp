#include <iostream>
using namespace std;

int main() {
    int edad;
    bool esEstudiante; // Leeremos 1 para true, 0 para false
    float precioFinal;

    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Tiene tarjeta de estudiante? (1 para Si, 0 para No): ";
    cin >> esEstudiante;

    // Evaluacion de condiciones
    if (edad < 12 || edad > 65) {
        precioFinal = 50.0; // Descuento por edad
    } else if (esEstudiante == true && (edad >= 12 && edad <= 65)) {
        precioFinal = 70.0; // Descuento por estudiante
    } else {
        precioFinal = 100.0; // Precio normal
    }

    cout << "El precio de su boleto es: $" << precioFinal << endl;

    return 0;
}