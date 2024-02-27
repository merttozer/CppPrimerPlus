#include <iostream>
#include <cctype>

int main()
{
    std::cout << "Enter text for analysis, and type @ to terminate input.\n";
    char ch;
    std::cin.get(ch);
    while(ch != '@')
    {
        if(isdigit(ch))
        {
            std::cin.get(ch);
            continue;
        }
        else if(islower(ch))
                ch = toupper(ch);
        else if(isupper(ch))
                ch = tolower(ch);
        std::cout << ch;
        std::cin.get(ch);
    }
    std::cout << std::endl;
    return 0;
}
