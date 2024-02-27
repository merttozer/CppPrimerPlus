#ifndef STACK_HPP_
#define STACK_HPP_

#include <cstring> // For std::strncpy

namespace mozer {

class Stack {
public: // Move Customer to public section
    struct Customer {
        char fullname[35];
        double payment;

        // Constructor for initializing a Customer
        Customer(const char* name = "", double pay = 0.0) : payment(pay) {
            std::strncpy(fullname, name, sizeof(fullname) - 1);
            fullname[sizeof(fullname) - 1] = '\0'; // Ensure null termination
        }
    };

private:
    static const int MAX = 10; // Use static const for compile-time constant
    Customer items[MAX]; // No need for {} since we have a constructor in Customer
    int top;

public:
    Stack() : top(0) {} // Use member initializer list

    bool isempty() const;
    bool isfull() const;
    bool push(const Customer& item);
    bool pop(Customer& item);
};

} // namespace mozer

#endif // STACK_HPP_
