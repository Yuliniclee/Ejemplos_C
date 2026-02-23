// Es una estructura de control condicional que permite ejecutar
// múltiples bloques de código basados en diferentes condiciones booleanas.
// Ejemplo: Clasificar el IMC (Índice de Masa Corporal) de una persona.

#include <iostream>
using namespace std;

int main() {
    float peso, altura, imc;

    cout << "Ingrese su peso en kg: ";
    cin >> peso;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;

    if (peso <= 0 || altura <= 0) {
        cout << "Error: los valores deben ser positivos." << endl;
        return 1;
    }

    imc = peso / (altura * altura);

    cout << "Su IMC es: " << imc << endl;

    if (imc < 18.5) {
        cout << "Clasificacion: Bajo peso" << endl;
    } else if (imc < 25.0) {
        cout << "Clasificacion: Peso normal" << endl;
    } else if (imc < 30.0) {
        cout << "Clasificacion: Sobrepeso" << endl;
    } else if (imc < 35.0) {
        cout << "Clasificacion: Obesidad grado 1" << endl;
    } else {
        cout << "Clasificacion: Obesidad grado 2 o superior" << endl;
    }

    return 0;
}
