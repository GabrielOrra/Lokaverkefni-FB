#include <iostream>

int main() {

    int a;
    std::cin >> a;

    int total = 0;

    for (int i = 1; i <= a; i++) {
        int input;
        std::cin >> input;
        total += input;
    }

    std::cout << total;

    return 0;
}