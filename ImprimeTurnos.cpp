#include <iostream>
#include "gotoxy.h"
#define TURNO_ALTO 52
#define TURNO_ANCHO 28



void ImprimeTurnos(bool J, char n1[], char n2[])
{
	gotoxy(1,1);
	std::cout << "ESC=Salir.";

	gotoxy(TURNO_ANCHO,TURNO_ALTO);

	if(J){
		for(int i = TURNO_ANCHO; i < 80; i++) {
			gotoxy(i,TURNO_ALTO);
			std::cout << " ";
		}
		gotoxy(TURNO_ANCHO,TURNO_ALTO);
		std::cout << "Jugador en turno: "<<n1;
	}
	else {
		for(int i = TURNO_ANCHO; i < 80; i++) {
			gotoxy(i,TURNO_ALTO);
			std::cout << " ";
		}
		gotoxy(TURNO_ANCHO,TURNO_ALTO);
		std::cout << "Jugador en turno: "<<n2;
	}
}
