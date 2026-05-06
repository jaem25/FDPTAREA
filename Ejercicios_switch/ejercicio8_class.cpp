/*Tipo de Triángulo
Solicita tres lados de un triángulo y usa switch para determinar si es equilátero, 
isósceles o escaleno.*/

#include <iostream>
using namespace std;

int main()
{
    float a, b, c;

    cout << "Ingrese el lado 1: ";
    cin >> a;
    cout << "Ingrese el lado 2: ";
    cin >> b;
    cout << "Ingrese el lado 3: ";
    cin >> c;

    switch((a == b) + (b == c) + (a == c))
    {
        case 3:
            cout << "Triangulo Equilatero (los 3 lados son iguales)" << endl;
            break;
        case 1:
            cout << "Triangulo Isosceles (2 lados son iguales)" << endl;
            break;
        case 0:
            cout << "Triangulo Escaleno (todos los lados son diferentes)" << endl;
            break;
    }

    return 0;
}