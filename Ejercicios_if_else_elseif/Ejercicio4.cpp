/*Calificación Aprobatoria
Solicita una calificación numérica y muestra si el estudiante aprobó o reprobó (mínimo aprobatorio: 60).
*/

#include <iostream>
#include <cmath>
using namespace std; 

int main()
{
    float calificacion;

    cout<<"Ingrese su calificacion: "<<endl;
    cin>>calificacion;

    if (calificacion >= 60)
    {
        cout<<"Ha aprobado"<<endl;
    }
    else 
    {
        cout<<"Ha reprobado"<<endl;
    }

    return 0;
}