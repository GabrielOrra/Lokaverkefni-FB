#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

int main() {

    std::string a,b;
    std::getline(std::cin, a);
    std::getline(std::cin, b);
    
    int n = a.find('|');
    int m = b.find('|');

    std::string one = a.substr(0, n); 
    std::string two = a.substr(n + 1); 
    std::string three = b.substr(0, m); 
    std::string four = b.substr(m + 1); 

    one.erase(std::remove_if(one.begin(), one.end(), ::isspace), one.end());
    two.erase(std::remove_if(two.begin(), two.end(), ::isspace), two.end());
    three.erase(std::remove_if(three.begin(), three.end(), ::isspace), three.end());
    four.erase(std::remove_if(four.begin(), four.end(), ::isspace), four.end());

    std::cout << one << three << ' ' << two << four << '\n';

    return 0;
}