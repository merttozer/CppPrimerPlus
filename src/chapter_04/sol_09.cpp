#include <iostream>
#include <cstring> // For strcpy and other string manipulation functions

struct CandyBar
{
    char brand[20];
    double weight;
    int cal;
};

int main(){
    CandyBar* snacks = new CandyBar[3];
    // Initialize the first CandyBar
    strcpy(snacks[0].brand, "Mocha Munch");
    snacks[0].weight = 2.3;
    snacks[0].cal = 350;

    // Initialize the second CandyBar
    strcpy(snacks[1].brand, "Berry Bites");
    snacks[1].weight = 1.5;
    snacks[1].cal = 250;

    // Initialize the third CandyBar
    strcpy(snacks[2].brand, "Caramel Chews");
    snacks[2].weight = 2.0;
    snacks[2].cal = 300;

    std::cout << "Snack 1\n Brand name: " << snacks[0].brand
         << "\n Weight: " << snacks[0].weight
         << "\n Calories: " << snacks[0].cal << std::endl;
    std::cout << "Snack 2\n Brand name: " << snacks[1].brand
         << "\n Weight: " << snacks[1].weight
         << "\n Calories: " << snacks[1].cal << std::endl;
    std::cout << "Snack 3\n Brand name: " << snacks[2].brand
         << "\n Weight: " << snacks[2].weight
         << "\n Calories: " << snacks[2].cal << std::endl;

    return 0;
}