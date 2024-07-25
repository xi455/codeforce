#include <bits/stdc++.h>
using namespace std;

int main() {
    string array[5][5], current;
    int x, y;

    for (int index = 0; index < 5; index++) {
        for (int jndex = 0; jndex < 5; jndex++) {
            cin >> current;

            if (current == "1") {
                x = index;
                y = jndex;
            }

            array[index][jndex] = current;
        }
    }

    int answer = abs(x - 2) + abs(y - 2);
    cout << answer << endl;
}
