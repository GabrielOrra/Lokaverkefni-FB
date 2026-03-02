#include <iostream>

int main() {

    int counter = 0;


    std::string font;
    int a,b,c,d,e,f;

    std::cin >> font >> a >> b >> c >> d >> e >> f;

    if (font == "monospace") {
        counter += 1;
    }

    if (a+b+c <= 25) {
        counter += 1;
    }

    int fontColor = d+f;
    fontColor += 255-e;

    if (fontColor <= 35) {
        counter += 1;
    }

    if (counter >= 2) {
        std::cout << "L33T H4X0R\n";
    }
    else {
        std::cout << "n00b\n";
    }

    return 0;
}