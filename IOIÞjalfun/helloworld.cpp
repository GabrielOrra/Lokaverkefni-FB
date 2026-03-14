#include <iostream>

using namespace std;

int main() {

    string name;
    int n;

    cin >> name >> n;

    for (int i = 0; i < n; i++) {

        cout << name << endl;
    }

    return 0;
}

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    
    std::cout << n-1 << '\n';
    
    return 0;
}

#include <iostream>
// inputmaxxing
int main() {
    
    int n;
    std::cin >> n;
    
    int biggestNum = 0;
    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        if (a > biggestNum) {
            biggestNum = a;
        }
    }
    if (n > biggestNum) {
        std::cout << n << '\n';
    } else {
        std::cout << biggestNum << '\n';
    }
}