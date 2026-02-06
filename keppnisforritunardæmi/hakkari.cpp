#include <iostream>
#include <vector>


int main() {

    int rowAmount, columnAmount;
    int mineAmount = 0;

    std::vector<int> rowPosition;   // búa til array
    std::vector<int> columnPosition;

    std::cin >> rowAmount >> columnAmount;

    for (int i = 0; i < rowAmount; i++) {

        std::string field;
        std::cin >> field;

        for (int y = 0; y < field.length(); y++) {

            if (field[y] == '*') {

                rowPosition.push_back(i+1);     // "append" í array
                columnPosition.push_back(y+1);
                mineAmount++;
            }
        }
    }
    
    std::cout << mineAmount << "\n";
    for (int i = 0; i < mineAmount; i++){

        std::cout << rowPosition[i] << " " << columnPosition[i] << "\n"; 
    }

    return 0;
}