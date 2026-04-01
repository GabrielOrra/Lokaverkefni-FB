#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> s;

    // O(1)
    s.push_back(7);

    // O(1)
    s.back();

    // O(1)
    s.pop_back();

    // O(n)
    s.erase(s.begin() + 1);


    return 0;
}