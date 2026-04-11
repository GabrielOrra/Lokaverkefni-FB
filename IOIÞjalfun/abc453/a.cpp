#include <iostream>
using namespace std;

int main() {

    string s;
    int n;

    cin >> n >> s;

    if (s[0] == 'o') {
        while (s[0] == 'o') {
            s.erase(s.begin());
        }
    }

    cout << s << '\n';

    return 0;
}