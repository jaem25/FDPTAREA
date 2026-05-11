/*Suma de Números
Pide al usuario números hasta que ingrese 0. Luego, muestra la suma 
de todos los números ingresados.*/

#include <iostream>
using namespace std;

int main()
{
    int n, suma = 0;
    cout<<"Ingrese un numero: ";
    cin>>n;
    while (n != 0)
    {
        if (n>0)
        {

            suma += n;
            cout<<"Ingrese un numero: "<<endl;
            cin>>n;
        }
        }
        cout<<"total: "<<suma<<endl;
        return 0;   
    }
    