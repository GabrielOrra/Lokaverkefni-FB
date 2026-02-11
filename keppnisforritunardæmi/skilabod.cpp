#include <iostream>
#include <vector>
#include <cmath>


int main() {

    std::vector<int> hypot;
    std::vector<int> transmitters;

    int numOfCoords;
    std::cin >> numOfCoords;
    for (int i = 0; i < numOfCoords; i++) {

        int x,y;
        std::cin >> x >> y;
        hypot.push_back(sqrt(x*x+y*y));
    }

    int numOfTransm;
    std::cin >> numOfTransm;
    for (int n = 0; n < numOfTransm; n++) {

        int range;
        std::cin >> range;
        transmitters.push_back(range);
    }

    for (int g = 0; g < numOfTransm; g++) {

        int totalRecieved = 0;

        for (int h = 0; h < numOfCoords; h++) {
            
            if (transmitters[g] > hypot[h]) {
                totalRecieved++;
            }
        }

        std::cout << totalRecieved << "\n";
    }

    return 0;
}