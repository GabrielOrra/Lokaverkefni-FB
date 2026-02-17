#include <iostream>
#include <vector>
#include <string>

int main() {

    int n;
    std::cin >> n;
    std::cin.ignore();

    std::vector<std::string> strings(n);

    for (int i = 0; i < n; i++) {
        std::getline(std::cin, strings[i]);
    }

    int maxSize = 0;

    for (int i = 0; i < n; i++) {

        if (strings[i].size() > maxSize) {
            maxSize = strings[i].size();
        }
    }
    
    for (int i = 0; i < n; i++) {

        for (int y = 0; y < strings[y].size(); y++) {

            std::cout << strings[y][i] << "\n";
        }
    }

    return 0;
}