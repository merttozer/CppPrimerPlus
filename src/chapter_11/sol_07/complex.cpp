// vect_11_01.cpp --for sol-11-01.cpp

#include "complex.hpp"

namespace mozer
{

Complex::Complex(double r, double i) :real(r), imag(i) {}
Complex Complex::operator+(const Complex& other) const{
    return Complex(real + other.real, imag + other.imag);
}
Complex Complex::operator-(const Complex& other) const{
    return Complex(real - other.real, imag - other.imag);
}
Complex Complex::operator*(const Complex& other) const{
    return Complex(real*other.real-imag*other.imag, real*other.imag+other.real*imag);
}
Complex Complex::operator~() const{
    return Complex(real, -imag);
}
Complex operator*(double x, const Complex& other){
    return Complex(other.real*x, other.imag*x);
}
std::ostream& operator<<(std::ostream& out, const Complex& c){
    out << c.real;
    if (c.imag >= 0) out << "+";
    out << c.imag << "i";
    return out;  // Return std::ostream object to allow chaining
}
std::istream& operator>>(std::istream& in, Complex& c){
    std::cout << "Enter real part: ";
    in >> c.real;
    std::cout << "Enter imaginary part: ";
    in >> c.imag;
    return in;  // Return std::istream object to allow chaining
}

} // namespace VECTOR
