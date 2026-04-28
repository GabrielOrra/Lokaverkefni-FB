#include <iostream>
#include <vector>

using namespace std;

int main() {

    map<string, int> aldur;

    aldur["kalli"] = 10;
    aldur["brynjar"] = 15;
    aldur["jona"] = 20;

    for (int x = 0; x < 10; x++) {
        string s;
        cin >> s;

        if (aldur.contains(s)) {
            cout << aldur[s] << '\n';
        } else {
            cout << "Ekki til" << '\n';
        }

    }

    return 0;
}