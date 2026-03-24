#include <iostream>
#include <map>

using namespace std;

int main() {

    // map = dict

    map<string, int> a;

    a.emplace("abc", 10);

    cout << a["abc"] << '\n';
    a["a"] = 10;
    a["b"] = 5;
    a["c"] = 0;

    for (pair<string, int> i : a) {
        cout << i.first << ' ' << i.second << '\n';
    }

    

    return 0;
}