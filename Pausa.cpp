#include <iostream>
#include <cstdlib>

using namespace std;

void Pausa()
{
	std::cin.clear(); //limpia errores
	std::cin.sync(); //Limpia el buffer
	std::cin.get();
}
