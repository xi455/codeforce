#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, num = 1;
    string s;

    cin >> n;
    while (n--)
    {
        string temp;
        cin >> temp;
        s.append(temp);
    }

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            num++;
        }
    }

    cout << num << endl;
}
