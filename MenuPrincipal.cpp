/*Name: VANO-.cpp
Author: Victor Ariel Noriega Ortiz
Description:
Date:
*/

#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include "gotoxy.h"
#include "OcultarCursor.h"
#include "Pausa.h"
#include "Tablero.h"
#include "Instructivo.h"
#include "Creditos.h"

using namespace std;

void MenuPrincipal()
{
	system("cls");
	cout <<endl<<endl<<endl;
	cout <<"    	            _____      _           ___  __ \n";
	cout<<"		  / ____|     | |         / _ \x5C/_ |\n";
	cout<<"		 | |  __  __ _| |_ ___   | (_) || |";
	cout<<"						 | | |_ |/ _` | __/ _ \x5C   > _ < | |\n";
	cout<<"		 | |__| | (_| | || (_) | | (_) || |\n";
	cout<<"		  \x5C_____|\x5C__,_|\x5C__\x5C___/   \x5C___/ |_|\n";
                                   
                                   
	gotoxy(1,17);
	
	cout << "\t\t\t\t1. Jugar." << endl << endl << endl;
	cout << "\t\t\t\t2. Instrucciones." << endl << endl << endl;
	cout << "\t\t\t\t3. Acerca de..." << endl << endl << endl;
	cout << "\t\t\t\t4. Salir." << endl << endl << endl;
	ShowConsoleCursor(false);
	char opcion='0';
	while(opcion!='1' && opcion!='2' && opcion!='3' && opcion!='4'){
		opcion=getch();
	}
	
	switch(opcion){
		case '1':
			gotoxy(30,30);
			cout<<"JUGAR!"<<endl;
			Sleep(1000);
			system("cls");
			Tablero();
			break;
		case '2':
			Instructivos();
			break;
		case '3':
			Creditos();
			break;
		case '4':
			cout << "Pulse enter para salir." << endl;		
			Pausa();
			
			system("cls");
			cout << "Gracias por usar el programa." << endl;
			exit(1);
			
	}
	
	while(true) getch();
	Pausa();
}



