#include <deque>
#include <iostream>

using namespace std;

int main() {

    deque<int> q;

    // O(1)
    q.push_front(7);
    q.push_back(5);
    int x = q.front();
    // {7}
    int x = q.back();
    // {5}
    q.pop_back();
    q.pop_front();

    q.empty();

    q.size();
}
