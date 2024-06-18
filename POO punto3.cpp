#include <iostream>
using namespace std;

class Cuadrado {
private:
    float lado;

public:
    void cargarLado(float l) {
        lado = l;
    }
    void imprimirPerimetro() {
        float perimetro = 4 * lado;
        cout << "El perímetro del cuadrado es: " << perimetro << endl;
    }

    void imprimirSuperficie() {
        float superficie = lado * lado;
        cout << "La superficie del cuadrado es: " << superficie << endl;
    }
};

int main() {
    Cuadrado cuadrado;
    
    float lado;
    cout << "Ingrese el lado del cuadrado: ";
    cin >> lado;
    cuadrado.cargarLado(lado);

    cuadrado.imprimirPerimetro();
    cuadrado.imprimirSuperficie();

    return 0;
}

