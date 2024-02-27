#ifndef COMPLEX_HPP_
#define COMPLEX_HPP_

namespace mozer{

class Cow {
private:
    char name[20];
    char * hobby;
    double weight;
public:
    Cow();
    ~Cow();
    Cow(const char * nm, const char * ho, double wt);
    Cow(const Cow& c);
    Cow(Cow&& c);
    Cow& operator=(const Cow& c);
    Cow& operator=(Cow&& c);
    void ShowCow() const;
};

}

#endif