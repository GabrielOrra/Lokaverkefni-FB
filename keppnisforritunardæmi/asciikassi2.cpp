#include <iostream>
#include <string>

int topAndBottomLine(int input) {

    char space = ' ';
    
    std::string spaces(input+1, space);
    std::cout << spaces << "x\n";

    return 0;
}

int middle(int input) {

    char space = ' ';
    int spaces = 1;
    for (int i = 0; i < input; i++) {
        spaces += 2;
    }
    std::string spacesCout(spaces, space);

    std::cout << "x" << spacesCout << "x\n";
    return 0;
}

int upperMiddles(int input) {

    int spaces = 1;
    char space = ' ';
    if (input == 0) {}
    else {
        for (int i = input; i > 0; i--) {
            std::string startSpaces(i, space);
            std::string middleSpaces(spaces, space);

            std::cout << startSpaces << "/" << middleSpaces << "\\" << std::endl;

            spaces += 2;
        }
    }

    return 0;
}

int lowerMiddles(int input) {

    char space = ' ';
    int startSpace = 1;
    int middleSpace = (input*2)-1;

    std::string startSpaces(startSpace, space);
    if (input == 0) {}
    else {
        for (int i = 0; i < input; i++) {

            std::string startSpaces(startSpace, space);
            std::string middleSpaces(middleSpace, space);
            std::cout << startSpaces << "\\" << middleSpaces << "/\n";
            
            startSpace++;
            middleSpace -= 2;

        }
    }

    return 0;
}

int main() {

    int input;
    std::cin >> input;

    topAndBottomLine(input);
    upperMiddles(input);
    middle(input);
    lowerMiddles(input);
    topAndBottomLine(input);

    return 0;
}