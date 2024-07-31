#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, i;
    vector<int> vt_temp;

    cin >> n;
    while (n--)
    {
        cin >> i;
        vt_temp.push_back(i);
    }

    sort(vt_temp.begin(), vt_temp.end());
    for (int i : vt_temp)
    {
        cout << i << " ";
    }
}
