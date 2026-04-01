#include <iostream>
using namespace std;

int main() {

    string s;
    std::cin >> s;

    if (s.size() % 5 == 0) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }

    return 0;
}