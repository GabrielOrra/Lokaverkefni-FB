#include <iostream>
#include <sstream>
#include <stack>
#include <map>
#include <cctype>

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
            //cout << backpack.top() << '\n';
        } else {
            char lowercase = (char)tolower(temp);

            if (mp[lowercase] == 0) {
                cout << "Neibb" << '\n';
                return 0;
            }

            if (!backpack.empty()) {

                while (backpack.top() != lowercase) {

                    if (backpack.empty()) {

                        cout << "Neibb" << '\n';
                        return 0;
                    }

                    if (backpack.top() == '.') {

                        backpack.pop();
                    } else {

                        mp[backpack.top()]--;
                        backpack.pop();
                    }
                }
                backpack.pop();
                mp[lowercase]--;
            } else {

                cout << "Neibb" << '\n';
                return 0;
            }
        }
    }

    cout << mp['p'] << '\n';
    cout << mp['g'] << '\n';
    cout << mp['o'] << '\n';

    return 0;
}