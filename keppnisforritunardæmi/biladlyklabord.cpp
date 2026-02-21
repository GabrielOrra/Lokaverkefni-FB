#include <iostream>
#include <string>
#include <algorithm>

int main() {

    std::string string; 
    std::getline(std::cin, string);

    for (int i = 0; i < string.length(); i++) {

        if (string[i] == string[i+1]) {
            string.erase(i, 1);
            i--;
        }
    }

    std::cout << string << "\n";

    return 0;
}