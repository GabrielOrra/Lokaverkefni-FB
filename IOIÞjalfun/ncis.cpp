#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {

    int l;
    std::cin >> l;

    std::vector<std::string> words(l);

    for (int i = 0; i < l; i++) {
        std::cin >> words[i];
    }

    struct 
    {
        bool operator()(std::string a, std::string b) const {return tolower(a)};
    };
    

    sort(words.begin(), words.end(), customLess);

    for (int i = 0; i < l; i++) {
        std::cout << words[i] << '\n';
    }

    return 0;
}