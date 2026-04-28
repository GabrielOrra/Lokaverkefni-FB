#include <iostream>
#include <set>
#include <sstream>
using namespace std;

int main() {

    int n, m;
    string s;
    multiset<int> v;
    cin >> n >> m;
    cin.ignore();
    getline(cin, s);

    int temp;
    stringstream ss(s);

    while (ss >> temp) {
        v.emplace(temp);
    }

    bool qone = true; 
    for (int i : v) {
        if (v.count(i) > 1) {
            qone = false;
            break;
        }
    }
    if (qone == false) {
        cout << "No" << '\n';
    } else {
        cout << "Yes" << '\n';
    }

    bool qtwo = true;
    for (int i = 1; i <= m; i++) {
        if (v.count(i) == 0) {
            qtwo = false;
            break;
        }
    }
    if (qtwo == false) {
        cout << "No" << '\n';
    } else {
        cout << "Yes" << '\n';
    }



    return 0;
}