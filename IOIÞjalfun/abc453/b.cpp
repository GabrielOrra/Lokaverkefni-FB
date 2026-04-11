#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;

int main() {

    int t, x, temp, saved;
    int itr = 0;
    string s;
    vector<pair<int,int>> v;

    cin >> t >> x;
    cin.ignore();
    getline(cin, s);

    stringstream ss(s);

    while(ss >> temp) {

        if (itr == 0) {
            saved = temp;
            v.emplace_back(itr, temp);
        } else {
            if (abs(temp-saved) >= x) {
                saved = temp;
                v.emplace_back(itr, temp);
            }
        }

        itr++;
    }

    for (pair<int,int> p : v) {
        cout << p.first << ' ' << p.second << '\n';
    }
    
    

    return 0;
}