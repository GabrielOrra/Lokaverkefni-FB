#include <iostream>
#include <set>
#include <map>
using namespace std;

int main() {

    int n;
    map<string, multiset<int>> mp;
    set<int> numbers;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        int x;
        cin >> s >> x;
        numbers.emplace(x);
        mp[s].emplace(x);
    }

    for (pair<string, multiset<int>> x : mp) {
        int highestCount = 0;
        for (int i : numbers) {
            int counter = x.second.count(i);
            if (counter > highestCount) {
                highestCount = i;
            }
        }
        cout << x.first << ' ' << highestCount << '\n';
    }



    return 0;
}