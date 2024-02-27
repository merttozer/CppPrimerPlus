#include <iostream>
#include <array>
int main()
{
    std::array<float, 3> dash;
    std::cout << "Enter three times for the 40-meter dash\n 1: ";
    std::cin >> dash[0];
    std::cout << " 2: ";
    std::cin >> dash[1];
    std::cout << " 3: ";
    std::cin >> dash[2];
    std::cout << "First dash: " << dash[0] << "; second: " << dash[1] << "; third: "
         << dash[2] << "; average time: "<< (dash[0]+dash[1]+dash[2])/3 << std::endl;
    return 0;
}
