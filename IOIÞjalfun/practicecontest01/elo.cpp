#include <iostream>
#include <map>
#include <vector>

using namespace std;


int dfs(vector<int> l, vector<int> r, vector<int> a, int x, int n) {
    int best = x;
    for (int i = 0; i < n; i++) {
        if (x >= l[i] && x <= r[i]) {
            best = max(best, dfs(l,r,a,x += a[i],n));
        }
    }
    return best;
}

int main() {

    int n, x;
    vector<int> l(n);
    vector<int> r(n);
    vector<int> a(n);

    cin >> n >> x;

    for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i] >> a[i];
    }

    int answer = dfs(l,r,a,x,n);

    cout << answer << '\n';

    return 0;
}