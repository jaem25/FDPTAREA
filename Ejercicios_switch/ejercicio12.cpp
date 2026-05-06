/*Sistema de Puntuación de Videojuegos
Pide el puntaje de un jugador (1-5 estrellas) y muestra un mensaje acorde a su desempeño.*/

#include <iostream>
using namespace std;

int main()
{
    int estrellas;

    cout << "--------SISTEMA DE PUNTUACION--------" << endl;
    cout << "Ingrese su puntuacion (1-5 estrellas): " << endl;
    cin >> estrellas;

    switch (estrellas)
    {
    case 1:
        { cout << "Malo. Sigue intentando!" << endl; }
        break;

    case 2:
        { cout << "Regular. Puedes mejorar!" << endl; }
        break;

    case 3:
        { cout << "Bueno. Vas por buen camino!" << endl; }
        break;

    case 4:
        { cout << "Muy bueno. Casi lo logras!" << endl; }
        break;

    case 5:
        { cout << "Excelente. Eres un maestro!" << endl; }
        break;

    default:
        { cout << "Puntuacion invalida. Ingrese un valor entre 1 y 5." << endl; }
        break;
    }

    return 0;
}