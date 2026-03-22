#include <iostream>
#include <sstream>
#include <vector>

int main() {

    std::string line,word;
    std::vector<std::string> listi;

    std::getline(std::cin, line);

    std::stringstream stream(line);

    while (stream >> word) {
        listi.push_back(word);
    }

    std::cout << listi[listi.size()-1] << "slop" << '\n';

    return 0;
}