#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    int n;
    cin >> n;
    cin.ignore();

    string value;
    int answer = 0;
    while (n--)
    {
        getline(cin, value);

        if (value == "++X") {
            ++answer;
        } else if (value == "--X") {
            --answer;
        } else if (value == "X++") {
            answer++;
        } else if (value == "X--") {
            answer--;
        }
    }

    cout << answer << endl;
}
