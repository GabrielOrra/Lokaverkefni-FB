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

    if (n > list[n-1]) {
        std::cout << n << "\n";
    }
    else {
        std::cout << list[n-1] << "\n";
    }
    
    return 0;
}