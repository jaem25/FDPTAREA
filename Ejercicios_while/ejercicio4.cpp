/*Menú Interactivo
Crea un menú que se repita hasta que el usuario elija la opción de salir.*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int opcion;

    do {
        cout << "-----------------MENU PRINCIPAL--------------\n";
        cout << "  1. Saludar\n";
        cout << "  2. Suma de dos numeros\n";
        cout << "  3. Calcular el cuadrado de un numero\n";
        cout << "  4. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Hola, Bienvenido al programa.\n";
                break;
            case 2:
                int num1, numn2, suma;
                cout << "Ingrese el primer numero: \n";
                cin>>num1;
                cout << "Ingrese el segundo numero: \n";
                cin>>numn2;
                suma = num1 + numn2;
                cout<<"El resultado es: "<<suma<<endl;
                break;
            case 3: {
                int n;
                cout << "Ingresa un numero: ";
                cin >> n;
                cout << "El cuadrado de " << n << " es: " << pow(n, 2) << "\n";
                break;
            }
            case 4:
                cout << "Saliendo del programa. Hasta luego\n";
                break;
            default:
                cout << "Opcion no valida. Intenta de nuevo.\n";
        }

    } while (opcion != 4);

    return 0;
}