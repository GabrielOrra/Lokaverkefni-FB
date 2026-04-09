#include <iostream>

using namespace std;

bool dfs(int at, int m) {
    if (at == m) {
        return true;
    }

    if (at % 3 == 0) {
        return dfs(at / 3, m) | dfs(2 * at / 3, m);
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        bool ret = dfs(n, m);

        cout << (ret ? "YES" : "NO") << '\n';
    }
}