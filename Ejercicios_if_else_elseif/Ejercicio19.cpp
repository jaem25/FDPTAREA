/*Tarifa de Luz Eléctrica
Calcula la tarifa según el consumo: menor a 100 kWh, tarifa baja; entre 100 y 200 kWh, tarifa media; 
más de 200 kWh, tarifa alta.*/

#include <iostream>
using namespace std;

int main()
{
    double consumo, total;

    cout << "------ Tarifa de luz electrica ------" << endl;
    cout << "Ingresa tu consumo en kWh: ";
    cin >> consumo;

    if (consumo < 0)
    {
        cout << "Error en los datos" << endl;
    }
    else if (consumo < 100)
    {
        total = consumo * 0.10;
        cout << "TARIFA BAJA" << endl;
        cout << "Consumo:  " << consumo << " kWh" << endl;
        cout << "Precio:   $0.10 por kWh" << endl;
        cout << "Total a pagar: $" << total << endl;
    }
    else if (consumo <= 200)
    {
        total = consumo * 0.15;
        cout << "TARIFA MEDIA" << endl;
        cout << "Consumo:  " << consumo << " kWh" << endl;
        cout << "Precio:   $0.15 por kWh" << endl;
        cout << "Total a pagar: $" << total << endl;
    }
    else
    {
        total = consumo * 0.25;
        cout << "TARIFA ALTA" << endl;
        cout << "Consumo:  " << consumo << " kWh" << endl;
        cout << "Precio:   $0.25 por kWh" << endl;
        cout << "Total a pagar: $" << total << endl;
    }

    return 0;
}