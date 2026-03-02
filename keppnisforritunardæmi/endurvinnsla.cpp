#include <iostream>

int main() {

    std::string cityName;
    float percentage;
    int trashAmount;
    float plastCount, nplastCount;

    std::cin >> cityName >> percentage >> trashAmount;

    std::cin.ignore();

    for (int i = 0; i < trashAmount; i++) {
        std::string input;
        std::getline(std::cin, input);
        if (input == "plast") {
            plastCount += 1;
        }
        else {
            nplastCount += 1;
        }
    }
    
    float plastP = nplastCount/(nplastCount+plastCount);
    
    //std::cout << plastP << "\n";

    if (plastP < percentage) {
        std::cout << "Jebb\n";
    }
    else {
        std::cout << "Neibb\n";
    }

    return 0;
}