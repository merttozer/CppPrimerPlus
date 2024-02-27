#include "bank.hpp"
#include <iostream>

namespace mozer{

Bank::Bank(const std::string& n, const std::string& a, double b) 
    : name(n), acc_number(a), balance(b) {
    if(b < 0)
    {
        std::cout << "Number of ballance can't be negative; balance set to 0.\n";
        balance = .0;
    }
    else
        balance = b;
    }

void Bank::display() const {
    std::cout << name << ", " << acc_number << ", " << balance << std::endl;
}

void Bank::deposite(double amount){
    if(amount < 0)
        std::cout << "Number of deposit can't be negative. "
                  << "Transaction is aborted.\n";
    else
        balance += amount;
}

void Bank::withdraw(double amount){
    if(amount < 0)
        std::cout << "Number of withdraw can't be negative. "
                  << "Transaction is aborted.\n";
    else if(amount > balance)
        std::cout << "You can't withdraw more than you have! "
                  << "Transaction is aborted.\n";
    else
        balance -= amount;
}

}