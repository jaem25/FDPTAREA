/*Precio de Entrada a un Parque
Un parque cobra diferente según la edad: niños menores de 5 entran gratis, 
entre 5 y 12 pagan $5, mayores de 12 pagan $10.*/

#include <iostream>
using namespace std;

int main()
{
    int edad;

    cout<<"----------BIENVENIDO AL PARQUE PIBBLE----------"<<endl<<endl;
    cout<<"Precios de entradas:"<<endl;
    cout<<"Entrada baby pibble (Edad: 1-5): GRATIS "<<endl;
    cout<<"Entrada junior pibble (Edad: 6 - 12): $5.00 "<<endl;
    cout<<"Entradas senior pibble (Edad: 13 en adelante): $10.00 "<<endl<<endl;

    cout<<"Ingrese su edad: "<<endl;
    cin>>edad;


    if (edad <= 0)
    {
        cout<<"Edad invalida"<<endl;
    }
    
    else if (edad <= 5 && edad != 1)
    {
        cout<<"Edad: "<< edad<<endl;
        cout<<"Entrada baby pibble: GRATIS"<<endl;
    }
    else if (edad >= 6 && edad <= 12)
    {
        cout<<"Edad: "<< edad<<endl;
        cout<<"Entrada junior pibble: $5.00 "<<endl;
    }
    else
    {
        cout<<"Edad: "<< edad<<endl;
        cout<<"Entrada senior pibble: $10.00 "<<endl;
    }
    
    return 0;
}