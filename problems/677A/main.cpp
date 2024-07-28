#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, h, num = 0;
    int current;

    cin >> n >> h;
    while (n--)
    {
        cin >> current;
        if (current > h)
        {
            num += 2;
        }
        else
        {
            num++;
        }
    }
    cout << num << endl;
}
