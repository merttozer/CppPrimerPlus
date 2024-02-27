#include "golf.hpp"
using namespace mozer;

const int SIZE = 5;
int main(void)
{
    Golf ann {"Ann Birdfree", 24};
    ann.showgolf();
    ann.setHandicap(30);
    ann.showgolf();
    Golf arr[SIZE];
    int player = 0;
    while(player < SIZE && arr[player].setgolf())
        player++;
    for(int i = 0; i < player; i++)
        arr[i].showgolf();
    return 0;
}
