#include <iostream>
#include <string>

int topAndBottomLine(int input) {

    char dash = '-';
    if (input == 0) {
        std::cout << "++\n";
    }
    else {
        std::string dashes(input, dash);
        std::cout << "+" << dashes << "+\n";
    }

    return 0;
}

int middles(int input) {

    char space = ' ';
    std::string spaces(input, space);
    if (input == 0) {}
    else {
        for (int i = 0; i < input; i++) {
            std::cout << "|" << spaces << "|\n";
        }
        
    }

    return 0;
}

int main() {

    int input;
    std::cin >> input;

    topAndBottomLine(input);
    middles(input);
    topAndBottomLine(input);

    return 0;
}