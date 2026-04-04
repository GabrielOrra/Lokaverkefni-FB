#include <iostream>
#include <string>
using namespace std;

int topAndBottomLine(int w) {

    char hash = '#';
    
    string hashes(w, hash);
    cout << hashes << '\n';

    return 0;
}

int middles(int h, int w) {

    char dot = '.';
    string dots(w-2, dot);

    for (int i = 2; i < h; i++) {
        cout << "#" << dots << "#\n";
    }

    return 0;
}

int main() {

    int h,w;
    cin >> h >> w;

    topAndBottomLine(w);
    middles(h,w);
    topAndBottomLine(w);

    return 0;
}