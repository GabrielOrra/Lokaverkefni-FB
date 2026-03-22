#include <iostream>

int main() {

    int l = 1;
    int h = 1000;
    while (l <= h) {

        int m = (l+h) / 2;
        // int m = l + (h - l) / 2;
        std::cout << m << '\n' << std::flush; 

        std::string answer;
        std::cin >> answer;

        if (answer == "lower") {
            h = m - 1;
        } else if (answer == "higher") {
            l = m + 1;
        } else {
            break;
        }
    }
    return 0;
}