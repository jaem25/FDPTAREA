/*Asignación de Grupos en una Universidad
Pide la inicial del apellido de un estudiante y usa switch para asignarlo a un grupo 
(A-M = Grupo 1, N-Z = Grupo 2).*/

#include <iostream>
using namespace std;

int main()
{
    char inicial;
    cout<<"ASIGNACION DE GRUPOS DE LABORATORIO FDP UCA"<<endl;
    cout<<"Ingrese la inicial de su apellido: "<<endl;
    cin>>inicial;
    switch (inicial)
    {
    case 'a':case 'b':case 'c':case 'd': case 'e': case 'f': case 'g': case 'h': case 'i':case 'j':case 'k':case 'l': case 'm':
        cout<<"Grupo asignado:  Grupo 1"<<endl;  
        break;
    case 'n': case 'o': case 'p':case 'q':case 'r':case 's':case 't':case 'u': case 'v':case 'w':case 'x':case 'y':case 'z':
        cout<<"Grupo asignado:  Grupo 2"<<endl;  
        break;
    default:
        cout<<" Por favor, ingrese la inicial en minuscula o una letra"<<endl;
        break;
    }
    
    return 0;
}