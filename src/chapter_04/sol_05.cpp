#include <iostream>

struct CandyBar
{
    char brand[20];
    double weight;
    int cal;
};

int main(){
    CandyBar snack {"Mocha Munch", 2.3, 350};
    std::cout << "Struct snack\n Brand name: " << snack.brand << "\n Weight: "
              << snack.weight << "\n Calories: " << snack.cal << std::endl;
    return 0;
}