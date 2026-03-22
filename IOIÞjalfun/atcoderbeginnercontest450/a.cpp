#include <iostream>

int main() {

    int n;

    std::cin >> n;

    for (int i = n; 0 < i-1; i--) {
        std::cout << i << ",";
    }

    std::cout << '1' << '\n';

    return 0;
}