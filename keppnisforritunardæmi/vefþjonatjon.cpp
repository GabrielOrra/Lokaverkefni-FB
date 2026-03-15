#include <iostream>
#include <algorithm>

int main() {

    int row;
    int n = 0, m = 0, k = 0;
    std::cin >> row;

    for (int i = 0; i < row; i++) {
        char a,b,c;
        std::cin >> a >> b >> c;
        if (a == 'J') {
            n++;
        }
        if (b == 'J') {
            m++;
        }
        if (c == 'J') {
            k++;
        }
    }
    
    // std::cout << n << ' ' << m << ' ' << k << '\n';
    std::cout << std::min({n, m, k}) << "\n";

    return 0;
}