/*Edad y Mayoría de Edad
Escribe un programa que pida la edad de una persona e indique si es mayor 
o menor de edad (18 años o más es mayor de edad).*/

#include <iostream>
using namespace std;

int main()
{
    int edad;

    cout<<"Podria ingresar su edad, por favor: "<<endl;
    cin>>edad;

    if (edad >= 18)
    {
        cout<<"Usted tiene "<<edad <<" asi que es mayor de edad."<<endl;
    }
    else
    {
        cout<<"Usted tiene "<<edad <<" asi que es mmenor de edad."<<endl;
    }

    return 0;
}