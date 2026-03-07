#include <iostream>
#include <string>

int check(std::string &row1, std::string &row2, int columnNum) {

    if (row1[0] == 'o') {
        if (row2[0] == 'o' || row2[1] == 'o') {
            std::cout << "Neibb" << "\n";
            return 0;
        }
    }
    for (int i = 1; i < columnNum-1; i++) {
        if (row1[i] == 'o') {
            if (row2[i] == 'o' || row2[i-1] == 'o' || row2[i+1] == 'o') {
                std::cout << "Neibb" << "\n";
                return 0;
            }
        }
    }
    if (row1[columnNum] == 'o') {
        if (row2[columnNum-1] == 'o' || row2[columnNum] == 'o') {
            std::cout << "Neibb" << "\n";
            return 0;
        }
    }
    std::cout << "Jebb" << "\n";
    return 0;
}

int update(std::string &row1, std::string &row2, std::string choice) {

    int rowPos = choice[2] - '0';
    
    // std::cout << rowPos << "\n";

    int colPos = 0;

    for (int i = 4; i < choice.size(); i++) {
        colPos = colPos * 10 + (choice[i] - '0');
    }

    colPos--;
    
    if (rowPos == 1) {
        if (row1[colPos] == 'o') {
            row1[colPos] = '.';
        } else {
            row1[colPos] = 'o';
        }
    } else {
        if (row2[colPos] == 'o') {
            row2[colPos] = '.';
        } else {
            row2[colPos] = 'o';
        }
    }
    
    // std::cout << row1 << "\n" << row2 << "\n";
    
    return 0;
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
            update(row1, row2, choice);
        }
    }

    return 0;
}