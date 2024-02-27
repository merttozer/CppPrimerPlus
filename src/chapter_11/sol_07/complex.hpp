#ifndef COMPLEX_HPP_
#define COMPLEX_HPP_
#include <iostream>

namespace mozer
{

class Complex{
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0);
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator~() const;

    friend Complex operator*(double x, const Complex& other);
    friend std::ostream& operator<<(std::ostream& out, const Complex& obj);
    friend std::istream& operator>>(std::istream& out, Complex& obj);
};

} // namespace mozer
#endif // COMPLEX_HPP_
