/*Sistema de Calificación de Conducción
Un programa debe calificar el estado de un conductor según su edad, 
número de infracciones y años de experiencia.*/

#include <iostream>
using namespace std;

int main()
{
    int edad, infracciones, experiencia;

    cout << "------- Sistema de Calificacion de Conduccion -------" << endl;
    cout << "Ingresa tu edad: ";
    cin >> edad;
    cout << "Edad de experiencia manejando: ";
    cin >> experiencia;
    cout << "Numero de infracciones: ";
    cin >> infracciones;

    if (edad < 16)
    {
        cout << "NO APTO (Edad minima para conducir es 16)" << endl;
    }

    if (experiencia < 0 || infracciones < 0)
    {
        cout << "Error los valores ingresados no pueden ser negativos." << endl;
    }

    int puntos = 0;

    // Puntos por edad
    if (edad >= 25 && edad <= 60)
        puntos += 3;   // Edad ideal
    else if (edad >= 18 && edad < 25)
        puntos += 2;   // Joven
    else if (edad > 60)
        puntos += 1;   // Mayor
    else               // 16-17
        puntos += 0;

    // Puntos por experiencia
    if (experiencia >= 10)
        puntos += 3;   // Muy experimentado
    else if (experiencia >= 5)
        puntos += 2;   // Experimentado
    else if (experiencia >= 2)
        puntos += 1;   // Poco experiencia
    else
        puntos += 0;   // Sin experiencia

    // Puntos por infracciones
    if (infracciones == 0)
        puntos += 3;   // Sin infracciones
    else if (infracciones <= 2)
        puntos += 1;   // Pocas infracciones
    else if (infracciones <= 5)
        puntos -= 1;   // Varias infracciones
    else
        puntos -= 3;   // Demasiadas infracciones

    //Calificación final
    cout<<"RESULTADO DEL CONDUCTOR"<<endl;
    cout<<"Edad: " << edad<<endl;
    cout<<"Experiencia: "<< experiencia<<endl;
    cout<<"Infracciones: "<< infracciones<< endl;
    cout<<"Puntaje total: "<< puntos<< " / 9 puntos"<<endl;

    if (puntos >= 7)
    {
        cout<<"EXCELENTE CONDUCTOR"<<endl;
    }
    else if (puntos >= 4)
    {
        cout<<"CONDUCTOR ACEPTABLE"<<endl;
    }
    else if (puntos >= 1)
    {
        cout<<"CONDUCTOR EN RIESGO"<<endl;
    }
    else
    {
        cout<<"CONDUCTOR PELIGROSO"<< endl;
    }

    return 0;
}