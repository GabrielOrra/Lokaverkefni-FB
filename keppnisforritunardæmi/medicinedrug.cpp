#include <iostream>

int main() {

    int a, b, c;
    std::cin >> a >> b >> c;

    int amountNeeded = a*b;
    int answer = 0;

    while (answer < amountNeeded) {
        answer += c;
    }

    std::cout << answer / c;

    return 0;
}

