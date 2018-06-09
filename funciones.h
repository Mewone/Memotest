#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

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


#endif // FUNCIONES_H_INCLUDED
