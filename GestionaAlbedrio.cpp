#include <iostream>
#include "MenuPrincipal.h"
#include "gotoxy.h"
#include "ImprimeTurnos.h"
#include "CambiaColor.h"
#include <conio.h>



#define ARRIBA 72
#define IZQ 75
#define DER 77
#define ABAJO 80
#define ENTER 13
#define ESCAPE 27
#define MOV_X 6
#define MOV_Y 5
#define GATO_ANCHO 18
#define GATO_ALTO 15

enum colores{AZUL=249, NEGRO=240, VERDE=242, ROSA=253, ROJO=252};


using namespace std;


void ImprimeMarquito(int x, int y)
{
	gotoxy(x,y+1);
	cout << char(179);
	gotoxy(x,y+2);
	cout << char(179);
	gotoxy(x,y+3);
	cout << char(179);
	gotoxy(x+1,y);
	cout << "___";
	gotoxy(x+4,y+1);
	cout << char(179);
	gotoxy(x+4,y+2);
	cout << char(179);
	gotoxy(x+4,y+3);
	cout << char(179);
	gotoxy(x+1,y+3);
	cout << "___";
}


void BorraMarquito(int x, int y)
{
	gotoxy(x,y+1);
	cout << " ";
	gotoxy(x,y+2);
	cout << " ";
	gotoxy(x,y+3);
	cout << " ";
	gotoxy(x+1,y);
	cout << "   ";
	gotoxy(x+4,y+1);
	cout << " ";
	gotoxy(x+4,y+2);
	cout << " ";
	gotoxy(x+4,y+3);
	cout << " ";
	gotoxy(x+1,y+3);
	cout << "   ";
}


void GestionaMarcos(char Tab[], bool Jugador1, int &GatitoX, int &GatitoY,char Nombre1[], char Nombre2[])
{
	
	char tecla;
	ImprimeTurnos(Jugador1,Nombre1,Nombre2);
	
	int x=11;
	int y=6;
	
	CambiaColor(ROSA);
	ImprimeMarquito(x,y);
	
	GatitoX=0;
	GatitoY=0;
		
	while(true){
		
		gotoxy(x,y);
		
		
		if(kbhit()){
			tecla=getch();
			BorraMarquito(x,y);
			if(tecla==IZQ && x-MOV_X > 8){
				x-=MOV_X;
				GatitoX--;				
			}
			if(tecla==DER && (x+MOV_X) < 60){
				x+=MOV_X;
				GatitoX++;
			}
			if(tecla==ARRIBA && y-MOV_Y >5){
				y-=MOV_Y;
				GatitoY--;
			}
			if(tecla==ABAJO && y+MOV_Y <50){
				y+=MOV_Y;
				GatitoY++;
			}
			if(tecla==ENTER && Tab[GatitoX*9+GatitoY]=='0'){
				gotoxy(x+2,y+2);
				if(Jugador1==true){
					CambiaColor(AZUL);
					cout << "X";
					CambiaColor(NEGRO);
					Tab[GatitoX*9+GatitoY]='1';
				}
				if(Jugador1==false){
					CambiaColor(ROJO);
					cout << "O";
					CambiaColor(NEGRO);
					Tab[GatitoX*9+GatitoY]='2';
				}
				
				while(GatitoX>=3){
					GatitoX-=3;
				}
				while(GatitoY>=3){
					GatitoY-=3;
				}
				break;
			}
			if(tecla==ESCAPE){
				CambiaColor(NEGRO);
				MenuPrincipal();
			}
			
			gotoxy(x,y);
			ImprimeMarquito(x,y);
		}
		
	}	
}

