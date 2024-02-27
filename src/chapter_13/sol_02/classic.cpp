#include "classic.hpp"
#include <cstring>
#include <iostream>

Cd::Cd(const char *s1, const char *s2, int n, double x) {
    performers = new char[std::strlen(s1) + 1];
    label = new char[std::strlen(s2) + 1];
    std::strcpy(performers, s1);
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd &d) {
    performers = new char[std::strlen(d.performers) + 1];
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}
Cd::Cd(){
    performers = nullptr;
    label = nullptr;
    selections = 0;
    playtime = 0;
}
Cd::~Cd(){
    delete[] performers;
    delete[] label;
}
void Cd::Report() const{
    std::cout << performers << '\n' << label << '\n'
              << selections << '\n' << playtime << '\n';
}
Cd & Cd::operator=(const Cd & d)
{
    if(this == &d)
        return *this;
    delete [] performers;
    delete [] label;
    performers = new char[std::strlen(d.performers) + 1];
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

// Classic methods
Classic::Classic(const char *s1, const char *s2, int n, double x, const char *pw)
    : Cd(s1, s2, n, x)
{
    primaryWork = new char[std::strlen(pw) + 1];
    std::strcpy(primaryWork, pw);
}
Classic::Classic(const Classic & d) : Cd(d)
{
    primaryWork = new char[std::strlen(d.primaryWork) + 1];
    std::strcpy(primaryWork, d.primaryWork);
}
Classic::Classic() : Cd()
{
    primaryWork = NULL;
}
Classic::~Classic(){
    delete [] primaryWork;
}
void Classic::Report() const
{
    std::cout << primaryWork << '\n';
    Cd::Report();
}
Classic & Classic::operator=(const Classic & d)
{
    if(this == &d)
        return *this;
    delete [] primaryWork;
    Cd::operator=(d);
    primaryWork = new char[std::strlen(d.primaryWork) + 1];
    std::strcpy(primaryWork, d.primaryWork);
    return *this;
}