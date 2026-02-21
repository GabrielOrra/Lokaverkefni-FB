#include <iostream>

int main() {

    int n;
    std::cin >> n;

    std::string line1;
    std::string line2;

    std::cin >> line1;
    std::cin >> line2;
    
    for (int i = 0; i < n; i++) {

        if (line1[i] == line2[i]) {
            line1[i] = '0';
        }
        else {
            line1[i] = '1';
        }
    }

    std::cout << line1 << "\n";

    return 0;
}