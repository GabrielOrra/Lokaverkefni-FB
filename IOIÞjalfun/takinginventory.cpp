#include <iostream>
#include <map>
using namespace std;

int main() {

    int n;
    map<string, int> inventory;

    cin >> n;

    // O(n log n)
    for (int i = 0; i < n; i++) {

        string s;
        int f;
        cin >> s >> f;

        inventory[s] += f;
    }

    for (pair<string, int> i : inventory) {
        int stacks = (i.second + 63) / 64;
        cout << i.first << ' ' << stacks << '\n';
    }

    return 0;
}