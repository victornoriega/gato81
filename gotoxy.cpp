#include <windows.h>

void gotoxy(unsigned short x,unsigned short y) 
{

	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = {x-1,y-1}; 
	SetConsoleCursorPosition(handle,coord);
}
