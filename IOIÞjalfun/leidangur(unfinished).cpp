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
        if (temp == 'p' || temp == 'o' || temp == 'g') {

            backpack.push(temp);
            mp[temp]++;
            //cout << backpack.top() << '\n';
        } else if (temp == '.') {

            backpack.push(temp);
            //cout << backpack.top() << '\n';
        } else {
            if (backpack.empty()) {

                char lowercase = (char)tolower(temp);
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
                //cout << backpack.top() << '\n';
                }
                backpack.pop();
                mp[temp]--;
            } else {
                cout << "Neibb" << '\n';
                return 0;
            }
            
        }
    }
    
    for (pair<char,int> x : mp) {
        cout << x.second << '\n';
    }


    return 0;
}