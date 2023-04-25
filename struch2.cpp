// Defina y declare una estructura para almacenar
// la información de los
// datos académicos y personales de los estudiantes
// de la carrera de Ingeniería en
// Sistemas de Información de la Universidad Centroamericana (UCA)
//. Solicite los datos
// al usuario, utilice el ciclo apropiado para imprimir en pantalla
// la información
// almacenada y recuerde utilizar las funciones de E/S
// con el formato adecuado

#include <stdio.h>
#include <string.h> // strncpy
#include <iostream>
using namespace std;

#define MAXIMA_LONGITUD_CADENA 2
#define CANTIDAD_DISPOSITIVOS 100

struct estudiante
{
    char nombre[MAXIMA_LONGITUD_CADENA];

    double edad;
    string rama;
    double id;
    double semestre;
};

struct estudiante dispositivos[CANTIDAD_DISPOSITIVOS];

int main()

{
    int cantdis = 0, cantidadtotalcpp = 0;
    // Asignar datos
    for (int d = 0; d < CANTIDAD_DISPOSITIVOS; d++)
    {
        cout << " --- --- " << endl;

        cout << "digite el nombre del estudiante " << endl;

        cin >> dispositivos[d].nombre;
        cout << " --- --- " << endl;

        cout << "desea seguir incluyendo mas estudiate ? " << endl;
        cin >> cantdis;

        cantidadtotalcpp++;

        if (cantdis == 0)
        {
            d = d + 100;
        }
    }
    cout << endl
         << cantdis << endl;

    system("cls"); // Borra la pantalla.

    for (int o = 0; o < MAXIMA_LONGITUD_CADENA; o++)

    {

        cout << endl
             << dispositivos[o].nombre << endl;

        cout << endl
             << "digite la rama del estudiante " << endl;
        cin >> dispositivos[o].rama;

        cout << endl
             << "digite la edad del estudiante " << endl;
        cin >> dispositivos[o].edad;
        cout << endl
             << "digite el codigo de usuario" << endl;
        cin >> dispositivos[o].id;

        cout << endl
             << "digite el semestre que lleva el usuario" << endl;
        cin >> dispositivos[o].semestre;
    }

    system("cls"); // Borra la pantalla.

    for (int i = 0; i < MAXIMA_LONGITUD_CADENA; i++)
    {

        struct estudiante dispositivoActual = dispositivos[i];

        cout << endl
             << dispositivoActual.nombre << endl;

        cout << endl
             << "La rama del estudiante lamado " << endl
             << dispositivos[i].nombre << endl
             << " es de :  " << endl;
        cout << endl
             << (dispositivoActual.rama) << endl;
        cout << endl
             << "la edad del estudiante  de   " << dispositivos[i].nombre << endl
             << " es de :  " << endl;
        cout << endl
             << (dispositivoActual.edad) << endl;
        cout << endl
             << "el codigo del usuario del estudiante " << endl
             << dispositivos[i].nombre << endl
             << " es de :  " << endl;
        cout << endl
             << (dispositivoActual.id) << endl;
        cout << endl
             << "el semestre que lleva el usuario llamado" << endl
             << dispositivos[i].nombre << endl
             << " es de :  " << endl;
        cout << endl
             << (dispositivoActual.semestre) << endl;
    }

    return 0;
}