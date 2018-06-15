#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include "funciones.h"
#include <string.h>

using namespace std;

void menuPrincipal()
{
    cout<<"1. Jugar"<<endl;
    cout<<"2. Ayuda"<<endl;
    cout<<"3. Salir"<<endl;
}

void menu()
{

 char opcion[1];
    bool salir= false;
    while(!salir)
    {
        menuPrincipal();
        cout<<"Ingresa una opción: ";
        sys::getline(opcion,1);
        //Validacion de entrada. ( Solo ingreso de uno, dos y tres ).
        while(!validarEntero(opcion) || !strlen(opcion) || opcion[0] < '1' || opcion[0] > '3')
        {
            cout<<"No te hagas el loco"<<endl;
            sys::getline(opcion,1);
        }


        //Switch elemental.
        switch(opcion[0])
        {
        case '1':
        {
            cout<<"Empezo el juego"<<endl;
        }break;
        case '2':
        {
            cout<<"Necesitas una mano?. ya fue man! perdistes!"<<endl;
        }break;
        case '3':
        {
            salir = true;
            cout<<"Salida:Exit:Ausfahrt:Sortie:123...."<<endl;
        }break;
        }

        pedirEnter();
        //Limpiamos la pantallita.
        sys::cls();
    }
}




#endif // MENU_H_INCLUDED
