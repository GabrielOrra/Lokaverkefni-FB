#include <iostream>

int main() {

    int n;
    int total = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int breyta;
        std::cin >> breyta;
        total += breyta;
    }

    std::cout << total << '\n';

    return 0;
}