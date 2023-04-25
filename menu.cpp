#include <iostream>
#include "arreglo1.cpp"
#include "arreglo2.cpp"
#include "arreglo3.cpp"
#include "struch1.cpp"
#include "struch2.cpp"
#include "struch3.cpp"

using namespace std;


void menuArreglos();
void menuEstructuras();


int main() {
    int opcion;
    do {
        cout << "----- MENÚ PRINCIPAL -----" << endl;
        cout << "1. Arreglos" << endl;
        cout << "2. Estructuras" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;
        switch(opcion) {
            case 1:
                menuArreglos();
                break;
            case 2:
                menuEstructuras();
                break;
            case 3:
                cout << "¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }
    } while(opcion != 3);

    return 0;
}

void menuArreglos() {
    int opcion;
    do {
        cout << "----- MENÚ DE ARREGLOS -----" << endl;
        cout << "1. Ejercicio 1" << endl;
        cout << "2. Ejercicio 2" << endl;
        cout << "3. Ejercicio 3" << endl;
        cout << "4. Volver al menú principal" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;
        switch(opcion) {
            case 1:
                
                break;
            case 2:
                
                break;
            case 3:
                
                break;
            case 4:
                cout << "Volviendo al menú principal..." << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }
    } while(opcion != 4);
}

void menuEstructuras() {
    int opcion;
    do {
        cout << "----- MENÚ DE ESTRUCTURAS -----" << endl;
        cout << "1. Ejercicio 1" << endl;
        cout << "2. Ejercicio 2" << endl;
        cout << "3. Ejercicio 3" << endl;
        cout << "4. Volver al menú principal" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;
        switch(opcion) {
            case 1:
                
                break;
            case 2:
                
                break;
            case 3:
                
                break;
            case 4:
                cout << "Volviendo al menú principal..." << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }
    } while(opcion != 4);
}