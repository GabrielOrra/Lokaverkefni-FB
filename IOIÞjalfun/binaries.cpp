#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // upper_bound(g) -> g < v[i]
    // lower_bound(g) -> g <= v[i]
    // þessi virka vel á ordered set

    set<int> t{1,3,4,5,7,10,23,19};

    int v = *lower_bound(t.begin(), t.end(), 7);

    cout << v << '\n';
}