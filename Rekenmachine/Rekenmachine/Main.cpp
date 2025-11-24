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
        std::cout << "wich numbers do you want to subtract from" << std::endl;
        std::getline(std::cin, x);
        std::cout << "wich numbers do you want to subtract from the first" << std::endl;
        std::getline(std::cin, y);
        int intx = std::stoi(x);
        int inty = std::stoi(y);
        int antwoord = calc.Minus(intx, inty);
        std::cout << antwoord << std::endl;
    }
    else if (input == "gedeeld") 
    {
        std::cout << "wich numbers do you want to divide" << std::endl;
        std::getline(std::cin, x);
        std::cout << "wich numbers do you want to divide from the first" << std::endl;
        std::getline(std::cin, y);
        int intx = std::stoi(x);
        int inty = std::stoi(y);
        int antwoord = calc.Gedeeld(intx, inty);
        std::cout << antwoord << std::endl;
    }
    else if (input == "keer") 
    {
        std::cout << "wich numbers do you want to multiply" << std::endl;
        std::getline(std::cin, x);
        std::cout << "wich numbers do you want to multiply from the first" << std::endl;
        std::getline(std::cin, y);
        int intx = std::stoi(x);
        int inty = std::stoi(y);
        int antwoord = calc.Keer(intx, inty);
        std::cout << antwoord << std::endl;
    }
}
