/*
Nombre: 
Autor:  
Fecha: 
Descripcion: 
*/

#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "gotoxy.h"
#include "AjustarVentana.h"
#include "Gato.h"

using namespace std;

char gato[3][3];

enum {BV = 179, BH = 196};

#define LARGO 17
#define ALTO 15

void imprimegato(int x,int y);

void barrahorizontal();
void marcovertical(int x, int y);
void marcohorizontal(int x,int y);

void Tablero ();







void Tablero ()
{
	system("cls");
	gotoxy(1,1);
	char Nombre1[100];
	cout << "Nombre del jugador 1: ";
	cin.getline(Nombre1,100);
	char Nombre2[100];
	cout << "Nombre del jugador 2: ";
	cin.getline(Nombre2,100);
	system("cls");
	
	int x=10;
	int y=5;
	
	AjustarVentana(80,55);
	
	imprimegato(x,y);
	imprimegato(x,ALTO+y);
	imprimegato(x,2*ALTO+y);
	
	imprimegato(LARGO+x+1,y);
	imprimegato(LARGO+x+1,ALTO+y);
	imprimegato(LARGO+x+1,2*ALTO+y);
	
	imprimegato(2*LARGO+x+2,2*ALTO+y);
	imprimegato(2*LARGO+x+2,ALTO+y);
	imprimegato(2*LARGO+x+2,y);
	
	char Tab[82];
	for(int i =0 ; i < 81 ; i ++){
		Tab[i]='0';
		
	}
				
	Gato(SEPARACION_X,SEPARACION_Y,0,0,1,Tab,true,Nombre1,Nombre2);
	

}



void imprimegato(int x, int y)
{
	
	gotoxy(x,y);
	marcohorizontal(x,y);
	marcovertical(x,y);

	for(int i=1;i<ALTO;i++){
		gotoxy(x+1,y+i);
		cout  <<"     "<<char(BV)<<"     "<<char(BV)<<"      ";
		if(i%5==0) {
			gotoxy(x+1,y+i);
			barrahorizontal();
		}
	}
	
	marcovertical(LARGO+1+x,y+1);
	marcohorizontal(x,ALTO+y);

 }

 
 
void barrahorizontal()
{
	for(int i=0; i<LARGO;i++) cout << (char)BH;
}

void marcovertical(int x, int y){
	for(int i=0;i<15;i++) {
		gotoxy(x,y+i);
		cout << char(219);		
	}
}

void marcohorizontal(int x, int y){
	for(int i=0;i<LARGO+2;i++) {
		gotoxy(x+i,y);
		cout << char(219);
	}
}

