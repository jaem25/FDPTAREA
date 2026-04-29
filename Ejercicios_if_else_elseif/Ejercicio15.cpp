/*Velocidad y Multa
Pide la velocidad de un conductor. Si supera los 60 km/h, 
se le aplica una multa; si supera los 80 km/h, la multa es mayor.*/

#include <iostream>
using namespace std;

int main()
{
    float velocidad;

    cout << "---------Control de Velocidad---------" << endl;
    cout << "Ingrese la velocidad del conductor (km/h): ";
    cin>>velocidad;

    if (velocidad >= 60 && velocidad < 79)
    {
        cout << "MULTA LEVE" << endl;
        cout << "Velocidad registrada: " << velocidad << " km/h" << endl;
        cout << "Multa aplicada: $200" << endl;
    }
    else if (velocidad >= 80)
    {
        cout << "MULTA GRAVE" << endl;
        cout << "Velocidad registrada: " << velocidad << " km/h" << endl;
        cout << "Multa aplicada: $500" << endl;
    }
    else if (velocidad <= 0)
    {
        cout << "Velocidad no valida" << endl;
    }
    else
    {
        cout << "Velocidad dentro del limite permitido." << endl;
        cout << "Velocidad registrada : " << velocidad << " km/h" << endl;
        cout << "Sin multa." << endl;
    }

    return 0;
}