#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>

int main() {

    int n;
    std::cin >> n;
    std::cin.ignore();

    std::vector<int> sections;

    std::string numbers;
    std::getline(std::cin, numbers);
    std::stringstream ss(numbers);
    int temp;
    
    while (ss >> temp) {
        sections.push_back(temp);
    }

    //for (int i = 0; i < n; i++) {
    //    std::cout << sections[i] << ' ';
    //}
    //std::cout << '\n';

    // check if passengers can be divided equally in 3 
    int passengers = 0;
    for (int i = 0; i < n; i++) {
        passengers += sections[i];
    }
    float passengerPerBus = float(passengers) / 3;
    //std::cout << passengerPerBus << '\n';
    if (passengerPerBus-int(passengerPerBus) != 0) {
        std::cout << "-1" << '\n';
        return 0;
    } //else {
        //std::cout << "yes" << '\n';
    //}
    //

    int itr = 0, count1 = 0, count2 = 0, idx1, idx2;
    while (count1 < passengerPerBus) {
        count1 += sections[itr];
        itr++;
        if (count1 > passengerPerBus) {
            std::cout << "-1" << '\n';
            return 0;
        }
    }
    idx1 = itr;
    while (count2 < passengerPerBus) {
        count2 += sections[itr];
        itr++;
        if (count2 > passengerPerBus) {
            std::cout << "-1" << '\n';
            return 0;
        }
    }
    idx2 = itr;

    std::cout << idx1 << ' ' << idx2 << '\n';


    return 0;
}