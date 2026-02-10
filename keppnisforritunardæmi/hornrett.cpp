#include <iostream>
#include <cmath>

int main() {

    long long a, b, c;
    std::cin >> a >> b >> c;

    if (c == sqrt((a*a) + (b*b))) {
        std::cout << (a*b)/2 << "\n";
    }
    else {
        std::cout << "-1\n";
    }

    return 0;
}