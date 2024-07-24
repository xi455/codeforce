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

    int answer;
    while (x > 2) {
        answer += 1;
        x -= 1;
    }
    while (x < 2) {
        answer += 1;
        x += 1;
    }
    while (y > 2) {
        answer += 1;
        y -= 1;
    }
    while (y < 2) {
        answer += 1;
        y += 1;
    }
    cout << answer << endl;
}
