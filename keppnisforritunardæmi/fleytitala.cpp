#include <iostream>
#include <cmath>

int main() {

    int a,b;
    std::cin >> a;
    std::cin >> b;

    float totalDistance = 2.0f * a * (1 - std::pow(0.5f, b + 1));

    std::cout << totalDistance;

    return 0;
}