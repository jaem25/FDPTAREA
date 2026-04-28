/* Comparación de Números
Pide dos números e indica cuál es mayor, cuál es menor o si son iguales.
*/

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    //Pedir el primer numero
    cout<<"Ingrese el primer numero por favor: "<<endl;
    cin>>num1;
    //Perdir segundo numero
    cout<<"Ingrese el segundo numero por favor: "<<endl;
    cin>>num2;

    if (num1 > num2 )
    {
        cout<<"El numero "<<num1<<" es mayor y el menor es "<<num2<<endl;
    }
    else if (num1 < num2)
    {
        cout<<"El numero "<<num1<<" es menor y el mayor es "<<num2<<endl;
    }
    else
    {
        cout<<"Ambos numero son iguales"<<endl;
    }

    return 0;
}