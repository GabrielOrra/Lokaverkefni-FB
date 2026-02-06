#include <iostream>

int main() {

    int a = 1;

    std::string b, c;
    
    std::cin >> b;
    std::cin >> c;

    for (int i = 0; i < b.length(); i++) {

        if (b[i] != c[i]) {

            a++;
        }
    }

    std::cout << a;

    return 0;
}