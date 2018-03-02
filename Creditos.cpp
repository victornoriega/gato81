#include <iostream>
#include <fstream>
#include <conio.h>


using namespace std;

#include "Pausa.h"
#include "MenuPrincipal.h"
#include "AjustarVentana.h"


#define ENTER 13
void Creditos()
{
	system("cls");
	AjustarVentana(40,60);
	string linea;
    ifstream archivo("Creditos.txt");
    if (archivo.is_open())
    {
    while ( getline (archivo,linea) )
    {
      cout << linea << endl;
    }
    archivo.close();
   } 

    else cout << "No se pudo abrir el archivo";
	cout << endl <<"Presiona Enter para continuar." << endl;
	char loca='0';
	while(loca!=ENTER){
		loca=getch();
	}
	MenuPrincipal();
}
