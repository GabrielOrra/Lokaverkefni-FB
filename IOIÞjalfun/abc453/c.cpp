#include <iostream>
#include <sstream>
using namespace std;

int main() {

    int n;
    float position = 0.5;
    float counter = 0;
    float temp;
    string s;

    cin >> n;
    cin.ignore();
    getline(cin, s);
    stringstream ss(s);

    while(ss >> temp) {
        if (position > 0) {
            position -= temp;
            if (position < 0) counter++;
        } else {
            position += temp;
            if (position > 0) counter++;          
        }
    }

    cout << counter << '\n';

    return 0;
}