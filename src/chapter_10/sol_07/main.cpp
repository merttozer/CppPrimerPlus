#include "plorg.hpp"
using namespace mozer;

int main(void)
{
    Plorg pl0;
    pl0.show();
    Plorg pl("Avatar", 37);
    pl.show();
    pl.changeCI(77);
    pl.show();
    return 0;
}
