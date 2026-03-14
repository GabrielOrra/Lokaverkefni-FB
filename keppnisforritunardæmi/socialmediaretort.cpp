#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main() {
    
    std::vector<std::string> listi;
    
    std::string input;
    std::getline(std::cin, input);
    
    std::stringstream stream(input);
    
    std::string ord;
    while (stream >> ord) {
        listi.push_back(ord);
    }
    
    std::cout << listi[listi.size()-1] << "slop" << '\n';
    
    
    return 0;
}