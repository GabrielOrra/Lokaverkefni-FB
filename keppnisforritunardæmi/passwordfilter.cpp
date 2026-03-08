#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cctype>

int main() {

    std::string strengur;
    std::string ord;
    std::vector<std::string> ordListi;

    std::getline(std::cin, strengur);

    std::istringstream stream(strengur);
    
    while (stream >> ord) {
        ordListi.push_back(ord);
    }

    

    for (int i = 0; i < ordListi.size(); i++) {
        for (int y = 0; y < ordListi[i].size(); y++) {
            if (isdigit(ordListi[i][y])) {
                int ordSize = ordListi[i].size();
                ordListi[i] = std::string(ordSize, '*');
                break;
            }
        }
    }

    for (int i = 0; i < ordListi.size()-1; i++) {
        std::cout << ordListi[i] << ' ';
    }

    std::cout << ordListi[ordListi.size()-1];

    std::cout << "\n";
    return 0;
}