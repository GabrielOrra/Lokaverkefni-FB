#include <iostream>

int main () {

    std::string n;
    int a,b,c;
    getline(std::cin, n);
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if ((a-b) > 0 && c > 0) {
        std::cout << "VEIT EKKI";
    }
    else if ((a-b) < 0 && c > 0) {
        std::cout << "SITH";
    } 
    else {
        std::cout << "JEDI";
    }

    return 0;
}