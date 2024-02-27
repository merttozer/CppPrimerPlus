#include <iostream>
#include <vector>
#include <limits>

int main() {
    std::vector<double> donations;
    double donation;

    std::cout << "Enter up to 10 donation values (non-numeric input to stop): " << std::endl;

    // Read donations
    while (donations.size() < 10 && std::cin >> donation) {
        donations.push_back(donation);
    }

    // Clear the fail state caused by non-numeric input
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    if (!donations.empty()) {
        double sum = 0.0;

        // Calculate sum of donations
        for (double value : donations) {
            sum += value;
        }

        // Calculate average
        double average = sum / donations.size();

        // Count donations greater than average
        int count = 0;
        for (double value : donations) {
            if (value > average) {
                count++;
            }
        }

        std::cout << "Average donation: " << average << std::endl;
        std::cout << "Number of donations greater than the average: " << count << std::endl;
    } else {
        std::cout << "No valid donations were entered." << std::endl;
    }

    return 0;
}
