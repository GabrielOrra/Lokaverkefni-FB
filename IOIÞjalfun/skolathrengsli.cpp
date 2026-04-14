#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;


int bfs(vector<pair<int,int>> v, int n, int goal, int begin) {

    // keeping track of what node to check next
    queue<int> q;
    q.push(begin);

    // keeping track of what nodes i've already visited
    set<int> been;
    been.emplace(begin);

    int counter = 0;

    while (!q.empty()) {
        counter++;
        int at = q.front();
        been.emplace(at);
        q.pop();

        // O (10**6) => O(m) => O(n)
        for (pair<int,int> p : v) {
            
            if (p.first == at) {
                if (p.second == goal) {
                    cout << counter << '\n';
                    return 0;
                }
                if (been.count(p.second) == 0) {
                    q.push(p.second);
                }
            }
            else if (p.second == at) {
                if (p.first == goal) {
                    cout << counter << '\n';
                    return 0;
                }
                if (been.count(p.first) == 0) {
                    q.push(p.first);
                }
            }
            else {continue;}
        }
    }

    cout << "O nei!" << '\n';
    return 0;
}

int main() {

    int n, m, s, t;
    vector<pair<int,int>> v(m);

    cin >> n >> m >> s;

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;

        v.push_back({x,y});
    }

    cin >> t;

    for (int i = 0; i < t; i++) {
        int z;
        cin >> z;

        if (z == s) {
            cout << 0 << '\n';
        }
        else {
            bfs(v,n,s,z);
        }
    }


    return 0;
}