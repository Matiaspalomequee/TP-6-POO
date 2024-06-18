#include <iostream>
using namespace std;

class Operaciones {
private:
    int valor1;
    int valor2;

public:
    void cargarValores(int v1, int v2) {
        valor1 = v1;
        valor2 = v2;
    }

    void suma() {
        int resultado = valor1 + valor2;
        cout << "La suma de " << valor1 << " + " << valor2 << " = " << resultado << endl;
    }

    void resta() {
        int resultado = valor1 - valor2;
        cout << "La resta de " << valor1 << " - " << valor2 << " = " << resultado << endl;
    }

    void multiplicacion() {
        int resultado = valor1 * valor2;
        cout << "La multiplicación de " << valor1 << " * " << valor2 << " = " << resultado << endl;
    }

    void division() {
        if (valor2 != 0) {
            float resultado = static_cast<float>(valor1) / valor2;
            cout << "La división de " << valor1 << " / " << valor2 << " = " << resultado << endl;
        } else {
            cout << "No se puede dividir por cero." << endl;
        }
    }
};

int main() {
    Operaciones operacion;

    int v1, v2;

    cout << "Ingrese el primer valor entero: ";
    cin >> v1;
    cout << "Ingrese el segundo valor entero: ";
    cin >> v2;

    operacion.cargarValores(v1, v2);
    operacion.suma();
    operacion.resta();
    operacion.multiplicacion();
    operacion.division();

    return 0;
}

