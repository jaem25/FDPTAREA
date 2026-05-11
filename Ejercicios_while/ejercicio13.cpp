/*Serie de Fibonacci
Muestra los primeros N términos de la serie de Fibonacci utilizando while.*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cuantos terminos deseas ver? ";
    cin >> n;

    int a = 0, b = 1;
    int contador = 1;

    cout << "\nSerie de Fibonacci:\n";

    while (contador <= n) {
        cout << a;

        if (contador < n) cout << " - ";

        int siguiente = a + b;
        a = b;
        b = siguiente;

        contador++;
    }

    return 0;
}