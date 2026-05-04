#include <iostream>
#include <vector>

using namespace std;

int main() {


    vector<vector<int>> dice(3, vector<int>(6));

    for (int i = 0; i < 3; i++) {
        cin >> dice[i][0] >> dice[i][1] >> dice[i][2] >> dice[i][3] >> dice[i][4] >> dice[i][5];

        
    }

    return 0;
}