#include <iostream>

int main() {

    int a,b;
    std::cin >> a;
    std::cin >> b;


    int maxCreatures = a*4;

    if (b % 4 == 2) {
        std::cout << a-1;
    }
    else if (b % 4 == 0) {
        std::cout << a;
    }
    else {
        std::cout << "Rong talning";
    }
    
    return 0;
}