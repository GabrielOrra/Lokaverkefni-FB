#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<int> q;

    // O(1)
    q.push(7);
    // {7}

    q.push(5);
    // {7,5}

    // O(1)
    int x = q.front();
    // x = 7

    q.pop();
    // {5}

    q.size();
    

    return 0;
}