#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// s = starting point
// e = end point
// mp = adjecency matrix/ adjecency vector
vector<vector<int>> bfs(pair<int, int> s, vector<string> &mp, int h, int w) {
    vector<vector<int>> dist(h, vector<int>(w, -1));

    queue<pair<int, int>> q;
    q.push(s);
    // { s }

    dist[s.first][s.second] = 0;
    // s = {4, 3}
    // s.first = 4
    // s.second = 3

    vector<pair<int, int>> diff = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    // O(h * w)
    while (!q.empty()) {
        pair<int, int> at = q.front();
        q.pop();

        // O(1)
        for (pair<int, int> d : diff) {
            pair<int, int> nxt = {at.first + d.first, at.second + d.second};
            if (nxt.first < 0 || nxt.first >= h) continue;
            if (nxt.second < 0 || nxt.second >= w) continue;

            // O(1)
            if (mp[nxt.first][nxt.second] != '#') {
                if (dist[nxt.first][nxt.second] == -1) {
                    dist[nxt.first][nxt.second] = dist[at.first][at.second] + 1;
                    q.push(nxt);
                }
            } 
        }
    }

    return dist;
}

int main() {
    int h, w;
    cin >> h >> w;

    vector<string> mp(h);

    pair<int, int> s = {-1, -1};

    for(int i = 0; i < h; i++) {
        cin >> mp[i];
        for (int j = 0; j < w; j++) {
            if (mp[i][j] == 'S') s = {i, j};
        }
    }

    // O(h * w) = O(n)
    vector<vector<int>> dist = bfs(s, mp, h, w);

    int best = 1'000'000'000;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (mp[i][j] == 'G') {
                if (dist[i][j] != -1) {
                    best = min(best, dist[i][j]);
                }
            }
        }
    }

    if (best == 1'000'000'000) {
        cout << "thralatlega nettengdur" << '\n';
    } else {
        cout << best << '\n';
    }
    
    return 0;
}