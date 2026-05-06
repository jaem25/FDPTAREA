/*Sistema de Transporte Público
Pide un tipo de transporte (1 = Bus, 2 = Metro, 3 = Taxi) 
y muestra el costo estimado de un viaje.*/

#include <iostream>
using namespace std;

int main()
{
    int transporte, billetera = 50;
    float bus, metro, taxi;

    cout<<"---------------Sistema de transporte publico---------------------"<<endl<<endl;
    cout<<"Tipos de transporte:"<<endl;
    cout<<"1) Bus"<<endl;
    cout<<"2) Metro"<<endl;
    cout<<"3) Taxi"<<endl<<endl;
    cout<<"Ingrese el numero del transporte que desea: "<<endl;
    cin>>transporte;

    switch (transporte)
    {
    case 1:
        cout<<"El viaje en bus cuesta $1.30"<<endl;
        bus=(billetera - 1.30);
        cout<<"Su saldo es de: "<<bus<<endl;
        break;
    case 2:
        cout<<"El vieje en metro cuesta $3.75"<<endl;
        metro=(billetera - 3.75);
        cout<<"Su saldo es de: "<<metro<<endl;
        break;
    case 3:
        cout<<"El viaje en taxi cuesta $6.85"<<endl;
        taxi=(billetera - 6.85);
        cout<<"Su saldo es de: "<<taxi<<endl;
        break;
    default:
        cout<<"ERROR, por favor ingrese un numero entre 1 a 3"<<endl;
        break;
    }

    return 0;
}