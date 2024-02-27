#include "stack.hpp"

namespace mozer
{

bool Stack::isempty() const
{
    return top == 0;
}
bool Stack::isfull() const
{
    return top == MAX;
}
// Implement push and pop outside the class definition for better readability
bool Stack::push(const Customer& item) {
    if (isfull()) {
        return false;
    }
    items[top++] = item; // Use the Customer copy assignment
    return true;
}
bool Stack::pop(Customer& item) {
    if (isempty()) {
        return false;
    }
    item = items[--top]; // Use the Customer copy assignment
    return true;
}

}