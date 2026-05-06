/*Zodíaco según el Mes
Solicita un mes de nacimiento y muestra el signo zodiacal correspondiente.*/

#include <iostream>
using namespace std;

int main()
{
    int dia, mes;

    cout << "-------------ZODIACO---------------" << endl;
    cout << "Ingrese su mes de nacimiento: " << endl;
    cin >> mes;
    cout << "Ingrese su dia de nacimiento: " << endl;
    cin >> dia;

    switch (mes)
    {
    case 1:
        if (dia <= 19)      
        { 
            cout << "Signo: Capricornio" << endl; 
        }
        else                
        { 
            cout << "Signo: Acuario"     << endl; 
        }
        break;

    case 2:
        if (dia <= 18)      
        { 
            cout << "Signo: Acuario" << endl; 
        }
        else                
        { 
            cout << "Signo: Piscis"  << endl; 
        }
        break;

    case 3:
        if (dia <= 20)      
        { 
            cout << "Signo: Piscis" << endl; 
        }
        else                
        { 
            cout << "Signo: Aries"  << endl; 
        }
        break;

    case 4:
        if (dia <= 19)      
        { 
            cout << "Signo: Aries" << endl; 
        }
        else                
        { 
            cout << "Signo: Tauro" << endl; 
        }
        break;

    case 5:
        if (dia <= 20)      
        { 
            cout << "Signo: Tauro"   << endl; 
        }
        else                
        { 
            cout << "Signo: Geminis" << endl; 
        }
        break;

    case 6:
        if (dia <= 20)      
        { 
            cout << "Signo: Geminis" << endl; 
        }
        else                
        { 
            cout << "Signo: Cancer"  << endl; 
        }
        break;

    case 7:
        if (dia <= 22)      
        { 
            cout << "Signo: Cancer" << endl; 
        }
        else                
        { 
            cout << "Signo: Leo"    << endl; 
        }
        break;

    case 8:
        if (dia <= 22)      
        { 
            cout << "Signo: Leo"   << endl; 
        }
        else                
        { 
            cout << "Signo: Virgo" << endl; 
        }
        break;

    case 9:
        if (dia <= 22)      
        { 
            cout << "Signo: Virgo" << endl; 
        }
        else                
        { 
            cout << "Signo: Libra" << endl; 
        }
        break;

    case 10:
        if (dia <= 22)      
        { 
            cout << "Signo: Libra"    << endl; 
        }
        else                
        { 
            cout << "Signo: Escorpio" << endl; 
        }
        break;

    case 11:
        if (dia <= 21)      
        { 
            cout << "Signo: Escorpio"  << endl; 
        }
        else                
        { 
            cout << "Signo: Sagitario" << endl; 
        }
        break;

    case 12:
        if (dia <= 21)      
        { 
            cout << "Signo: Sagitario"  << endl; 
        }
        else                
        { 
            cout << "Signo: Capricornio" << endl; 
        }
        break;

    default:
        cout << "Mes invalido." << endl;
        break;
    }

    return 0;
}