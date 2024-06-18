#include <iostream>
using namespace std;

int main() {
    char nombre1[40], nombre2[40];
    int edad1, edad2;

    cout << "Ingrese nombre de la persona 1:";
    cin.getline(nombre1, 40);
    cout << "Ingrese edad de la persona 1:";
    cin >> edad1;
    cin.ignore();
    cout << "Ingrese nombre de la persona 2:";
    cin.getline(nombre2, 40);
    cout << "Ingrese edad de la persona 2:";
    cin >> edad2;
    
    cout << "\nDatos de la persona 1:\n";
    cout << "Nombre: " << nombre1 << endl;
    cout << "Edad: " << edad1 << endl;
    if (edad1 >= 18) {
        cout << "Es mayor de edad." << endl;
    } else {
        cout << "No es mayor de edad." << endl;
    }

    cout << "\nDatos de la persona 2:\n";
    cout << "Nombre: " << nombre2 << endl;
    cout << "Edad: " << edad2 << endl;
    if (edad2 >= 18) {
        cout << "Es mayor de edad." << endl;
    } else {
        cout << "No es mayor de edad." << endl;
    }

    return 0;
}

