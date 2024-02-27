#include <iostream>
#include "move.hpp"

namespace mozer{

Move::Move(double a, double b) : x(a), y(b) {}

void Move::showmove() const {
    std::cout << "x: " << x << "\ny: " << y << std::endl;
} 

Move Move::add(const Move & m) const {
    return Move(x + m.x, y + m.y);
}

void Move::reset(double a, double b){ // resets x, y to a, b
    x = a;
    y = b;
}

}