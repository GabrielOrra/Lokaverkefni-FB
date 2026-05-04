#include <iostream>
#include <queue>
#include <vector>
#include <set>
using namespace std;

int main() {

    int n, m;
    int counter = 1;
    set<pair<int,int>> s;
    queue<int> q;
    q.push(1);
    

    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        s.insert({a,b});
    }

    while (!q.empty()) {
        int current_item = q.front();
        q.pop();
        for (pair<int,int> p : s) {
            if (p.first == current_item) {
                q.push(p.second);
                s.erase(p);
            }
        }
    }

    cout << counter << '\n';

    return 0;
}