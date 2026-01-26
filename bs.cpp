#include <iostream>
#include <random>
#include <string>


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
            std::cout << y << ": The number is even\n";
        }
        else if (y % 2 == 1) {  // 1 leftover when divided by 2
            std::cout << y << ": The number is odd\n";
        }
    }

    else if (x == 2) {
        std::cout << "Lets input a number and check if the number is a perfect square\n";

        int y;
        std::cin >> y;
        
        if (y % (int)sqrt(y) == 0) {    // Checking if the number is a perfect square
            std::cout << y << ": The number is a perfect square\n";
        }
        else {
            std::cout << y << ": The number is not a perfect square\n";
        }
    }
    
    
    
    bool condition = true;
    // std::cout << condition << "\n"; / More troubleshooting
    while (condition) {

        std::string val;    // Búa til string breytu
        std::cout << "Hvað finnst þér betra, For eða While?: ";
        std::cin >> val;


    
        long long factorial = 1;    // long long er riiiiiisa stór integer
    
        if (val == "For" || val == "for") {     // || = "eða"
            
            int num;
            std::cout << "Sláðu inn tölu: "; 
            std::cin >> num;  // inputta tölu í breytuna

            for (int i = 1; i < num+1; i++) {     // "For i in range(1, num)"
                factorial *= i;     // Margfalda með factorial breytunni með i
                // std::cout << factorial << "\n"; / troubleshooting / we good now
            }
            std::cout << num << " Hrópamerkt er " << factorial << "\n";
            condition = false;
            // std::cout << condition << "\n"; / troubleshooting
        }
        else if (val == "While" || val == "while") {

            int num;
            std::cout << "Sláðu inn tölu: "; 
            std::cin >> num;  // inputta tölu í breytuna

            int i = 1;
            while (i < num+1) {
                factorial *= i;
                i++;
            }
            std::cout << num << " Hrópamerkt er " << factorial << "\n";
            condition = false;
            // std::cout << condition << "\n"; / troubleshooting
        }
        else {
            std::cout << "Try again lil bro \n";
        }
        
    }
    
    return 0;
}
