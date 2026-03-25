#include <iostream>
#include <vector>
#include <sstream>
#include <functional>
#include <algorithm>

using namespace std;

int main() {

    int n, temp;
    int itr = 0;
    cin >> n;
    cin.ignore();
    vector<int> queue;
    vector<int> sums;

    string line;
    getline(cin, line);

    stringstream ss(line);

    while (ss >> temp) {
        queue.push_back(temp);
    }

    // removing the 0 and inserting it at index 0
    for (int i = 0; i < n; i++) {
        if (queue[i] == 0) {
            queue.erase(queue.begin() + i);
            break;
        }
    }
    queue.insert(queue.begin(), 0);
    //

    // calculating sum of vector with 0 at every index 
    for (int i = 0; i < n; i++) {

        int sum = 0;
        for (int x = 0; x < n; x++) {
            sum += (queue[x] * (x + 1));
        }

        sums.push_back(sum);
        
        if (i < n-1) {
            swap(queue[i], queue[i+1]);
        }
    }
    //

    sort(sums.begin(), sums.end());
    cout << sums[n-1] << '\n';
   
    return 0;
}