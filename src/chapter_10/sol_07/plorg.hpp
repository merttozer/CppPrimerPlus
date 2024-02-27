#ifndef PLORG_HPP_
#define PLORG_HPP_

namespace mozer {

class Plorg
{
private:
    static const int MAX = 19;
    char name[MAX];
    int index;
public:
    Plorg(const char *n = "Plorga", int i = 50);
    void show() const;
    void changeCI(int i);
};

} // namespace mozer

#endif // PLORG_HPP_
