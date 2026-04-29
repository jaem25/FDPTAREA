/*Autenticación con Intentos
Simula un sistema de autenticación con un usuario y contraseña, permitiendo hasta 3 intentos.*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string user = "pibble", contra = "6767", usuario, pasword;
    int intentos = 3;

    cout<< "Bienvenido" << endl;
    cout << "Ingrese su usuario" << endl;
    cin >> usuario;

    cout << "Ingrese su contra" << endl;
    cin >> pasword;

    if (user == usuario && contra == pasword)
    {
        cout << "-------------------------BIENVENIDO--------------------------------" << endl;
        cout << "---------------------------PIBBLE----------------------------------" << endl;
    }
    else
    {
        int contador = intentos - 1;
    }
    if (user == usuario && contra == pasword)
    {
        cout << "-------------------------BIENVENIDO--------------------------------" << endl;
        cout << "---------------------------PIBBLE----------------------------------" << endl;
    }
    else
    {
        int contador = intentos - 2;
    }
    if (user == usuario && contra == pasword)
    {
        cout << "-------------------------BIENVENIDO--------------------------------" << endl;
        cout << "---------------------------PIBBLE----------------------------------" << endl;
    }
    else
    {
        int contador = intentos - 3;
    }
    if (user == usuario && contra == pasword)
    {
        cout << "-------------------------BIENVENIDO--------------------------------" << endl;
        cout << "---------------------------PIBBLE----------------------------------" << endl;
    }


    return 0;
}

//Sin Do/While no se puede hacer el bucle de los 3 intentos