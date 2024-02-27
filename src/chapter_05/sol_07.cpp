#include <iostream>

struct Car{
   char make[20];
   int year;
};

int main(){
   int size;
   std::cout << "How many cars do you wish to catalog? ";
   (std::cin >> size).get();
   Car* cars = new Car[size];

   for(int i=0; i<size; i++){
      std::cout << "Car #" << i+1 << ":\n";
      std::cout << "Please enter the make: ";
      std::cin.getline(cars[i].make, 20);
      std::cout << "Please enter the year made: ";
      (std::cin >> cars[i].year).get();
   }
   std::cout << "Here is your collection:\n";
   for(int i=0; i<size; i++){
      std::cout << cars[i].make << " " << cars[i].year << std::endl;
   }

   return 0;
}