#include <iostream>

int main() {

    int intList[5] = {1,2,3,4};
    
    // adding a value to index number 4
    intList[4] = 100;

    // replacing the value of index number 0
    intList[0] = 9;

    std::cout << intList[4] << "\n" << intList[0] << "\n";


    return 0;
}