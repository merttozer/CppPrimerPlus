#ifndef PERSON_HPP_
#define PERSON_HPP_

#include <string>

namespace mozer{

class Person{
private:
    static const int LIMIT = 25;
    std::string lname; // Person’s last name
    char fname[LIMIT]; // Person’s first name
public:
    Person();
    Person(const std::string & ln, const char * fn = "Heyyou"); // #2
    void Show() const; // firstname lastname format
    void FormalShow() const; // lastname, firstname format
};

}

#endif  //PERSON_HPP_