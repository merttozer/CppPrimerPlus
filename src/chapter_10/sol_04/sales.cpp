#include "sales.hpp"
#include <iostream>

namespace SALES
{
    
Sales::Sales(){ max = min = average = 0; }

Sales::Sales(const double ar[], int n)
{
    double max, min, total = .0;
    for(int i = 0; i < QUARTERS; i++)
    {
        if(n > i) sales[i] = ar[i];
        else sales[i] = .0;
        total += sales[i];
    }
    max = min = sales[0];
    for(int i = 0; i < n && i < QUARTERS; i++)
    {
        if(max < sales[i]) max = sales[i];
        if(min > sales[i]) min = sales[i];
    }
    max = max;
    min = min;
    average = (n < QUARTERS) ? total/n : total/QUARTERS;
}
void Sales::setSales()
{
    double max, min, total = .0;
    for(int i = 0; i < QUARTERS; i++)
    {
        std::cout << "Enter sales #" << i+1 << ": ";
        std::cin >> sales[i];
        total += sales[i];
    }
    max = min = sales[0];
    for(int i = 0; i < QUARTERS; i++)
    {
        if(max < sales[i]) max = sales[i];
        if(min > sales[i]) min = sales[i];
    }
    average = total/QUARTERS;
    max = max;
    min = min;
}
void Sales::showSales()
{
    for(int i = 0; i < QUARTERS; i++)
        std::cout << "sales #" << i+1 << ": " << sales[i] << std::endl;
    std::cout << "average: " << average << "\n"
                << "max:     " << max << "\n"
                << "min:     " << min << std::endl;
}

}   // namespace SALES
