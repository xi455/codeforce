#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string temp;
    string hello = "hello";

    while (cin >> temp)
    {
        int index = 0;
        bool check = false;
        for (char c : temp)
        {
            if (c == hello[index])
            {
                index++;
            }

            if (index == hello.size())
            {
                check = true;
                break;
            }
        }
        cout << (check ? "YES" : "NO") << endl;
    }
}
