#include <iostream>
#include <unordered_set>
#include <set>

using namespace std; 

int main() {

    unordered_set<int> unordered;
    set<int> ordered;

    for (int i = 0; i < 15; i++) {
        unordered.emplace(i);
        ordered.emplace(i);
    }

    for (int i : unordered) {
        cout << i << ' ';
    }
    cout << '\n';

    for (int i : ordered) {
        cout << i << ' ';
    }
    cout << '\n';

    return 0;
}