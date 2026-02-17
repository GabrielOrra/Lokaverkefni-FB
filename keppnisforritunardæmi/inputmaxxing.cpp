#include <iostream>
#include <algorithm>

int main () {

    int n;
    std::cin >> n;

    int list[n];

    for (int i = 0; i < n; i++) {
        std::cin >> list[i];
    }

    std::sort(list, list + n);

    std::cout << list[n-1];

    return 0;
}