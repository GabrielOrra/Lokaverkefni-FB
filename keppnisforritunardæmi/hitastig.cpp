#include <iostream> 
#include <algorithm>
#include <vector>

int main() {

    long long n;
    std::cin >> n;
    std::vector<long long> list(n);

    for (long long i = 0; i < n; i++) {
        std::cin >> list[i];
    }

    std::sort(list.begin(), list.end());

    std::cout << list[n-1] << " " << list[0];


    return 0;
}
