#ifndef LIST_HPP_
#define LIST_HPP_

#include <iostream>

namespace mozer {

template<typename T>
class List
{
    private:
        static const int MAX = 10;
        T items[MAX]{};
        int top;
    public:
        List() : top(0) {}
        bool isempty() const {
            return top == 0;
        }
        bool isfull() const
        {
            return top == MAX;
        }
        bool add(const T& item) {
            if (isfull()) {
                return false;
            }
            items[top++] = item; // Use the Customer copy assignment
            return true;
        }
        void show() const
        {
            if(isempty())
                std::cout << "List is empty.\n";
            else
                for(int i = 0; i < top; i++)
                    std::cout << "Item #" << i + 1 << ": " << items[i] << "\n";
        }
        void visit(void (*pf)(T &))
        {
            for(int i = 0; i < top; i++)
                pf(items[i]);
        }
};

} // namespace mozer

#endif // LIST_HPP_
