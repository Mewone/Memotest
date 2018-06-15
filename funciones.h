#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "menu.h"
#include <string.h>

using namespace std;

bool validarEntero(char *c)
{
    bool esEntero = true;

    for(int x=0; c[x]!='\0'; x++){
        if( c[x] < '0' || c[x] > '9' )
        {
        esEntero = false;
        }
    }
    return esEntero;

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

        cin.get();
        //Limpiamos la pantallita.
        sys::cls();


    }


}






#endif // FUNCIONES_H_INCLUDED
