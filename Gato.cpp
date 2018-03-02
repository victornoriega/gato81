#include <iostream>
#include <cstdlib>
#include "gotoxy.h"
#include <conio.h>
#include "Gato.h"
#include "Pausa.h"
#include "CambiaColor.h"
#include "MenuPrincipal.h"
#include "CambiaColor.h"
#include "BuscaGanadores1.h"
#include "BuscaGanadores2.h"
#include "Ganador_Gatos_Medios.h"
#include "ImprimeGanadores.h"
#include "VerificaAlbedrio.h"
#include "ImprimeTurnos.h"
#include "CompletaGanadores.h"
#include "VerificaEmpates.h"

#include "GestionaAlbedrio.h"

using namespace std;

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

void Gato(int x, int y, int GatoMedioX, int GatoMedioY, bool Jugador1, char Tab[], bool RequiereLibertad, char Nombre1[], char Nombre2[])
{

	//La variable gatitoX calcula en que gato pequeño estas (puede ser del 0 al 8
	//La variable GatitoY calcula en que gato pequeño estas en Y (puede ser del 0 al 8)
	//De esta manera hay 81 posiciones
	//la variable GatoMedioX calcula en que gato mediano estas en x( puede ser 0,1,2)
	//La variable GatoMedioY calcula en que gato mediano estas en y (puede ser 0,1,2)
	//la variable Tab es para saber que posiciones del tablero estan ocupadas (arreglo bidimensional tratado como uno unidimensional)
	//las variables poX y posY calculan en que posicion va a empezar el siguiente jugador.

	ImprimeTurnos(Jugador1,Nombre1,Nombre2);

	int GatitoX=x-13;
	int cont=0;
	while(GatitoX>=MOV_X) {
		GatitoX-=MOV_X;
		cont++;
	}
	GatitoX+=cont;

	cont=0;
	int GatitoY=y-8;
	while(GatitoY>=MOV_Y){
		 GatitoY-=MOV_Y;
		 cont++;
	}

	GatitoY+=cont;

	char Ganador_1_1='0';
	char Ganador_1_2='0';
	char Ganador_1_3='0';
	char Ganador_2_1='0';
	char Ganador_2_2='0';
	char Ganador_2_3='0';
	char Ganador_3_1='0';
	char Ganador_3_2='0';
	char Ganador_3_3='0';
	int cont_1_1=0;
	int cont_1_2=0;
	int cont_1_3=0;
	int cont_2_1=0;
	int cont_2_2=0;
	int cont_2_3=0;
	int cont_3_1=0;
	int cont_3_2=0;
	int cont_3_3=0;

	GanadorGatosMedios(Tab, Ganador_1_1,Ganador_1_2,Ganador_1_3,Ganador_2_1,Ganador_2_2,Ganador_2_3,Ganador_3_1,Ganador_3_2,Ganador_3_3);
	CompletaGanadores(Tab, Ganador_1_1,Ganador_1_2,Ganador_1_3,Ganador_2_1,Ganador_2_2,Ganador_2_3,Ganador_3_1,Ganador_3_2,Ganador_3_3);
	VerificaEmpates(Tab,cont_1_1,cont_1_2,cont_1_3,cont_2_1,cont_2_2,cont_2_3,cont_3_1,cont_3_2,cont_3_3);

	while(RequiereLibertad){
		GestionaMarcos(Tab,Jugador1,GatitoX,GatitoY,Nombre1,Nombre2);
		GanadorGatosMedios(Tab, Ganador_1_1,Ganador_1_2,Ganador_1_3,Ganador_2_1,Ganador_2_2,Ganador_2_3,Ganador_3_1,Ganador_3_2,Ganador_3_3);
		CompletaGanadores(Tab, Ganador_1_1,Ganador_1_2,Ganador_1_3,Ganador_2_1,Ganador_2_2,Ganador_2_3,Ganador_3_1,Ganador_3_2,Ganador_3_3);
		ImprimeGanadores(Ganador_1_1,Ganador_1_2,Ganador_1_3,Ganador_2_1,Ganador_2_2,Ganador_2_3,Ganador_3_1,Ganador_3_2,Ganador_3_3);
		Jugador1=!Jugador1;
		x=GatoMedioX=GatitoX;
		y=GatoMedioY=GatitoY;
		x*=GATO_ANCHO;
		y*=GATO_ALTO;
		x+=SEPARACION_X;
		y+=SEPARACION_Y;
		if(BuscaGanadores1(Ganador_1_1,Ganador_1_2,Ganador_1_3,Ganador_2_1,Ganador_2_2,Ganador_2_3,Ganador_3_1,Ganador_3_2,Ganador_3_3)){
			CambiaColor(VERDE);
			for(int i = 0 ; i < 9;i++){
				for(int j= 0 ; j < 9; j++){
					gotoxy(13+j*MOV_X,8+i*MOV_Y);
					cout << "X";
				}
			}
			CambiaColor(NEGRO);
			gotoxy(15,1);
			cout << "El ganador es "<<Nombre1 << endl;
			Pausa();
			MenuPrincipal();
		}


		if(BuscaGanadores2(Ganador_1_1,Ganador_1_2,Ganador_1_3,Ganador_2_1,Ganador_2_2,Ganador_2_3,Ganador_3_1,Ganador_3_2,Ganador_3_3)){
			CambiaColor(VERDE);
			for(int i = 0 ; i < 9;i++){
				for(int j= 0 ; j < 9; j++){
					gotoxy(13+j*MOV_X,8+i*MOV_Y);
					cout << "O";
				}
			}
			CambiaColor(NEGRO);
			gotoxy(15,1);
			cout << "El ganador es "<<Nombre2 << endl;
			Pausa();
			MenuPrincipal();
		}
		RequiereLibertad=VerificaLibreAlbedrio(Ganador_1_1,Ganador_1_2,Ganador_1_3,Ganador_2_1,Ganador_2_2,Ganador_2_3,Ganador_3_1,Ganador_3_2,Ganador_3_3,cont_1_1,cont_1_2,cont_1_3,cont_2_1,cont_2_2,cont_2_3,cont_3_1,cont_3_2,cont_3_3,GatoMedioX,GatoMedioY);
	}

	GanadorGatosMedios(Tab, Ganador_1_1,Ganador_1_2,Ganador_1_3,Ganador_2_1,Ganador_2_2,Ganador_2_3,Ganador_3_1,Ganador_3_2,Ganador_3_3);
	ImprimeGanadores(Ganador_1_1,Ganador_1_2,Ganador_1_3,Ganador_2_1,Ganador_2_2,Ganador_2_3,Ganador_3_1,Ganador_3_2,Ganador_3_3);

	GatitoX=x-13;
	cont=0;
	while(GatitoX>=MOV_X) {
		GatitoX-=MOV_X;
		cont++;
	}

	GatitoX+=cont;

	cont=0;
	GatitoY=y-8;
	while(GatitoY>=MOV_Y){
		GatitoY-=MOV_Y;
		cont++;
	}

	GatitoY+=cont;

	ImprimeTurnos(Jugador1,Nombre1,Nombre2);

	if(Tab[GatitoX*9+GatitoY]!='0'){
		if(Tab[GatitoX*9+GatitoY+9]=='0') x+=MOV_X;
		else{
			if(Tab[GatitoX*9+GatitoY+1]=='0') y+=MOV_Y;
			else{
				if(Tab[GatitoX*9+GatitoY+18]=='0') x+=2*MOV_X;
				else{
					if(Tab[GatitoX*9+GatitoY+2]=='0') y+=2*MOV_Y;
					else{
						if(Tab[GatitoX*9+GatitoY+10]=='0'){
							x+=MOV_X;
							y+=MOV_Y;
						}else{
							if(Tab[GatitoX*9+GatitoY+11]=='0'){
								x+=MOV_X;
								y+=2*MOV_Y;
							}else{
								if(Tab[GatitoX*9+GatitoY+19]=='0'){
									x+=2*MOV_X;
									y+=MOV_Y;
								}else{
									if(Tab[GatitoX*9+GatitoY+20]=='0'){
										if(Tab[GatitoX*9+GatitoY+20]=='0'){
											x+=2*MOV_X;
											y+=2*MOV_Y;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}



	gotoxy(x,y);

	GatitoX=x-13;
	cont=0;
	while(GatitoX>=MOV_X) {
		GatitoX-=MOV_X;
		cont++;
	}

	GatitoX+=cont;

	cont=0;
	GatitoY=y-8;
	while(GatitoY>=MOV_Y){
		GatitoY-=MOV_Y;
		cont++;
	}

	GatitoY+=cont;

	if(Jugador1) {
		CambiaColor(AZUL);
		cout << "X";
		CambiaColor(NEGRO);
	}

	else {
		CambiaColor(ROJO);
		cout << "O";
		CambiaColor(NEGRO);
	}
	ImprimeMarquito(x-2,y-2);


	char tecla;
	while(true){
		if(kbhit()){
	        tecla = getch();
	        gotoxy(x,y);
	        cout << " ";
			BorraMarquito(x-2,y-2);
	        if(x>SEPARACION_X+GatoMedioX*GATO_ANCHO) {
				if(tecla == IZQ || tecla=='a' || tecla=='A'){
					GatitoX=x-13;
					cont=0;
					while(GatitoX>=MOV_X) {
						GatitoX-=MOV_X;
						cont++;
					}

					GatitoX+=cont;

					cont=0;
					GatitoY=y-8;
					while(GatitoY>=MOV_Y){
						GatitoY-=MOV_Y;
						cont++;
					}

					//Verificados.
					GatitoY+=cont;
					if(Tab[GatitoX*9+GatitoY-9]=='0') x-=MOV_X;
					else{
						if(Tab[GatitoX*9+GatitoY-18]=='0' && GatitoX!=1 && GatitoX!=4 && GatitoX!=7 && GatitoX!=0 && GatitoX!=3 && GatitoX!=6) x-=2*MOV_X;
						else{
							if(Tab[GatitoX*9+GatitoY-10]=='0'&& GatitoY!=0 && GatitoY!=3 && GatitoY!=6 && GatitoX!=0 && GatitoX!=3 && GatitoX!=6) {
								x-=MOV_X;
								y-=MOV_Y;
							}else{
								if(Tab[GatitoX*9+GatitoY-19]=='0' && GatitoY!=0 && GatitoY!=3 && GatitoY!=6 && GatitoX!=1 && GatitoX!=4 && GatitoX!=7 && GatitoX!=0 && GatitoX!= 3 && GatitoX!=6){
									x-=2*MOV_X;
									y-=MOV_Y;
								}else{
									if(Tab[GatitoX*9+GatitoY-8]=='0' && GatitoX!=0 && GatitoX!=3 && GatitoX!=6 && GatitoY!=2 && GatitoY!=5 && GatitoY!=8){
										x-=MOV_X;
										y+=MOV_Y;
									}
								}
							}
						}
					}

				}
			}
	        if(x<23+GatoMedioX*GATO_ANCHO){
				if(tecla == DER || tecla=='d' || tecla=='D') {
					GatitoX=x-13;
					cont=0;
					while(GatitoX>=MOV_X) {
						GatitoX-=MOV_X;
						cont++;
					}

					GatitoX+=cont;

					cont=0;
					GatitoY=y-8;
					while(GatitoY>=MOV_Y){
						GatitoY-=MOV_Y;
						cont++;
					}
					//Verificados
					GatitoY+=cont;
					if(Tab[GatitoX*9+GatitoY+9]=='0') x+=MOV_X;
					else{
						if(Tab[GatitoX*9+GatitoY+18]=='0' && GatitoX!=1 && GatitoX!=4 && GatitoX!=7) x+= 2*MOV_X;
						else{
							if(Tab[GatitoX*9+GatitoY+10]=='0' && GatitoY!=0 && GatitoY!=3 && GatitoY!=6 && GatitoY!=2 && GatitoY!=5 && GatitoY!=8) {
								x+=MOV_X;
								y+=MOV_Y;
							}else{
								if(Tab[GatitoX*9+GatitoY+19]== '0'  && GatitoX!=1 && GatitoX!=2 && GatitoX!=5 && GatitoX!=8 && GatitoX!=4 && GatitoX!=7 && GatitoY!=2 && GatitoY!=5 && GatitoY!=8) {
									x+=2*MOV_X;
									y+=MOV_Y;
								}else{
									if(Tab[GatitoX*9+GatitoY+17]=='0' && GatitoX!=1 && GatitoX!=2 && GatitoX!=4 && GatitoX!=5 && GatitoX!=7 && GatitoX!=8 && GatitoY!=0 && GatitoY!=3 && GatitoY!=6 ){
										x+=2*MOV_X;
										y-=MOV_Y;
									}
								}
							}
						}
					}

				}
			}
	        if(y>SEPARACION_Y+GatoMedioY*GATO_ALTO){
				if(tecla == ARRIBA || tecla=='w' || tecla=='W') {
					GatitoX=x-13;
					cont=0;
					while(GatitoX>=MOV_X) {
						GatitoX-=MOV_X;
						cont++;
					}

					GatitoX+=cont;

					cont=0;
					GatitoY=y-8;
					while(GatitoY>=MOV_Y){
						GatitoY-=MOV_Y;
						cont++;
					}

					//Verificado
					GatitoY+=cont;
					if(Tab[GatitoX*9+GatitoY-1]=='0')y-=MOV_Y;
					else{
						if(Tab[GatitoX*9+GatitoY-2]=='0' && GatitoY!=1 && GatitoY!=4 && GatitoY!=7 &&GatitoY!=0 && GatitoY!=3 && GatitoY!=6) y-= 2*MOV_Y;
						else{
							if(Tab[GatitoX*9+GatitoY-11]=='0' &&GatitoY!=0 && GatitoY!=3 && GatitoY!=6 && GatitoY!=1 && GatitoY!=4 && GatitoY!=7 && GatitoX!=0 && GatitoX!=3 && GatitoX!=6){
								x-=MOV_X;
								y-=2*MOV_Y;
							}else{
								if(Tab[GatitoX*9+GatitoY-20]=='0' && GatitoX!=0 && GatitoX!=3 && GatitoX!=6 && GatitoX!=1  && GatitoX!=4  && GatitoX!=7 &&  GatitoY!=0 && GatitoY!= 3 && GatitoY!=6  &&GatitoY!=1 && GatitoY!=4 && GatitoY!=7 ){
									x-=2*MOV_X;
									y-=2*MOV_Y;
								}else{
									if(Tab[GatitoX*9+GatitoY-19]=='0' && GatitoX!=0 && GatitoX!=3 && GatitoX!=6 && GatitoX!=1 && GatitoX!= 4 && GatitoX!=7 && GatitoY!=0 && GatitoY!=3 && GatitoY!=6){
										x-=2*MOV_X;
										y-=MOV_Y;
									}else{
										if(Tab[GatitoX*9+GatitoY+8]=='0' &&GatitoX!=2 &&GatitoX!=5 && GatitoX!=8 && GatitoY!=0 && GatitoY!=3 && GatitoY!=6){
											x+=MOV_X;
											y-=MOV_Y;
										}else{
											if(Tab[GatitoX*9+GatitoY-10]=='0' &&GatitoX!=0 && GatitoX!=3 && GatitoX!=6 && GatitoY!=0 && GatitoY!=3 && GatitoY!=6){
												x-=MOV_X;
												y-=MOV_Y;
											}else{
												if(Tab[GatitoX*9+GatitoY-7]=='0' &&GatitoX!=2 && GatitoX !=5 && GatitoX!=8 && GatitoY!=0 && GatitoY!=3 && GatitoY!=6 && GatitoY!=1 && GatitoY!=4 && GatitoY!=7 ){
													x+=MOV_X;
													y-=2*MOV_Y;
												}else{
													if(Tab[GatitoX*9+GatitoY+17]=='0' &&GatitoX!=1 && GatitoX!=4 && GatitoX!=7 && GatitoX!=2 && GatitoX!=5 && GatitoX!=8 && GatitoY!=0 && GatitoY!=3 && GatitoY!=6){
														x+=2*MOV_X;
														y-=MOV_Y;
													}else{
														if(Tab[GatitoX*9+GatitoY+7]=='0' && GatitoX!=2 && GatitoX!=5 && GatitoX!=8 && GatitoY!=0 && GatitoY!=3 && GatitoY!=6 && GatitoY!=1 && GatitoY!=4 && GatitoY!=7){
															x+=MOV_X;
															y-=2*MOV_Y;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}

				}
			}
	        if(y<15+GatoMedioY*GATO_ALTO){
	        		GatitoX=x-13;
					cont=0;
					while(GatitoX>=MOV_X) {
						GatitoX-=MOV_X;
						cont++;
					}

					GatitoX+=cont;

					cont=0;
					GatitoY=y-8;
					while(GatitoY>=MOV_Y){
						GatitoY-=MOV_Y;
						cont++;
					}

					GatitoY+=cont;
	        	if(tecla == ABAJO || tecla== 's' || tecla=='S') {
	        		GatitoX=x-13;
					cont=0;
					while(GatitoX>=MOV_X) {
						GatitoX-=MOV_X;
						cont++;
					}

					GatitoX+=cont;

					cont=0;
					GatitoY=y-8;
					while(GatitoY>=MOV_Y){
						GatitoY-=MOV_Y;
						cont++;
					}
					//Verificado
					GatitoY+=cont;
					if(Tab[GatitoX*9+GatitoY+1]=='0') y+=MOV_Y;
					else{
						if(Tab[GatitoX*9+GatitoY+2]=='0' && GatitoY!=1 && GatitoY!=4 && GatitoY!=7 && GatitoY!=2 && GatitoY!=5 && GatitoY!=8) {
							y+= 2*MOV_Y;
						}
						else{
							if(Tab[GatitoX*9+GatitoY-8]=='0'&& GatitoY!=2 && GatitoY!=5 && GatitoY!=8 && GatitoX!=0 && GatitoX!=3 && GatitoX!=6) {
								x-=MOV_X;
								y+=MOV_Y;
							}else{
								if(Tab[GatitoX*9+GatitoY+10]=='0' && GatitoY!=2 && GatitoY!=5 && GatitoY!=8 && GatitoX!=2 && GatitoX!=5 && GatitoX!=8) {
									x+=MOV_X;
									y+=MOV_Y;
								}else{

										if(Tab[GatitoX*9+GatitoY+11]=='0' && GatitoX!=2 && GatitoX!=5 && GatitoX!=8 && GatitoY!=2 && GatitoY!= 5 && GatitoY!= 8 && GatitoY!=1 && GatitoY!=4 && GatitoY!=7){
											y+=2*MOV_Y;
											x+=MOV_X;
										}else{
											if(Tab[GatitoX*9+GatitoY+20]=='0' && GatitoX!=1 && GatitoX!=4 && GatitoX!=7 && GatitoY!=1 && GatitoY!=4 && GatitoY!=7 && GatitoX!=2 && GatitoX!=5 && GatitoX!=8 && GatitoY!=2 && GatitoY!=5 && GatitoY!=8){
												y+=2*MOV_Y;
												x+=2*MOV_X;
											}else{
												if(Tab[GatitoX*9+GatitoY+19]=='0'&& GatitoX!=1 && GatitoX!=7 && GatitoX!=4 && GatitoX!=2 && GatitoX!=5 && GatitoX!=8 && GatitoY!=2 && GatitoY!=5 && GatitoY!=8 ){
													x+=2*MOV_X;
													y+=MOV_Y;
												}else{
													if(Tab[GatitoX*9+GatitoY-7]=='0' && GatitoX!=0 && GatitoX!=3 && GatitoX!=6 && GatitoY!=1 && GatitoY!=4 && GatitoY!=7 && GatitoY!=2 && GatitoY!=5 && GatitoY!=8){
														x-=MOV_X;
														y+=2*MOV_Y;
													}else{
														if(Tab[GatitoX*9+GatitoY-17]=='0' && (GatitoX==2 || GatitoX==5 || GatitoX==8) && GatitoY!=2 && GatitoY!=5 && GatitoY!=8){
															x-=2*MOV_X;
															y+=MOV_Y;
														}
													}

												}
											}
										}


								}
							}
						}
					}

				}
	        }
	        ImprimeMarquito(x-2,y-2);
	        if(Jugador1) {
				gotoxy(x,y);
				CambiaColor(AZUL);
				printf("X");
				CambiaColor(NEGRO);
			}
	        else {
				gotoxy(x,y);
				CambiaColor(ROJO);
				printf("O");
				CambiaColor(NEGRO);
			}

			GatitoX=x-13;
			cont=0;
			while(GatitoX>=MOV_X) {
				GatitoX-=MOV_X;
				cont++;
			}

			GatitoX+=cont;

			cont=0;
			GatitoY=y-8;
			while(GatitoY>=MOV_Y){
				GatitoY-=MOV_Y;
				cont++;
			}

			GatitoY+=cont;

	        if(tecla==ENTER || tecla==' ') {
	        	BorraMarquito(x-2,y-2);
	        	if(Jugador1) Tab[GatitoX*9+GatitoY]='1';
				else Tab[GatitoX*9+GatitoY]='2';
	        	break;
			}
			if(tecla==ESCAPE){
				MenuPrincipal();
			}
	    }
	}

	GanadorGatosMedios(Tab, Ganador_1_1,Ganador_1_2,Ganador_1_3,Ganador_2_1,Ganador_2_2,Ganador_2_3,Ganador_3_1,Ganador_3_2,Ganador_3_3);
	ImprimeGanadores(Ganador_1_1,Ganador_1_2,Ganador_1_3,Ganador_2_1,Ganador_2_2,Ganador_2_3,Ganador_3_1,Ganador_3_2,Ganador_3_3);
	/////********************Ganadores**************************************************/

	if(BuscaGanadores1(Ganador_1_1,Ganador_1_2,Ganador_1_3,Ganador_2_1,Ganador_2_2,Ganador_2_3,Ganador_3_1,Ganador_3_2,Ganador_3_3)){
		CambiaColor(VERDE);
		for(int i = 0 ; i < 9;i++){
			for(int j= 0 ; j < 9; j++){
				gotoxy(13+j*MOV_X,8+i*MOV_Y);
				cout << "X";
			}
		}
		CambiaColor(NEGRO);
		gotoxy(15,1);
		cout << "El ganador es "<<Nombre1 << endl;
		Pausa();
		MenuPrincipal();
	}


	if(BuscaGanadores2(Ganador_1_1,Ganador_1_2,Ganador_1_3,Ganador_2_1,Ganador_2_2,Ganador_2_3,Ganador_3_1,Ganador_3_2,Ganador_3_3)){
		CambiaColor(VERDE);
		for(int i = 0 ; i < 9;i++){
			for(int j= 0 ; j < 9; j++){
				gotoxy(13+j*MOV_X,8+i*MOV_Y);
				cout << "O";
			}
		}
		CambiaColor(NEGRO);
		gotoxy(15,1);
		cout << "El ganador es "<<Nombre2 << endl;
		Pausa();
		MenuPrincipal();
	}

	int posX=x-(13+GatoMedioX*GATO_ANCHO);

	while(posX >= MOV_X) posX=posX/MOV_X;

	int posY=y-(8+GatoMedioY*GATO_ALTO);

	while(posY>=MOV_Y) posY=posY/MOV_Y;


	GatitoX=x-13;
	cont=0;
	while(GatitoX>=MOV_X) {
		GatitoX-=MOV_X;
		cont++;
	}

	GatitoX+=cont;

	cont=0;
	GatitoY=y-8;
	while(GatitoY>=MOV_Y){
		GatitoY-=MOV_Y;
		cont++;
	}

	GatitoY+=cont;


	GatoMedioX=posX;
	GatoMedioY=posY;


	posX*=GATO_ANCHO;
	posY*=GATO_ALTO;
	posX+=SEPARACION_X;
	posY+=SEPARACION_Y;

	RequiereLibertad=VerificaLibreAlbedrio(Ganador_1_1,Ganador_1_2,Ganador_1_3,Ganador_2_1,Ganador_2_2,Ganador_2_3,Ganador_3_1,Ganador_3_2,Ganador_3_3,cont_1_1,cont_1_2,cont_1_3,cont_2_1,cont_2_2,cont_2_3,cont_3_1,cont_3_2,cont_3_3,GatoMedioX,GatoMedioY);

	if( (Ganador_1_2!='0' || cont_1_2==9) && (Ganador_1_1!='0' || cont_1_1==9) && (Ganador_1_3!='0'|| cont_1_3==9) && (Ganador_2_1!='0'|| cont_2_1==9) && (Ganador_2_2!='0' || cont_2_2==9) && (Ganador_2_3!='0'||cont_2_3==9) && (Ganador_3_1!='0' || cont_3_1==9) && (Ganador_3_2!='0'|| cont_3_2==9) && (Ganador_3_3!='0'|| cont_3_3==9)){
		gotoxy(20,1);
		cout << "El juego ha resultado en un empate." << endl;
		Pausa();
		MenuPrincipal();
	}
	Gato(posX,posY,GatoMedioX,GatoMedioY,!Jugador1,Tab,RequiereLibertad,Nombre1,Nombre2);

}
