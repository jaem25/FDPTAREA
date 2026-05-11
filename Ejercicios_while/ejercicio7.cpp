/*Cuenta Regresiva
Solicita un número y muestra una cuenta regresiva hasta 0.*/

#include <iostream>
using namespace std;

int main() {
    int cuentaregresiva;
    cout << "Ingrese un numero para iniciar la cuenta regresiva: ";
    cin >> cuentaregresiva ;
    // Ciclo while
    while (cuentaregresiva >= 0) {
        cout << "Cuenta regresiva: " << cuentaregresiva << endl;
        cuentaregresiva--;
    }

    return 0;
}