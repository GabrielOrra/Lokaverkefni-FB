#include <iostream>
#include <map>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    map<int, int> term1;
    map<int, int> term2;

    for (int i = 0; i < m; i++) {
        term1.emplace(i, 0);
        term2.emplace(i, 0);
    }

    for (int i = 0; i < n; i++) {
        int a,b;
        std::cin >> a >> b;
        term1[a] += 1;
        term2[b] += 1;
    }

    for (int i = 1; i < m+1; i++) {
        cout << term2[i] - term1[i] << '\n';
    }


    return 0;
}