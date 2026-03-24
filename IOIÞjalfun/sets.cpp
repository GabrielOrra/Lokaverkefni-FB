#include <iostream>
#include <set>

int main() {
    std::set<int> s;

    // O(log n)
    s.emplace(1);
    s.emplace(2);
    s.emplace(3);

    // O(log n)
    s.erase(1);


    for (int i : s) {
        std::cout << i << '\n';
    }
}
