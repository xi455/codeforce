#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    while (cin >> n)
    {
        if (n % 2 == 0)
        {
            cout << (n / 2) << endl;
        }
        else
        {
            cout << -(n / 2 + 1) << endl;
        }
    }
}
