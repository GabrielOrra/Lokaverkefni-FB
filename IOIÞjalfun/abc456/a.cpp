#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    
    if (n > 2 && n < 19) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }
    return 0;
}