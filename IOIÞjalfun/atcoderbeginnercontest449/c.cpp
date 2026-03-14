#include <iostream>
#include <string>

int main() {

    int n,l,r;
    int counter = 0;
    std::string s;

    std::cin >> n >> l >> r >> s;

    for (int i = 0; i < n; i++){
        for (int y = i; y < n; y++) {
            if (s[i] == s[y]) {
                if (y - i <= r && y - i >= l) {
                    counter++;
                    // std::cout << s[i] << i << ' ' << s[y] << y << '\n';
                }
            }
        }
    }

    //for (int i = 0; i < n; i++) {
    //    char letter = s[i];
    //    int found = s.find(letter, i+1);
    //    std::cout << letter << ' ' << found << '\n';
    //
    //}
    std::cout << counter << '\n';

    return 0;
}