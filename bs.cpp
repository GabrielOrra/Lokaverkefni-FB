#include <iostream>
#include <random>


int main() {
    std::cout << "Hello World\n";    // "\n" = line break

    std::random_device rd;   // Seed source
    std::mt19937 gen(rd());  // Mersenne twister generator
    std::uniform_int_distribution<> dist(1, 2);    // Defining range

    int x = dist(gen);  // Defining the random number
    
    if (x == 1) {
        std::cout << "Lets generate a random number and check whether its even or not\n";

        std::random_device rdm;  
        std::mt19937 gen(rdm());  
        std::uniform_int_distribution<> dist(1, 100);  

        int y = dist(gen);

        if (y % 2 == 0) {  // Checking whether number is even / 0 leftover when divided by 2
            std::cout << y << ": The number is even";
        }
        else if (y % 2 == 1) {  // 1 leftover when divided by 2
            std::cout << y << ": The number is odd";
        }
    }

    else if (x == 2) {
        std::cout << "Lets input a number and check if the number is a perfect square\n";

        int y;
        std::cin >> y;
        
        if (y % (int)sqrt(y) == 0) {    // Checking if the number is a perfect square
            std::cout << y << ": The number is a perfect square";
        }
        else {
            std::cout << y << ": The number is not a perfect square";
        }
    }

    return 0;
}