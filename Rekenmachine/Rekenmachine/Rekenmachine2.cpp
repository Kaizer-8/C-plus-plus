#include "Rekenmachine2.h"
#include <iostream>
#include <string>

Rekenmachine2::Rekenmachine2()
{

}
Rekenmachine2::~Rekenmachine2()
{

}

int Rekenmachine2::Plus(int x, int y) 
{
	return x + y;
}

void Rekenmachine2::Minus(int x, int y)
{
	std::cout << x - y << std::endl;
}

void Rekenmachine2::Gedeeld(float x, float y)
{
	std::cout << x / y << std::endl;
}

void Rekenmachine2::Keer(int x, int y)
{
	std::cout << x * y << std::endl;
}