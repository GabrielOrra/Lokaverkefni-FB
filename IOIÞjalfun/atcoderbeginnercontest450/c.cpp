#include <iostream>
#include <vector>
#include <set>

int main() {

    int h,w;
    std::cin >> h >> w;

    char vector[h][w];
    
    std::vector<std::vector<std::pair<int, int>>> hnit;   


    for (int r = 0; r < h; r++) {
        for (int c = 0; c < w; c++) {
            char x;
            std::cin >> x;
            vector[r][c] = x;
        }
    }

    int hnitIndex = 0;

    for (int r = 1; r < h-1; r++) {
        for (int c = 1; c < w-1; c++) {
            if (vector[r][c] == '.') {
                hnit[hnitIndex].push_back(std::make_pair(r, c));
                if (vector[r+1][c] == '#' && vector[r][c+1] == '#') {
                    hnitIndex++;
                } 
            }
        }
    }

    std::cout << hnit.size() << '\n';

    //for (int i = 0; i < )


    //for (int r = 0; r < h; r++) {
    //    for (int c = 0; c < w; c++) {
    //        std::cout << vector[r][c];
    //    }
    //    std::cout << '\n';
    //}

    return 0;
}