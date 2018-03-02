#include <windows.h>
#include <iostream>

void CambiaColor(unsigned short valor_color)
{
    HANDLE  hConsole;

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, valor_color);
}
