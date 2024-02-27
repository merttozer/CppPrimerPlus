#include "person.hpp"
#include <iostream>
#include <cstring> // For std::strcpy

namespace mozer{

Person::Person() : lname("") {
    fname[0] = '\0'; // Initialize the first element of the array to the null character in the constructor body
}
// Remove the default argument here as it's already declared in the header
Person::Person(const std::string & ln, const char * fn) 
    : lname(ln) {
    std::strncpy(fname, fn, sizeof(fname) - 1); // Copy the string safely, ensuring not to overflow the buffer
    fname[sizeof(fname) - 1] = '\0'; // Ensure null-termination
}
void Person::Show() const {
    std::cout << fname << " " << lname << std::endl;
}
void Person::FormalShow() const {
    std::cout << lname << " " << fname << std::endl;
}

}