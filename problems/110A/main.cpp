#include <bits/stdc++.h>

using namespace std;

string temp;
int num = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (cin >> temp)
    {
        num = 0;
        for (char c : temp)
        {
            if (c == '4' || c == '7')
                num++;
        }

        if (num == 4 || num == 7)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
