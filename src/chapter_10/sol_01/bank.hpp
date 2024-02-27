#ifndef BANK_HPP_
#define BANK_HPP_

#include <string>

namespace mozer{

class Bank{
private:
    std::string name;
    std::string acc_number;
    double balance;
public:
    Bank(const std::string& n, const std::string& a, double b = 0.0);
    void display() const;
    void deposite(double amount);
    void withdraw(double amount);
};

}

#endif