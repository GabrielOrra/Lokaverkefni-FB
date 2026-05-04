#include <iostream>
#include <vector>
using namespace std;

int main() {

    int count = 0;
    int idx = 0; 
    string s;
    cin >> s;

    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == s[i+1]) {
            count += (i - idx) * (i - idx) + 1 / 2;
            idx = i+1;
        }
    }
    
    count += (s.size() - idx) * (s.size() - idx) + 1 / 2;
  
    cout << count << '\n';

    return 0;
}