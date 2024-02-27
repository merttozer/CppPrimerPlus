#include <iostream>

struct Pizza
{
    char company[20];
    double diameter;
    double weight;
};

int main(){
    Pizza pizza;
    std::cout << "Enter name of the pizza company: ";
    std::cin.getline(pizza.company, 20);
    std::cout << "Enter diameter: ";
    std::cin >> pizza.diameter;
    std::cout << "Enter weight: ";
    std::cin >> pizza.weight;
    std::cout << "\nPizza\n Company: " << pizza.company << "\n Diameter: "
         << pizza.diameter << "\n Weight: " << pizza.weight << std::endl;

    return 0;
}