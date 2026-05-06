/*Clasificación de Películas por Edad
Pide la edad de un usuario y usa switch para recomendar una categoría de películas 
(G, PG, PG-13, R).*/
#include <iostream>
using namespace std;

int main()
{
    int edad;
    int categoria;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad < 8)  
    {
        categoria = 0;
    }
    else if (edad < 13) 
    {
        categoria = 1;
    }
    else if (edad < 17) 
    {
        categoria = 2;
    }
    else                
    {
        categoria = 3;
    }

    switch(categoria)
    {
        case 0:
            cout << "Categoria G   - Apto para todo publico." << endl;
            cout << "Recomendacion: Peliculas animadas y familiares." << endl;
            break;
        case 1:
            cout << "Categoria PG  - Se sugiere guia de los padres." << endl;
            cout << "Recomendacion: Aventura y comedia familiar." << endl;
            break;
        case 2:
            cout << "Categoria PG-13 - No recomendado para menores de 13." << endl;
            cout << "Recomendacion: Accion, ciencia ficcion y drama." << endl;
            break;
        case 3:
            cout << "Categoria R   - Solo para mayores de 17." << endl;
            cout << "Recomendacion: Thriller, terror y drama adulto." << endl;
            break;
    }

    return 0;
}