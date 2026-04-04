#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {

    vector<int> s;

    // O(1)
    s.push_back(7);

    // O(1)
    //s.back();

    // O(1)
    s.pop_back();

    // O(n)
    s.erase(s.begin() + 1);

    stack<char> sk; 
    sk.push('a');
    cout << sk.top() << '\n';

    char x = 'b';
    sk.push(x);
    cout << sk.top() << '\n';

    sk.pop();
    cout << sk.top() << '\n';



    return 0;
}