#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, k;
    cin >> n >> k;

    long long count_odds = (n + 1) / 2;
    if (k <= count_odds)
    {
        cout << 1 + (k - 1) * 2 << endl;
    }
    else
    {
        k -= count_odds;
        cout << k * 2 << endl;
    }
}
