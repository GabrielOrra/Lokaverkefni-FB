#include <queue>

using namespace std;

int main() {

    // maximum priority queue
    priority_queue<int> max_pq;

    // O(log n)
    max_pq.push(7);
    // {7}

    max_pq.push(8);
    // {8,7}

    max_pq.push(3);
    // {8,7,3}

    max_pq.push(3);
    // {8,7,3,3}

    // O(1)
    int x = max_pq.top();
    // 8

    // O(log n)
    max_pq.pop();
    // {7,3,3}

    // Minimum priorty queue
    priority_queue<int, vector<int>, greater<int>> min_pq;

    // O(log n)
    min_pq.push(7);
    // {7}

    min_pq.push(8);
    // {7,8}

    min_pq.push(3);
    // {3,7,8}

    min_pq.push(3);
    // {3,3,7,8}

    // O(1)
    int x = min_pq.top();
    // 8

    // O(log n)
    min_pq.pop();
    // {3,3,7}

    // O(1)
    min_pq.empty();
    min_pq.size();

}