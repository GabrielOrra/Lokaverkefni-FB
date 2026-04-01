#include <vector>
#include <iostream>
#include <sstream>
#include <stack>
#include <map>

using namespace std;

int main() {

    stack<char> backpack;
    map<char,int> mp;
    mp.emplace('p',0);
    mp.emplace('g',0);
    mp.emplace('o',0);

    string s;
    getline(cin, s);

    stringstream ss(s);

    char temp;
    while(ss >> temp) {
        if (temp == 'p' || temp == 'o' || temp == 'g' || temp == '.') {
            backpack.push(temp);
            mp[temp]++;
        } else {
            while (backpack.top() != temp) {
                if (backpack.empty()) {
                    cout << "Neibb" << '\n';
                    return 0;
                }
                backpack.pop();
            }
            backpack.pop();
            mp[temp]--;
        }
    }
    
    for (pair<char,int> x : mp) {
        cout << x.second << '\n';
    }
    //for (char x : backpack) {
    //    cout << x << '\n';
    //}


    return 0;
}