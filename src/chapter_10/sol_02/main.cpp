#include "person.hpp"
#include <iostream>

using namespace mozer;

int main(void)
{
    Person one;
    Person two("Mert");
    Person three("Dan", "Sam");
    one.Show();
    one.FormalShow();
    two.Show();
    two.FormalShow();
    three.Show();
    three.FormalShow();
    return 0;
}
