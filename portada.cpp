/*Name: VANO-.cpp
Author: Victor Ariel Noriega Ortiz
Description:
Date:
*/

#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <limits>
#include "OcultarCursor.h"
#include "AjustarVentana.h"
#include "CambiaColor.h"
#include "Pausa.h"
#include "gotoxy.h"
#include "MenuPrincipal.h"
#define ENTER 13
#define DORMIR 20

using namespace std;



void ImprimePortada()
{
	ShowConsoleCursor(false);
	AjustarVentana(80,50);
	CambiaColor(240);
	system("cls");
	Sleep(DORMIR);
	cout<<" .----------------.  .----------------.  .----------------.  .----------------. ";
	Sleep(DORMIR);
	cout<<"| .--------------. || .--------------. || .--------------. || .--------------. |";
	Sleep(DORMIR);
	cout<<"| |    ______    | || |      __      | || |  _________   | || |     ____     | |";
	Sleep(DORMIR);
	cout<<"| |  .' ___  |   | || |     /  \x5C     | || | |  _   _  |  | || |   .'    `.   | |";
	Sleep(DORMIR);
	cout<<"| | / .'   \x5C_|   | || |    / /\x5C \x5C    | || | |_/ | | \x5C_|  | || |  /  .--.  \x5C  | |";
	Sleep(DORMIR);
	cout<<"| | | |    ____  | || |   / ____ \x5C   | || |     | |      | || |  | |    | |  | |";
	Sleep(DORMIR);
	cout<<"| | \x5C `.___]  _| | || | _/ /    \x5C \x5C_ | || |    _| |_     | || |  \x5C  `--'  /  | |";
	Sleep(DORMIR);
	cout<<"| |  `._____.'   | || ||____|  |____|| || |   |_____|    | || |   `.____.'   | |";
	Sleep(DORMIR);
	cout<<"| |              | || |              | || |              | || |              | |";
	Sleep(DORMIR);
	cout<<"| '--------------' || '--------------' || '--------------' || '--------------' |";
	Sleep(DORMIR);
	cout<<" '----------------'  '----------------'  '----------------'  '----------------' ";
	Sleep(DORMIR);
    cout<<"\n                  .--------------------------------."                           ;
    Sleep(DORMIR);
    cout<<"\n     	          | .----------------------------. |"                           ;
    Sleep(DORMIR);
    cout<<"\n     		  | |     ____          __       | |"                           ;
    Sleep(DORMIR);
    cout<<"\n   		  | |   .' __ '.       /  |      | |"                           ;
    Sleep(DORMIR);
    cout<<"\n     		  | |   | (__) |       `| |      | |"                           ;
    Sleep(DORMIR);
    cout<<"\n     	   	  | |   .`____'.        | |      | |"                           ;
    Sleep(DORMIR);
    cout<<"\n     		  | |  | (____) |      _| |_     | |"                          ;
    Sleep(DORMIR);
    cout<<"\n     		  | |  `.______.'     |_____|    | |"                          ;
    Sleep(DORMIR);
    cout<<"\n     		  | |                            | |"                          ;
    Sleep(DORMIR);
    cout<<"\n     		  | '----------------------------' |"                         ;
    Sleep(DORMIR);
    cout<<"\n      		  '--------------------------------'  ";
    Sleep(DORMIR);
	cout<<endl;


	gotoxy(30,31);
	cout <<"Presiona ENTER";
	char enter='0';

	while(enter!=ENTER) enter=getch();
	system("cls");

	MenuPrincipal();

}


