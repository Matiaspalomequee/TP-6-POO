#include <iostream>
using namespace std;

class Empleado {
private:
    string nombre;
    float sueldo;

public:
    void cargarDatos(string n, float s) {
        nombre = n;
        sueldo = s;
    }

    void imprimirDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Sueldo: $" << sueldo << endl;
    }

    void verificarImpuestos() {
        if (sueldo > 3000) {
            cout << nombre << " debe pagar impuestos." << endl;
        } else {
            cout << nombre << " no debe pagar impuestos." << endl;
        }
    }
};

int main() {
    
    Empleado empleado;
    string nombre;
    float sueldo;
    cout << "Ingrese el nombre del empleado: ";
    getline(cin, nombre);

    cout << "Ingrese el sueldo del empleado: ";
    cin >> sueldo;

    empleado.cargarDatos(nombre, sueldo);
    cout << "\nDatos del empleado:\n";
    empleado.imprimirDatos();
    empleado.verificarImpuestos();

    return 0;
}

