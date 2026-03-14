#include <iostream>
#include <iomanip>

int main() {

    double n;
    double pi = 3.141592653589793; 

    std::cin >> n;
    double radius = n/2;

    std::cout << std::fixed << std::setprecision(15) << (radius*radius)*pi;
    
    return 0;
}