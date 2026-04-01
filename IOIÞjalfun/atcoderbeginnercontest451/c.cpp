#include <iostream>
using namespace std;
#include <map>


int main() {

    int q;
    cin >> q;
    map<int, int> garden;

    // O(q)
    for (int i = 0; i < q; i++) {

        int c, h;
        cin >> c >> h;
        if (c == 1 && !garden.contains(h)) {
            garden.emplace(h, 1);
        } else if ( c == 1 && garden.contains(h)) {
            garden[h]++; 
        } else if (c == 2) {
            garden.erase(garden.begin(), garden.upper_bound(h));
        }
        
        int total = 0;
        for (pair<int, int> x : garden) {
            total += x.second;
        }
        cout << total << '\n';
    }

    return 0;
}

#include <iostream>
using namespace std;
#include <set>

int main() {

    int q;
    cin >> q;
    set<int> garden;

    for (int i = 0; i < q; i++) {

        int c, h;
        cin >> c >> h;
        if (c == 1) {
            garden.emplace(h);
        } else if (c == 2) {
            garden.erase(garden.begin(), garden.upper_bound(h));
        }
        cout << garden.size() << '\n';
    }

    return 0;
}