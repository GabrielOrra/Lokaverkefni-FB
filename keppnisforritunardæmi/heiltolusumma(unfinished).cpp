#include <iostream>

int main() {
    long long n;
    std::cin >> n;
    long long result;

    if (n >= 1) {
        result = n * (n + 1) / 2;
    }
    else if (n == -1) {
        result = 0;
    }
    else {
        result = 1 + n * (n + 1) / 2;
    }
    
    std::cout << result;

    return 0;
}
