#include <iostream>
using namespace std;

int main() {
    int opcion;
    cout << "--- MENU DE AREAS ---" << endl;
    cout << "1. Circulo" << endl;
    cout << "2. Cuadrado" << endl;
    cout << "3. Triangulo" << endl;
    cout << "Elige una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1: {
            double radio;
            cout << "Ingresa el radio: ";
            cin >> radio;
            cout << "Area = " << 3.1416 * radio * radio << endl;
            break;
        }
        case 2: {
            double lado;
            cout << "Ingresa el lado: ";
            cin >> lado;
            cout << "Area = " << lado * lado << endl;
            break;
        }
        case 3: {
            double base, altura;
            cout << "Ingresa la base: ";
            cin >> base;
            cout << "Ingresa la altura: ";
            cin >> altura;
            cout << "Area = " << (base * altura) / 2 << endl;
            break;
        }
        default:
            cout << "Opcion invalida" << endl;
    }

    return 0;
}

