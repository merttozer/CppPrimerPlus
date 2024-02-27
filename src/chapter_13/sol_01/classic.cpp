#include "classic.hpp"
#include <cstring>
#include <iostream>

Cd::Cd(const char *s1, const char *s2, int n, double x) {
    strncpy(performers, s1, 49);
    performers[49] = '\0'; // Ensure null-termination
    strncpy(label, s2, 19);
    label[19] = '\0'; // Ensure null-termination
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd &d) {
    strncpy(performers, d.performers, 49);
    performers[49] = '\0'; // Ensure null-termination
    strncpy(label, d.label, 19);
    label[19] = '\0'; // Ensure null-termination
    selections = d.selections;
    playtime = d.playtime;
}
Cd::Cd(){
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0;
}
Cd::~Cd(){}
void Cd::Report() const{
    std::cout << performers << '\n' << label << '\n'
              << selections << '\n' << playtime << '\n';
}
Cd & Cd::operator=(const Cd & d){
    if (this == &d) // Self-assignment check
        return *this;
    strncpy(performers, d.performers, 49); // Copy at most 49 characters
    performers[49] = '\0'; // Explicitly set the last character to null terminator
    strncpy(label, d.label, 19); // Copy at most 19 characters
    label[19] = '\0'; // Explicitly set the last character to null terminator
    selections = d.selections;
    playtime = d.playtime;
    return *this; // Return this object
}

// Constructor with initialization for the new member
Classic::Classic(const char *s1, const char *s2, int n, double x, const char *pw) : Cd(s1, s2, n, x) {
    strncpy(primaryWork, pw, 99);
    primaryWork[99] = '\0'; // Ensure null-termination
}

// Copy constructor
Classic::Classic(const Classic &d) : Cd(d) { // Invoke base class copy constructor
    strncpy(primaryWork, d.primaryWork, 99);
    primaryWork[99] = '\0'; // Ensure null-termination
}

// Default constructor
Classic::Classic() : Cd() {
    primaryWork[0] = '\0';
}

// Override Report function to include primary work information
void Classic::Report() const {
    Cd::Report(); // Call base class Report
    std::cout << "Primary Work: " << primaryWork << std::endl;
}

// Assignment operator
Classic& Classic::operator=(const Classic &d) {
    if (this == &d) // Self-assignment check
        return *this;
    Cd::operator=(d); // Call base class assignment operator
    strncpy(primaryWork, d.primaryWork, 99);
    primaryWork[99] = '\0'; // Ensure null-termination
    return *this; // Return this object
}