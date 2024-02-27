#include <iostream>

const int strsize = 20;
const int SIZE = 3;
struct bop {
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};
int main()
{
    bop arrbop[SIZE]{
        {"Mike Macho", "Engineer", "MASS", 1},
        {"Lui Rhodes", "Programmer", "RISC", 2},
        {"Muer Laiter", "Hacker", "MIPS", 0}
    };
    std::cout << "Benevolent Order of Programmers Report\n"
            " a. display by name\t b. display by title\n"
            " c. display by bopname\t d. display by preference\n"
            " q. quit\n";
    std::cout << "Enter your choice: ";
    char ch;
    std::cin >> ch;
    while(ch !='q')
    {
        switch (ch)
        {
            case 'a': {
                    for(int i = 0; i < SIZE; i++)
                        std::cout << arrbop[i].fullname << std::endl;
                    break; }
            case 'b': {
                    for(int i = 0; i < SIZE; i++)
                        std::cout << arrbop[i].title << std::endl;
                    break; }
            case 'c': {
                    for(int i = 0; i < SIZE; i++)
                        std::cout << arrbop[i].bopname << std::endl;
                    break; }
            case 'd': {
                    for(int i = 0; i < SIZE; i++)
                        switch (arrbop[i].preference)
                        {
                            case 0: std::cout << arrbop[i].fullname << std::endl; break;
                            case 1: std::cout << arrbop[i].title << std::endl; break;
                            case 2: std::cout << arrbop[i].bopname << std::endl; break;
                        }
                    break; }
        }
        std::cout << "Next choice: ";
        std::cin >> ch;
    }
    std::cout << "Bye!" << std::endl;
    return 0;
}
