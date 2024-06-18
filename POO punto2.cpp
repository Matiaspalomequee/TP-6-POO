#include <iostream>
using namespace std;

class Triangulo {
private:
    float lado1, lado2, lado3;

public:
    
    void inicializar(float l1, float l2, float l3) {
        lado1 = l1;
        lado2 = l2;
        lado3 = l3;
    }

    void imprimirLadoMayor() {
        float ladoMayor = lado1;

        if (lado2 > ladoMayor) {
            ladoMayor = lado2;
        }
        if (lado3 > ladoMayor) {
            ladoMayor = lado3;
        }

        cout << "El lado mayor del triangulo es: " << ladoMayor << endl;
    }
    void esEquilatero() {
        if (lado1 == lado2 && lado2 == lado3) {
            cout << "El triangulo es equilatero." << endl;
        } else {
            cout << "El triangulo no es equilatero." << endl;
        }
    }
};

int main() {
    Triangulo triangulo;

    float l1, l2, l3;

    cout << "Ingrese el lado 1 del triangulo: ";
    cin >> l1;
    cout << "Ingrese el lado 2 del triangulo: ";
    cin >> l2;
    cout << "Ingrese el lado 3 del triangulo: ";
    cin >> l3;

    triangulo.inicializar(l1, l2, l3);

    triangulo.imprimirLadoMayor();

    triangulo.esEquilatero();

    return 0;
}

