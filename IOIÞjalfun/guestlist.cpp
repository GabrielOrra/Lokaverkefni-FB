#include <iostream>
#include <set>
using namespace std;

int main() {

    int n;
    cin >> n;

    set<string> nofn;

    for (int i = 0; i < n; i++) {
        char opr;
        string nafn;

        cin >> opr >> nafn;

        // O(log n)
        if (opr == '+') {
            nofn.emplace(nafn);
        } 

        // O(log n)
        else if (opr == '-') {
            nofn.erase(nafn);
        } 
        else if (opr == '?') {
            
            if (nofn.contains(nafn)) {
                cout << "Jebb" << '\n';
            } 
            
            else {
                cout << "Neibb" << '\n';
            }
        }
    }

    return 0;
}