#include <iostream>

struct Pizza
{
    char company[20];
    double diameter;
    double weight;
};

int main(){
    Pizza* pizza_ptr = new Pizza;
    std::cout << "Enter name of the pizza company: ";
    std::cin.getline(pizza_ptr->company, 20);
    std::cout << "Enter diameter: ";
    std::cin >> pizza_ptr->diameter;
    std::cout << "Enter weight: ";
    std::cin >> pizza_ptr->weight;
    std::cout << "\nPizza\n Company: " << pizza_ptr->company << "\n Diameter: "
         << pizza_ptr->diameter << "\n Weight: " << pizza_ptr->weight << std::endl;
    delete pizza_ptr;
    return 0;
}