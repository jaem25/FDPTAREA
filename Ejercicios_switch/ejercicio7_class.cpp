/*Conversión de Monedas
Pide una opción (1 = USD a EUR, 2 = USD a JPY, 3 = USD a GBP) 
y realiza la conversión.*/

#include <iostream>
using namespace std;

int main()
{
    int opcion;

    cout<<"Conversion de monedas, por favor tome una opcion: "<<endl;
    cout<<"1. USD a EUR"<<endl;
    cout<<"2. USD a JPY"<<endl;
    cout<<"3. USD a GBP"<<endl;
    cin>>opcion;


    switch (opcion)
    {
    case 1:
        float resultado, usd1, eur;
        cout<<"Ingrese el valor en USD: "<<endl;
        cin>>usd1;
        eur = usd1 * 0.92;

        cout<<"El valor de "<< usd1 <<" USD a EUR es: "<< eur<<" eur"<<endl;
        break;
    case 2:
        float usd2, jyp;
        cout<<"Ingrese el valor en USD: "<<endl;
        cin>>usd2;
        jyp = usd2 * 155;

        cout<<"El valor de "<<usd2<<" USD a JYP es: "<<jyp<<" jyp"<<endl;
        break;
    case 3:
        float usd3, gbp;
        cout<<"Ingrese el valor en USD: "<<endl;
        cin>>usd3;
        gbp = usd3 * 0.79;

        cout<<"El valor de "<<usd3<<" USD a GBP es: "<<gbp<<" gbp"<<endl;
        break;
    default:
        cout<<"Error, por favor escoja uno opcion del 1 al 3."<<endl;
        break;
    }
    return 0;
}