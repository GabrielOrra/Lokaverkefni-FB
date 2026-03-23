#include <iostream>
#include <set>

int main() {

    int n, d;
    std::cin >> n >> d;
    
    std::set<int> pitches;

    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        pitches.insert(x);
    }

    int counter = 0;
    while (!pitches.empty()) {
        //for (int item : pitches) {
        //    std::cout << item << ' ';
        //}
        std::cout << '\n';

        int limit = *pitches.begin() + d;
        std::set<int>::iterator itr = pitches.upper_bound(limit);

        if (itr == pitches.begin()) {
            pitches.erase(pitches.begin());
        } else {
            pitches.erase(pitches.begin(), itr);
        }
        counter++;
    }

    std::cout << counter << '\n';

    return 0;
}