#include <iostream>
#include <string>

int main(){
    std::cout << "Enter number of rows: ";
    int row;
    std::cin >> row;
    for (int i = 1; i <= row; i++)
    {		
        for (int a = i; a < row; a++)
            std::cout << '.';
        for (int b = i; b !=0; b--)
            std::cout << '*';
        std::cout << "\n";
    }
    return 0;
}