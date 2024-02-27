#ifndef GOLF_HPP_
#define GOLF_HPP_

#include <string>

namespace mozer{

class Golf{
private:
    static const int len = 40;
    char fullname[len];
    int handicap;
public:
    Golf(const char *name = "", int hc = 0);
    int setgolf();
    void setHandicap(int hc);
    void showgolf();
};

}

#endif  //GOLF_HPP_