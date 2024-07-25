#include <bits/stdc++.h>
using namespace std;

int n, total = 0;
int x, y, z;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    total = 0;
    while (n--)
    {
        cin >> x >> y >> z;
        total += x + y + z;
    }

    if (total == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
