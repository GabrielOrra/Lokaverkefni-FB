#include <iostream>

int main() {

    int n;

    std::cin >> n; 

    char dash = '-';
    std::string dashes(n, dash);

    char space = ' ';
    std::string spaces(n, space);


    std::cout << '+' << dashes << '+' << '\n';
    for (int i = 0; i < n; i++) {
        std::cout << '|' << spaces << '|' << '\n';
    }
    std::cout << '+' << dashes << '+' << '\n';

    return 0;
}