#include "bank.hpp"
using namespace mozer;

int main(void)
{
    Bank test {"Mert", "test"};
    test.display();
    test.deposite(1000);
    test.display();
    test.withdraw(300);
    test.display();
    return 0;
}
