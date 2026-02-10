#include <iostream>

int main() {

    int a,b;

    std::cin >> a;
    std::cin >> b;

    if (b>a) {
        std::cout << "Dufur passa";
    }
    else if (a>b) {
        std::cout << "Dufur passa ekki";
    }
    else {
        std::cout << "Dufur passa fullkomlega";
    }

    return 0;
}