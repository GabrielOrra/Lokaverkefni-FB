#include <iostream>

int main() {

    int n;
    std::cin >> n;

    int arr[n];
    int arrSum[n+1];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int m = 0;
    for (int i = 0; i < n+1; i++) {
        arrSum[i] = m;
        m += arr[i];
    }

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
    for (int i = 0; i < n+1; i++) {
        std::cout << arrSum[i] << ' ';
    }
    std::cout << '\n';

    return 0;
}