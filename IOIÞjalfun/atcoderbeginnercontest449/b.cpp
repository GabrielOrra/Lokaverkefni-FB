#include <iostream>

int main() {

    int h,w,q;

    std::cin >> h >> w >> q;

    for (int i = 0; i < q; i++) {

        int rorc, num;
        std::cin >> rorc >> num;

        if (rorc == 1) {
            std::cout << num * w << '\n';
            h -= num;
        }
        else{
            std::cout << num * h << '\n';
            w -= num;
        } 
    }


    return 0;
}