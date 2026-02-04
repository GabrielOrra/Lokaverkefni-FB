#include <iostream>

int main() {

    std::string a;
    std::cin >> a;

    for (int i = 1; i < a.length() + 1;) {
        if (a[i] == a[i+1]) {
            a.erase(i+1, 1);
        }
        else {
            i++;
        }
    }
    std::cout << a;
    return 0;
}