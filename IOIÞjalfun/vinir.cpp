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

    int n, q;
    cin >> n >> q;

    unionfind uf(n);

    while (q--) {

        int op;
        cin >> op;

        if (op == 1) {
            int a,b; 
            cin >> a >> b;
            uf.unite(a-1, b-1);
        } else if (op == 2) {
            int a;
            cin >> a;
            cout << uf.gs[uf.find(a-1)] - 1 << '\n';
        }
    }

    return 0;
}