#include <iostream>
using namespace std;

int main() {

    int m,d;
    cin >> m >> d;

    if (m == 1 && d == 7) {
        cout << "Yes" << '\n';
    } else if (m == 3 && d == 3) {
        cout << "Yes" << '\n';
    } else if (m == 5 && d == 5) {
        cout << "Yes" << '\n';
    } else if (m == 7 && d == 7) {
        cout << "Yes" << '\n';
    } else if (m == 9 && d == 9) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }

    return 0;
}