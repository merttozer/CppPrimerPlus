#include "cow.hpp"
#include <cstring>
#include <iostream>

namespace mozer{

Cow::Cow() {
    hobby = new char[1];
    hobby[0] = '\0';
    name[0] = '\0';
    weight = 0;
}
Cow::~Cow(){
    delete[] hobby;
}
Cow::Cow(const char * nm, const char * ho, double wt) {
    hobby = new char[std::strlen(ho) + 1];
    std::strcpy(hobby, ho);
    std::strcpy(name, nm);
    weight = wt;
}
Cow::Cow(const Cow& c) {
    hobby = new char[std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);
    std::strcpy(name, c.name);
    weight = c.weight;
}
Cow::Cow(Cow&& c) {
    // Transfer ownership of dynamically allocated memory
    hobby = c.hobby;
    c.hobby = nullptr;  // Ensure the moved-from object doesn't delete the memory
    std::strcpy(name, c.name);
    weight = c.weight;
}
Cow& Cow::operator=(const Cow& c){
    if (this != &c) {  // Protect against self-assignment
        delete[] hobby;
        hobby = new char[std::strlen(c.hobby) + 1];
        std::strcpy(hobby, c.hobby);
        std::strcpy(name, c.name);
        weight = c.weight;
    }
    return *this;
}
Cow& Cow::operator=(Cow&& c){
    if (this != &c) {  // Protect against self-assignment
        // Release any existing resources
        delete[] hobby;
        hobby = c.hobby;
        std::strcpy(name, c.name);  // Assuming 'name' is a fixed-size char array
        weight = c.weight;
        c.hobby = nullptr;
    }
    return *this;
}
void Cow::ShowCow() const{
    std::cout << " Name: " << name << "\n Hobby: " << hobby
              << "\n Weight: " << weight << '\n';
}

}