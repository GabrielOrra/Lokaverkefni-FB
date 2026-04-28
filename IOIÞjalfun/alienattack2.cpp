#include <iostream>
#include <vector>
using namespace std;

struct unionfind {
    vector<int> parent, gs;

    unionfind(int n) {
        parent.resize(n);
        gs.resize(n, 1);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int find(int i) {
        if (parent[i] == i) return i;
        return find(parent[i]);
    }

    void unite(int a, int b) {
        a = find(a), b = find(b);
        if (a == b) {
            return;
        }

        if (gs[a] > gs[b]) {
            parent[b] = a;
            gs[a] += gs[b];
        } else {
            parent[a] = b;
            gs[b] += gs[a];
        }
    }


};

int main() {

    int n, m;
    cin >> n >> m;

    unionfind uf(n);

    while (m--) {

        int i,j; 
        cin >> i >> j;
        uf.unite(i-1, j-1);

    }

    int mx = 0;
    for (int i = 0; i < n; i++) {
        if (i == uf.parent[i]) {
            if (uf.gs[i] > mx) {
                mx = uf.gs[i];
            }
        }
    }

    cout << mx << '\n';

    return 0;
}