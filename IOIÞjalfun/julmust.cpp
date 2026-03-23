#include <iostream>

int main() {

    int r;
    std::cin >> r;

    for (int i = 1; i < 86; i++) {

        int x;
        std::cin >> x;

        if (x > r * i) {
            std::cout << "less" << '\n' << std::flush;
        } else if (x < r * i) {
            std::cout << "more" << '\n' << std::flush;
        } else { 
            std::cout << "exact" << '\n' << std::flush;
            return 0;
        }
    }

    return 0;
}