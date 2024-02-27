#ifndef MOVE_HPP_
#define MOVE_HPP_

namespace mozer {

class Move
{
private:
    double x;
    double y;
public:
    Move(double a = 0, double b = 0); // sets x, y to a, b
    void showmove() const; // shows current x, y values
    Move add(const Move & m) const;
    void reset(double a = 0, double b = 0); // resets x, y to a, b
};

} // namespace mozer

#endif // MOVE_HPP_
