/*Suma de Números Pares
Pide un número N al usuario y usa while para calcular la suma de 
los números pares desde 1 hasta N.*/

#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingresa un numero: ";
    cin >> n;
    while (n > 0) {
        if (n % 2 == 0){
            cout<<n<<endl;
            suma += n;
        }
        n--;
    }
    cout << "La suma de los pares es: " <<suma<< endl;
    return 0;
}