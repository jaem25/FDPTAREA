/*Doble Verificación de Datos
Pide dos contraseñas y verifica si coinciden antes de continuar.*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string password1, password2;

    cout<<"---------------Password double-check----------------"<<endl;
    cout<<"Enter your password: "<<endl;
    cin>>password1;
    cout<<"Confirm your password: "<<endl;
    cin>>password2;

    if (password1 == password2)
    {
        cout<<"The passwords match. Access granted"<<endl;
    }
    else
    {
        cout<<"The passwords don't match. Please try again."<<endl;
    }
    
    return 0;

}