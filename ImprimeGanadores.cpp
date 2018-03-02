#include "CambiaColor.h"
#include "gotoxy.h"
#include <iostream>
#define MOV_X 6
#define MOV_Y 5



using namespace std;


enum colores{AZUL=249, NEGRO=240, VERDE=242, ROSA=253, ROJO=252};

void ImprimeGanadores(char Ganador_1_1,char Ganador_1_2, char Ganador_1_3,char Ganador_2_1,char Ganador_2_2,char Ganador_2_3, char Ganador_3_1, char Ganador_3_2, char Ganador_3_3)
{
	if(Ganador_1_1=='2'){
		CambiaColor(ROJO);	
		for(int i = 0 ; i < 3;i++){
			for(int j= 0 ; j < 3; j++){
				gotoxy(13+j*MOV_X,8+i*MOV_Y);
				cout << "O";
			}
		}
		CambiaColor(NEGRO);
	}
	if(Ganador_1_1=='1'){
		CambiaColor(AZUL);	
		for(int i = 0 ; i < 3;i++){
			for(int j= 0 ; j < 3; j++){
				gotoxy(13+j*MOV_X,8+i*MOV_Y);
				cout << "X";
			}
		}
		CambiaColor(NEGRO);
	}
	
	//Imprime si hay ganador
	
	if(Ganador_1_2=='2'){	
		CambiaColor(ROJO);
		for(int i = 0 ; i < 3;i++){
			for(int j= 3 ; j < 6; j++){
				gotoxy(13+j*MOV_X,8+i*MOV_Y);
				cout << "O";
			}
		}
		CambiaColor(NEGRO);
	}
	
	if(Ganador_1_2=='1'){
		CambiaColor(AZUL);	
		for(int i = 0 ; i < 3;i++){
			for(int j= 3 ; j < 6; j++){
				gotoxy(13+j*MOV_X,8+i*MOV_Y);
				cout << "X";
			}
		}
		CambiaColor(NEGRO);
	}
	
	//Imprime si hay ganador
	
	if(Ganador_1_3=='2'){
		CambiaColor(ROJO);	
		for(int i = 0 ; i < 3;i++){
			for(int j= 6 ; j < 9; j++){
				gotoxy(13+j*MOV_X,8+i*MOV_Y);
				cout << "O";
			}
		}
		CambiaColor(NEGRO);
	}
	if(Ganador_1_3=='1'){
		CambiaColor(AZUL);	
		for(int i = 0 ; i < 3;i++){
			for(int j= 6 ; j < 9; j++){
				gotoxy(13+j*MOV_X,8+i*MOV_Y);
				cout << "X";
			}
		}
		CambiaColor(NEGRO);
	}
	
	
	//Imprime si hay ganador
	
	if(Ganador_2_1=='2'){
		CambiaColor(ROJO);		
		for(int i = 3 ; i < 6;i++){
			for(int j= 0 ; j < 3; j++){
				gotoxy(13+j*MOV_X,8+i*MOV_Y);
				cout << "O";
			}
		}
		CambiaColor(NEGRO);	
	}
	if(Ganador_2_1=='1'){
		CambiaColor(AZUL);		
		for(int i = 3 ; i < 6;i++){
			for(int j= 0 ; j < 3; j++){
				gotoxy(13+j*MOV_X,8+i*MOV_Y);
				cout << "X";
			}
		}
		CambiaColor(NEGRO);	
	}
		
	//Imprime si hay ganador
	
	if(Ganador_2_2=='2'){
		CambiaColor(ROJO);		
		for(int i = 3 ; i < 6;i++){
			for(int j= 3 ; j < 6; j++){
				gotoxy(13+j*MOV_X,8+i*MOV_Y);
				cout << "O";
			}
		}
		CambiaColor(NEGRO);	
	}
	if(Ganador_2_2=='1'){
		CambiaColor(AZUL);	
		for(int i = 3 ; i < 6;i++){
			for(int j= 3 ; j < 6; j++){
				gotoxy(13+j*MOV_X,8+i*MOV_Y);
				cout << "X";
			}
		}
		CambiaColor(NEGRO);	
	}
	//Imprime si hay ganador
	
	if(Ganador_3_1=='2'){
		CambiaColor(ROJO);		
		for(int i = 6 ; i < 9;i++){
			for(int j= 0 ; j < 3; j++){
				gotoxy(13+j*MOV_X,8+i*MOV_Y);
				cout << "O";
			}
		}
		CambiaColor(NEGRO);	
	}
	if(Ganador_3_1=='1'){
		CambiaColor(AZUL);		
		for(int i = 6 ; i < 9;i++){
			for(int j= 0 ; j < 3; j++){
				gotoxy(13+j*MOV_X,8+i*MOV_Y);
				cout << "X";
			}
		}
		CambiaColor(NEGRO);	
	}
	
	//Imprime si hay ganador
	
	if(Ganador_2_3=='2'){
		CambiaColor(ROJO);		
		for(int i = 3 ; i < 6;i++){
			for(int j= 6 ; j < 9; j++){
				gotoxy(13+j*MOV_X,8+i*MOV_Y);
				cout << "O";
			}
		}
		CambiaColor(NEGRO);	
	}
	if(Ganador_2_3=='1'){
		CambiaColor(AZUL);		
		for(int i = 3 ; i < 6;i++){
			for(int j= 6 ; j < 9; j++){
				gotoxy(13+j*MOV_X,8+i*MOV_Y);
				cout << "X";
			}
		}
		CambiaColor(NEGRO);	
	}
	
	
	
	if(Ganador_3_2=='2'){
		CambiaColor(ROJO);		
		for(int i = 6 ; i < 9;i++){
			for(int j= 3 ; j < 6; j++){
				gotoxy(13+j*MOV_X,8+i*MOV_Y);
				cout << "O";
			}
		}
		CambiaColor(NEGRO);	
	}
	if(Ganador_3_2=='1'){
		CambiaColor(AZUL);		
		for(int i = 6 ; i < 9;i++){
			for(int j= 3 ; j < 6; j++){
				gotoxy(13+j*MOV_X,8+i*MOV_Y);
				cout << "X";
			}
		}
		CambiaColor(NEGRO);	
	}

	
	if(Ganador_3_3=='2'){
		CambiaColor(ROJO);		
		for(int i = 6 ; i < 9;i++){
			for(int j= 6 ; j < 9; j++){
				gotoxy(13+j*MOV_X,8+i*MOV_Y);
				cout << "O";
			}
		}
		CambiaColor(NEGRO);	
	}
	if(Ganador_3_3=='1'){
		CambiaColor(AZUL);		
		for(int i = 6 ; i < 9;i++){
			for(int j= 6 ; j < 9; j++){
				gotoxy(13+j*MOV_X,8+i*MOV_Y);
				cout << "X";
			}
		}
		CambiaColor(NEGRO);	
	}
}
