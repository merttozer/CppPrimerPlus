#include "move.hpp"
using namespace mozer;

int main(void)
{
    Move test0(7, 14);
    Move test1(100.3, 34.7);
    test0.showmove();
    test1.showmove();
    Move test2 = test0.add(test1);
    test2.showmove();
    test2.reset();
    test2.showmove();
    return 0;
}
