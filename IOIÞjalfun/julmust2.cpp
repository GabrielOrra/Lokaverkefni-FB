#include <iostream>

int main() {

    int l = 0;
    int h;
    std::cin >> h;
    for (int i = 1; i < 86; i++) {

        int m = (l+h) / 2;

        std::cout << m * i << '\n' << std::flush;

        std::string answer;
        std::cin >> answer;

        if (answer == "less") {
            h = m - 1;
        } else if (answer == "more") {
            l = m + 1;
        } else {
            return 0;
        }
    }
    return 0;
}