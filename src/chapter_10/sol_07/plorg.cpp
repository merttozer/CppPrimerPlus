#include <cstring> // For std::strcpy
#include <iostream>
#include "plorg.hpp"

namespace mozer {

Plorg::Plorg(const char *n, int i) {
    strncpy(name, n, MAX-1);
    name[MAX-1] = '\0';
    index = i;
}
void Plorg::show() const {
    std::cout << "name: " << name << "index: " << index << std::endl;
}
void Plorg::changeCI(int i){
    index = i;
}

}