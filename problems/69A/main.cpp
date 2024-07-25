#include <bits/stdc++.h>
using namespace std;

int n, total = 0;
vector<int> ve_temp(3, 0);
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

        ve_temp[0] += x;
        ve_temp[1] += y;
        ve_temp[2] += z;
    }

    if (ve_temp[0] == 0 && ve_temp[1] == 0 && ve_temp[2] == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
