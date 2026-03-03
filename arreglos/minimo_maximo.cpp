// Encontrar el valor mínimo y máximo en un arreglo
// Se recorre el arreglo comparando cada elemento con
// el mínimo y máximo actual para encontrar los extremos.
// Ejemplo: Encontrar la temperatura más alta y más baja de la semana.

#include <iostream>
using namespace std;

int main() {
    const int DIAS = 7;
    float temperaturas[DIAS];
    string dias[] = {"Lunes", "Martes", "Miercoles", "Jueves",
                     "Viernes", "Sabado", "Domingo"};

    cout << "Ingrese las temperaturas de la semana:" << endl;
    for (int i = 0; i < DIAS; i++) {
        cout << dias[i] << ": ";
        cin >> temperaturas[i];
    }

    // Inicializar min y max con el primer elemento
    float minimo = temperaturas[0];
    float maximo = temperaturas[0];
    int posMin = 0, posMax = 0;

    for (int i = 1; i < DIAS; i++) {
        if (temperaturas[i] < minimo) {
            minimo = temperaturas[i];
            posMin = i;
        }
        if (temperaturas[i] > maximo) {
            maximo = temperaturas[i];
            posMax = i;
        }
    }

    cout << "\n=== Resultados ===" << endl;
    cout << "Temperatura minima: " << minimo << " (" << dias[posMin] << ")" << endl;
    cout << "Temperatura maxima: " << maximo << " (" << dias[posMax] << ")" << endl;

    return 0;
}
