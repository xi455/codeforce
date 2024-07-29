#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    char temp;
    bool check = true;
    cin >> n;

    while (cin >> temp)
    {
        if (temp == '1')
        {
            check = false;
            break;
        }
    }

    cout << (check ? "EASY" : "HARD") << endl;
}
