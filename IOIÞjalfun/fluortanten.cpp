#include <iostream>
#include <vector>
#include <sstream>
#include <functional>
#include <algorithm>


int main() {

    int n, temp;
    int itr = 0;
    std::cin >> n;
    std::cin.ignore();
    std::vector<int> queue;
    std::vector<int> sums;

    std::string line;
    std::getline(std::cin, line);

    std::stringstream ss(line);

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
    
    // troubleshooting
    //for (int i : queue) {
    //    std::cout << i << ' ';
    //} 
    //std::cout << '\n';

    // calculating sum of vector with 0 at every index 
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int x = 0; x < n; x++) {
            sum += (queue[x] * (x + 1));
            
            // troubleshooting
            //std::cout << queue[x] << ' ' << (x + 1) << ' ' << sum << '\n';
        }
        sums.push_back(sum);
        
        if (i < n-1) {
            std::swap(queue[i], queue[i+1]);
        }
    
        
        // troubleshooting
        //for (int i : queue) {
        //    std::cout << i << ' ';
        //}
        //std::cout << '\n';
    }
    //

    std::sort(sums.begin(), sums.end());
    std::cout << sums[n-1] << '\n';

    // troubleshooting
    //for (int i = 0; i < n+1; i++) {
    //    std::cout << queue[i] << ' ';
    //}
    //std::cout << '\n';

    return 0;
}