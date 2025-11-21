#include <iostream>
#include <String>
#include "Rekenmachine2.h"

int main()
{
    std::string input;
    std::cout << "Type a wich equition you want to do: plus, minus, gedeeld of keer.";
    std::getline(std::cin, input);
    std::string x;
    std::string y;
    Rekenmachine2 calc;
    if (input == "plus")
    {
        std::cout << "wich numbers do you want to add" << std::endl;
        std::getline(std::cin, x);
        std::cout << "wich numbers do you want to add to the first" << std::endl;
        std::getline(std::cin, y);
        int intx = std::stoi(x);
        int inty = std::stoi(y);
       int antwoord =  calc.Plus( intx, inty);
       std::cout << antwoord << std::endl;
    }
    else if (input == "minus") 
    {
        //calc.Minus()
    }
    else if (input == "gedeeld") 
    {
        Rekenmachine2 Gedeeld();
    }
    else if (input == "keer") 
    {
        Rekenmachine2 Keer();
    }
}
