#include <iostream>
using namespace std;

int main() {
    float calificaciones[6] = {7.5, 9.8, 6.2, 8.4, 10.0, 5.9};
    
    // Asumimos inicialmente que la primera nota es la mas alta
    float maximo = calificaciones[0]; 

    // Empezamos el bucle desde el 1, porque el 0 ya lo tenemos en 'maximo'
    for(int i = 1; i < 6; i++) {
        if(calificaciones[i] > maximo) {
            maximo = calificaciones[i]; // Si encontramos uno mayor, lo actualizamos
        }
    }

    cout << "La calificacion mas alta es: " << maximo << endl;

    return 0;
}