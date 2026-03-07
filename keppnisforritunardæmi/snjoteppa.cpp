#include <iostream>

int check(std::string row1, std::string row2, int columnNum) {

    if (row1[0] == 'o') {
        if (row2[0] == 'o' || row2[1] == 'o') {
            std::cout << "Neibb" << "\n";
            return 0;
        }
    }
    for (int i = 1; i < columnNum; i++) {
        if (row1[i] == 'o') {
            if (row2[i] == 'o' || row2[i-1] == 'o' || row2[i+1] == 'o') {
                std::cout << "Neibb" << "\n";
                return 0;
            }
        }
    }
    std::cout << "Jebb";
    return 0;
}

int update(std::string choice) {

    int rowPos, colPos;

    rowPos = choice[2];
    colPos = choice[4];

    

}

int main() {

    std::string row1;
    std::string row2;

    int columnNum, queryNum;

    std::cin >> columnNum >> queryNum;
    
    std::cin >> row1 >> row2;

    std::cin.ignore();

    for (int i = 0; i < queryNum; i++) {
        std::string choice;
        getline(std::cin, choice);
        if (choice == "Q") {
            check(row1, row2, columnNum);
        }
        else {
            update(choice);
        }
    }

    return 0;
}