#include <iostream>
#include <vector>
#include <set>

int main() {

    int n,m;
    std::cin >> n >> m;
    std::string s,t;
    std::cin >> s >> t;

    std::vector<int> nSet;
    std::set<int> numbers;


    for (int itr = 0; itr < m; itr++) {
        int i, j;
        std::cin >> i >> j;
        i--;
        j--;
        numbers.insert(i);
        numbers.insert(j);

        // std::cout << numbers.size() << '\n';
    }

    for (int itr = 0; itr < n-1; itr++) {
        if (numbers.find(itr) == numbers.end()) {
            nSet.push_back(itr);
        }
    }

    for (int itr = 0; itr < nSet.size(); itr++) {
        int index = nSet[itr];

        if (s[index] != t[index]) {
            std::cout << "No" << '\n';   
            return 0;     
        }
    }

    std::cout << "Yes" << '\n';
    
    //for (int itr = 0; itr < nSet.size(); itr++) {
    //    std::cout << nSet[itr] << ' ';
    //}
    //std::cout << '\n';


    return 0;
}