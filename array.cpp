#include <iostream>
#include <algorithm>
#include <functional>


int main() {

    int intList[5] = {1,2,3,4};
    
    // adding a value to index number 4
    intList[4] = 100;

    // replacing the value of index number 0
    intList[0] = 9;

    // total bytes / bytes per element = number of elements
    for (int i = 0; i < sizeof(intList)/sizeof(intList[0]); i++) {
        std::cout << intList[i] << "\n";
    }

    // sum of all elemtns of the array
    int sumOfElements = 0;
    for (int i = 0; i < sizeof(intList)/sizeof(intList[0]); i++) {
        sumOfElements += intList[i];
    }
    std::cout << "The sum of all elements of the array is: " << sumOfElements << "\n";

    // print a sorted array
    int n = sizeof(intList)/sizeof(intList[0]);
    // pointer to the first element, pointer to one past the last element
    std::sort(intList, intList + n);

    std::cout << "Sorted array: " << intList[0];
    for (int i = 1; i < sizeof(intList)/sizeof(intList[0]); i++) {
        std::cout << ", " << intList[i];
    }
    std::cout << "\n";

    // printing a reverse sorted array

    //std::reverse(intList, intList + n);
    std::sort(intList, intList + n, std::greater<int>());
    
    std::cout << "Sorted array (descending order): " << intList[0];
    for (int i = 1; i < sizeof(intList)/sizeof(intList[0]); i++) {
        std::cout << ", " << intList[i];
    }
    std::cout << "\n";
    

    std::string sL[5] = {"C++", "er", "versta", "forritunarmál", "heimsins"};
    
    std::cout << sL[2] << ' ' << sL[3] << ' ' << sL[4] << ' ' << sL[1] << ' ' << sL[0] << "\n";
    std::cout << sL[4][3] << sL[2][5] << sL[2][4] << sL[2][4] << sL[4][2] << ' ' << sL[1] << ' ';
    for (int i = 0; i < 5; i++) {std::cout << sL[2][i];}
    std::cout << sL[4][2] << ' ';
    for (int i = 0; i < 6; i++) {std::cout << sL[3][i];}
    std::cout << sL[2][5] << sL[1][1] << sL[4][2] << ' ' << sL[4] << "\n";
    


    return 0;
}