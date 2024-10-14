#include<bits/stdc++.h>
using namespace std;

    // Función para calcular la distancia entre dos puntos
    double calcularDistancia(double x1, double y1, double x2, double y2)
    {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }

    int main() {
    double x1, y1, x2, y2;

    cout << "Pedir al usuario que ingrese las coordenadas\n";
    cout << "Aut@r: Sarai Morales" << endl;
    cout << "Fecha: 14 de Octubre del 2024" << endl;
    cout << "x1: ";
    cin >> x1;
    cout << "y1: ";
    cin >> y1;
    cout << "x2: ";
    cin >> x2;
    cout << "y2: ";
    cin >> y2;

    // Calcular la distancia
    double distancia = calcularDistancia(x1, y1, x2, y2);

    // Mostrar el resultado
    cout << "La distancia entre los puntos (" << x1 << ", " << y1 << ") y ("
         << x2 << ", " << y2 << ") es: " << distancia << endl;

    return 0;
}
