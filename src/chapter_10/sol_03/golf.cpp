#include <iostream>
#include <cstring> // For std::strcpy
#include "golf.hpp"

namespace mozer{

Golf::Golf(const char *name, int hc)
{
    strncpy(fullname, name, len-1);
    fullname[len-1] = '\0';
    handicap = hc;
}
int Golf::setgolf()
{
    char str[len];
    int hand;
    std::cout << "Enter full name: ";
    std::cin.get(str, len);
    if(str[0] == '\0')
    {
        std::cin.clear();
        return 0;
    }
    while(std::cin.get() != '\n')
        continue;
    std::cout << "Enter handicap: ";
    (std::cin >> hand).get();
    Golf tmp {str, hand};
    *this = tmp;
    return 1;
}
void Golf::setHandicap(int hc)
{
    handicap = hc;
}
void Golf::showgolf()
{
    std::cout << "Name: " << fullname
              << "\nhandicap: " << handicap << std::endl;
}

}