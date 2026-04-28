/* Verificación de Usuario y Contraseña
Simula la verificación de un usuario y contraseña predefinidos.*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //usuario y contraseña predefinidos
    string user = "pibble";
    string contra = "6767";
    //variables de entrada 
    string useringresado, contraingresada;

    cout<<"Verificador de usuario y contraseña"<<endl<<endl;
    cout<<"Usuario: "<<endl;
    cin>>useringresado;
    cout<<"Contraseña: "<<endl;
    cin>>contraingresada;

    //Verificacion
    if (useringresado == user && contraingresada == contra)
    {
        cout<<"Acceso concedido, Bienvenido "<<user<<endl;
    }
    else if (useringresado != user)
    {
        cout<<"Acceso denegado, usuario incorrecto";
    }
    else
    {
        cout<<"Acceso denegado, contraseña incorrecta";
    }
    
    return 0;
    
}