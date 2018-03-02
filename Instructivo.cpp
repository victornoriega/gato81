#include <iostream>
#include <fstream>
#include <conio.h>


using namespace std;

#include "Pausa.h"
#include "MenuPrincipal.h"
#include "AjustarVentana.h"


#define ENTER 13
void Instructivos()
{
	system("cls");
	AjustarVentana(55,60);
	string linea;
    ifstream archivo("Reglas-Gato81.txt");
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
