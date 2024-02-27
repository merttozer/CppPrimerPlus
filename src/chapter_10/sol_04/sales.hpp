#ifndef SALES_HPP_
#define SALES_HPP_

namespace SALES
{

class Sales
{
private:
    static const int QUARTERS = 4;
    double sales[QUARTERS];
    double average;
    double max;
    double min;
public:
    Sales();
    Sales(const double ar[], int n);
    void setSales();
    void showSales();
};

}  // namespace SALES

#endif  //SALES_HPP_