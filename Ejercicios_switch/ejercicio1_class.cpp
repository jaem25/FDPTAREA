/*Día de la Semana
Pide un número del 1 al 7 e imprime el día de la semana correspondiente 
(1 = Lunes, 2 = Martes, etc.).*/

#include <iostream>
using namespace std;

int main()
{
    int dia;
    
    cout<<"Por favor ingrese un numero del 1 al 7: "<<endl;
    cin>>dia;

    switch (dia)
    {
    case 1:
        cout<<"Lunes"<<endl;
        break;
    case 2:
        cout<<"Martes"<<endl;
        break;
    case 3:
        cout<<"Miercoles"<<endl;
        break;
    case 4:
        cout<<"Jueves"<<endl;
        break;
    case 5:
        cout<<"Viernes"<<endl;
        break;
    case 6:
        cout<<"Sabado"<<endl;
        break;
    case 7:
        cout<<"Domingo"<<endl;
        break;
    default:
        cout<<"Error, por favor ingrese un numero del 1 al 7"<<endl;
        break;
    }
    return 0;
}