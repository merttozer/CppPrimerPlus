#include "list.hpp"
using namespace mozer;

void sqr(double & y){ y *= y; }
int main(void)
{
    List<double> lst;
    double tmp;
    std::cout << "Enter a number (q to quit): ";
    while(std::cin >> tmp)
    {
        lst.add(tmp);
        if(lst.isfull()) break;
        std::cout << "Enter a number (q to quit): ";
    }
    lst.show();
    lst.visit(sqr);
    lst.show();
    return 0;
}
