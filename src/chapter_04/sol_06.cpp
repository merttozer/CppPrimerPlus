#include <iostream>

struct CandyBar
{
    char brand[20];
    double weight;
    int cal;
};

int main(){
    CandyBar snack[3] {
        {"Munch", 2.3, 350},
        {"Twister", 3.2, 150},
        {"Snicker", 4.3, 550}
    };

    std::cout << "Snack 1\n Brand name: " << snack[0].brand
         << "\n Weight: " << snack[0].weight
         << "\n Calories: " << snack[0].cal << std::endl;
    std::cout << "Snack 2\n Brand name: " << snack[1].brand
         << "\n Weight: " << snack[1].weight
         << "\n Calories: " << snack[1].cal << std::endl;
    std::cout << "Snack 3\n Brand name: " << snack[2].brand
         << "\n Weight: " << snack[2].weight
         << "\n Calories: " << snack[2].cal << std::endl;

    return 0;
}