/*Conversión de Unidades de Longitud
Pide una opción (1 = cm a pulgadas, 2 = metros a pies, 3 = km a millas) 
y realiza la conversión.*/

#include <iostream>
using namespace std;

int main()
{
    int unidad;
    float cm, pul,metros,pies,km,millas;
    cout<<"----------------Conversion de unidades de longitud--------------------"<<endl<<endl;
    cout<<"Opciones de conversion de unidades:"<<endl;
    cout<<"1) cm a pulgadas"<<endl;
    cout<<"2) metros a pies"<<endl;
    cout<<"3) km a millas"<<endl<<endl;
    cout<<"Ingrese la opcion que desea: "<<endl;
    cin>>unidad;

    switch (unidad)
    {
    case 1:
        cout<<"Opcion 1: cm a pulgadas"<<endl;
        cout<<"Ingrese el valor en cm: "<<endl;
        cin>>cm;
        pul=(cm / 2.54);
        cout<<"El valor de "<<cm<<" a pulgadas es: "<<pul<<endl;
        break;
    case 2:
        cout<<"Opcion 2: metros a pies"<<endl;
        cout<<"Ingrese el valor en metros: "<<endl;
        cin>>metros;
        pies=(metros * 3.281);
        cout<<"El valor de "<<metros<<" a pulgadas es: "<<pies<<endl;
        break;
    case 3:
        cout<<"Opcion 3: km a millas"<<endl;
        cout<<"Ingrese el valor en cm: "<<endl;
        cin>>km;
        millas=(km / 1.609);
        cout<<"El valor de "<<km<<" a pulgadas es: "<<millas<<endl;
        break;
    default:
        cout<<"ERROR, INGRESAR UNA OPCION DEL 1 AL 3"<<endl;
        break;
    }
    return 0;
}