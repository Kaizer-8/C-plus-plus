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

int Rekenmachine2::Minus(int x, int y)
{
	return x - y;
}

float Rekenmachine2::Gedeeld(float x, float y)
{
	return x / y;
}

int Rekenmachine2::Keer(int x, int y)
{
	return x * y;
}

int Rekenmachine2::Modulo(int x, int y) 
{
	return x % y;
}