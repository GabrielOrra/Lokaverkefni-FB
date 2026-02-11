#include <iostream>
#include <string>

int main() {

    std::string input1, input2, a,b,c,d;

    std::cin >> input1;
    std::cin >> input2;

    int split1 = input1.find('|');  // finna index af '|'
    int split2 = input1.find('|');

    a = input1.substr(0, split1);   // strengurinn frá byrjun til '|'
    b = input1.substr(split1 + 1);  //strengurinn frá splittinu til endans

    c = input2.substr(0, split2); 
    d = input2.substr(split2 + 1);

    std::cout << a << b << " ";
    std::cout << c << d;

    return 0;
}